
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_2, unsigned VAR_3,
    const char *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7 = 5;
 u32 VAR_8;
 if (VAR_5 > VAR_1)
  return -1;

 VAR_8 = FUNC_0(VAR_2, VAR_3);
try_again:
 if (VAR_7--) {
  VAR_6 = FUNC_1(VAR_8, VAR_4, VAR_5);
  if (VAR_6 == -VAR_0) {
   int VAR_9 = 3;
   do {


    if (FUNC_1(VAR_8, "12345678", 8) >= 0) {
     FUNC_2(2);
     goto try_again;
    }
   } while (VAR_9--);
  }
 }

 return VAR_6;
}
