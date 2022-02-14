
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int,char*,int) ;

int
FUNC_3(int VAR_3)
{
 int VAR_4, VAR_5 = 0;
 char VAR_6[VAR_1];
 while (1) {
  VAR_2 = 0;
  VAR_4 = (int)FUNC_2(VAR_3, VAR_6, VAR_1);
  if (VAR_4 < 0) {
   if (VAR_2 == VAR_0) {
    return VAR_5;
   } else {
    FUNC_0("read from fd %d failed.", VAR_3);
    FUNC_1();
   }
  }
  VAR_5 += VAR_4;
 }
}
