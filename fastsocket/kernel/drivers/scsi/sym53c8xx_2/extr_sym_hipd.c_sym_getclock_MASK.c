
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_hcb {unsigned char sv_scntl3; unsigned char sv_stest1; int multiplier; unsigned int clock_khz; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct sym_hcb*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,...) ;
 unsigned int FUNC_2 (struct sym_hcb*) ;
 char* FUNC_3 (struct sym_hcb*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4 (struct sym_hcb *VAR_4, int VAR_5)
{
 unsigned char VAR_6 = VAR_4->sv_scntl3;
 unsigned char VAR_7 = VAR_4->sv_stest1;
 unsigned VAR_8;

 VAR_4->multiplier = 1;
 VAR_8 = 40000;



 if (VAR_5 > 1 && (VAR_7 & (VAR_0+VAR_1)) == VAR_0+VAR_1) {
  if (VAR_3 >= 2)
   FUNC_1 ("%s: clock multiplier found\n", FUNC_3(VAR_4));
  VAR_4->multiplier = VAR_5;
 }






 if (VAR_4->multiplier != VAR_5 || (VAR_6 & 7) < 3 || !(VAR_6 & 1)) {
  FUNC_0(VAR_4, VAR_2, 0);
  VAR_8 = FUNC_2 (VAR_4);

  if (VAR_3)
   FUNC_1 ("%s: chip clock is %uKHz\n", FUNC_3(VAR_4), VAR_8);

  if (VAR_8 < 45000) VAR_8 = 40000;
  else if (VAR_8 < 55000) VAR_8 = 50000;
  else VAR_8 = 80000;

  if (VAR_8 < 80000 && VAR_5 > 1) {
   if (VAR_3 >= 2)
    FUNC_1 ("%s: clock multiplier assumed\n",
     FUNC_3(VAR_4));
   VAR_4->multiplier = VAR_5;
  }
 } else {
  if ((VAR_6 & 7) == 3) VAR_8 = 40000;
  else if ((VAR_6 & 7) == 5) VAR_8 = 80000;
  else VAR_8 = 160000;

  VAR_8 /= VAR_4->multiplier;
 }




 VAR_8 *= VAR_4->multiplier;
 VAR_4->clock_khz = VAR_8;
}
