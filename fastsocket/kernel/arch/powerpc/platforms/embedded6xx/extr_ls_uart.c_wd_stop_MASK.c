
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,char const) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(struct work_struct *VAR_7)
{
 const char VAR_8[] = "AAAAFFFFJJJJ>>>>VVVV>>>>ZZZZVVVVKKKK";
 int VAR_9 = 0, VAR_10 = 8;
 int VAR_11 = FUNC_4(VAR_8);

 while (VAR_10--) {
  int VAR_12;
  char VAR_13 = FUNC_0(VAR_6 + VAR_0);

  if (VAR_13 & (VAR_3 | VAR_2)) {
   for (VAR_12 = 0; VAR_12 < 16 && VAR_9 < VAR_11; VAR_12++, VAR_9++)
    FUNC_2(VAR_6 + VAR_5, VAR_8[VAR_9]);
   if (VAR_9 == VAR_11) {


    FUNC_1(7);
    FUNC_3("linkstation: disarming the AVR watchdog: ");
    while (FUNC_0(VAR_6 + VAR_0) & VAR_1)
     FUNC_3("%c", FUNC_0(VAR_6 + VAR_4));
    break;
   }
  }
  FUNC_1(17);
 }
 FUNC_3("\n");
}
