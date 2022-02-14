
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (unsigned short) ;
 scalar_t__ FUNC_1 (unsigned short) ;
 scalar_t__ FUNC_2 (unsigned short) ;
 scalar_t__ FUNC_3 (unsigned short) ;
 scalar_t__ FUNC_4 (unsigned short) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 unsigned long FUNC_6 (int ,int) ;
 int* VAR_5 ;
 int FUNC_7 () ;

unsigned long FUNC_8(unsigned short VAR_6)
{
 unsigned long VAR_7 = -VAR_0;
 int VAR_8 = FUNC_0(VAR_6);
 FUNC_5();
 if (FUNC_3(VAR_6)) {
  VAR_7 = FUNC_6(VAR_3, VAR_8);
 } else if (FUNC_4(VAR_6)) {
  if (FUNC_6(VAR_1, VAR_8) == 0) {
   VAR_7 = FUNC_6(VAR_4, VAR_8);
  }
 } else if (FUNC_1(VAR_6)) {
  VAR_7 = FUNC_6(VAR_1, VAR_8);
  if (VAR_7 > 0)
   VAR_7 = FUNC_6(VAR_3, VAR_8);
  else if (VAR_7 == 0)
   VAR_7 =
       FUNC_6(VAR_2, VAR_5[VAR_8]);
 } else if (FUNC_2(VAR_6)) {
  VAR_7 = FUNC_6(VAR_2, VAR_8);
 }
 FUNC_7();
 return VAR_7;
}
