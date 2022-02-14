
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_hcb {int multiplier; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct sym_hcb*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (struct sym_hcb*) ;
 int VAR_10 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct sym_hcb *VAR_11, u_char VAR_12)
{



 if (VAR_11->multiplier <= 1) {
  FUNC_1(VAR_11, VAR_6, VAR_12);
  return;
 }

 if (VAR_10 >= 2)
  FUNC_2 ("%s: enabling clock multiplier\n", FUNC_3(VAR_11));

 FUNC_1(VAR_11, VAR_7, VAR_0);




 if (VAR_11->features & VAR_2) {
  int VAR_13 = 20;
  while (!(FUNC_0(VAR_11, VAR_9) & VAR_4) && --VAR_13 > 0)
   FUNC_4(20);
  if (!VAR_13)
   FUNC_2("%s: the chip cannot lock the frequency\n",
    FUNC_3(VAR_11));
 } else {
  FUNC_0(VAR_11, VAR_5);
  FUNC_4(50+10);
 }
 FUNC_1(VAR_11, VAR_8, VAR_3);
 FUNC_1(VAR_11, VAR_6, VAR_12);
 FUNC_1(VAR_11, VAR_7, (VAR_0|VAR_1));
 FUNC_1(VAR_11, VAR_8, 0x00);
}
