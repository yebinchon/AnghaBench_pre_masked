
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mb86a16_state {int dummy; } ;


 scalar_t__ FUNC_0 (struct mb86a16_state*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (struct mb86a16_state*,int,unsigned char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mb86a16_state*,int) ;
 int FUNC_5 (struct mb86a16_state*,int) ;
 int FUNC_6 (struct mb86a16_state*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct mb86a16_state *VAR_3,
        int VAR_4,
        unsigned char *VAR_5)
{

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 u32 VAR_9;
 unsigned char VAR_10[3] ;
 int VAR_11 ;

 if (*VAR_5 > 45) {
  if (FUNC_0(VAR_3, 2, 1, 2) < 0) {
   FUNC_1(VAR_2, VAR_1, 1, "CNTM set Error");
   return -1;
  }
  VAR_8 = 40000;
 } else {
  if (FUNC_0(VAR_3, 3, 1, 2) < 0) {
   FUNC_1(VAR_2, VAR_1, 1, "CNTM set Error");
   return -1;
  }
  VAR_8 = 80000;
 }
 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  if (VAR_11 == 0)
   VAR_7 = VAR_4 * 98 / 100;
  else if (VAR_11 == 1)
   VAR_7 = VAR_4;
  else
   VAR_7 = VAR_4 * 102 / 100;
  FUNC_4(VAR_3, VAR_7);
  FUNC_5(VAR_3, VAR_7);
  FUNC_6(VAR_3);
  VAR_9 = (VAR_8 + 99 * VAR_7 / 100) / VAR_7;
  if (VAR_9 == 0)
   VAR_9 = 1;
  FUNC_3(10);
  if (FUNC_2(VAR_3, 0x37, &(VAR_10[VAR_11])) != 2) {
   FUNC_1(VAR_2, VAR_1, 1, "I2C transfer error");
   return -VAR_0;
  }
 }
 if ((VAR_10[1] > VAR_10[0] * 112 / 100) &&
     (VAR_10[1] > VAR_10[2] * 112 / 100)) {

  VAR_6 = 1;
 } else {
  VAR_6 = 0;
 }
 *VAR_5 = VAR_10[1];

 if (FUNC_0(VAR_3, 0, 1, 2) < 0) {
  FUNC_1(VAR_2, VAR_1, 1, "CNTM set Error");
  return -1;
 }

 return VAR_6;
}
