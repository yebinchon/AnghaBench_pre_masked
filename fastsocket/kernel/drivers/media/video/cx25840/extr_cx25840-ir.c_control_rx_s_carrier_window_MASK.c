
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct i2c_client*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_5,
     unsigned int VAR_6,
     unsigned int *VAR_7,
     unsigned int *VAR_8)
{
 u32 VAR_9;
 unsigned int VAR_10 = VAR_6 * 16;

 if (*VAR_7 < FUNC_0(VAR_10, 16 + 3)) {
  VAR_9 = VAR_2;
  *VAR_7 = FUNC_0(VAR_10, 16 + 4);
 } else {
  VAR_9 = VAR_1;
  *VAR_7 = FUNC_0(VAR_10, 16 + 3);
 }

 if (*VAR_8 > FUNC_0(VAR_10, 16 - 3)) {
  VAR_9 |= VAR_3;
  *VAR_8 = FUNC_0(VAR_10, 16 - 4);
 } else {
  VAR_9 |= VAR_1;
  *VAR_8 = FUNC_0(VAR_10, 16 - 3);
 }
 FUNC_1(VAR_5, VAR_4, ~VAR_0, VAR_9);
}
