
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_hcb {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ) ;
 int FUNC_2 (struct sym_hcb*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct sym_hcb*) ;
 char* FUNC_5 (struct sym_hcb*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7 (struct sym_hcb *VAR_10)
{
 u_char VAR_11 = 0;
 int VAR_12;

 if (!(VAR_10->features & VAR_3) || !(FUNC_0(VAR_10, VAR_8) & VAR_4))
  goto do_chip_reset;

 FUNC_2(VAR_10, VAR_7, VAR_1);
 for (VAR_12 = 100000 ; VAR_12 ; --VAR_12) {
  VAR_11 = FUNC_0(VAR_10, VAR_7);
  if (VAR_11 & VAR_5) {
   FUNC_1(VAR_10, VAR_9);
  }
  else if (VAR_11 & VAR_2) {
   if (FUNC_0(VAR_10, VAR_6) & VAR_0)
    break;
  }
  FUNC_6(5);
 }
 FUNC_2(VAR_10, VAR_7, 0);
 if (!VAR_12)
  FUNC_3("%s: unable to abort current chip operation, "
         "ISTAT=0x%02x.\n", FUNC_5(VAR_10), VAR_11);
do_chip_reset:
 FUNC_4(VAR_10);
}
