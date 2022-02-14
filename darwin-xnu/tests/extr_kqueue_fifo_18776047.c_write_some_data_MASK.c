
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,char*,size_t) ;

int
FUNC_3(int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5 = 5;
 char * VAR_6 = "ABCDE";
 while (1) {
  VAR_1 = 0;
  VAR_3 = (int)FUNC_2(VAR_2, VAR_6, (size_t)VAR_5);
  if (VAR_3 < 0) {
   if (VAR_1 == VAR_0) {
    if (VAR_5 == 1)
     return VAR_4;
    else
     VAR_5--;
   } else {
    FUNC_0("write to fd %d of %s of len %d failed.", VAR_2, VAR_6, VAR_5);
    FUNC_1();
   }
  } else {
   VAR_4 += VAR_3;
  }
 }
}
