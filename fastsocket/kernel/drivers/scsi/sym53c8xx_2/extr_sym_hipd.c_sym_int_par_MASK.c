
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
typedef int u32 ;
struct sym_hcb {int * msgout; } ;
struct sym_ccb {int xerr_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct sym_hcb*,int) ;
 int FUNC_3 (struct sym_hcb*,int ,int ) ;
 int FUNC_4 (struct sym_hcb*,int ) ;
 int FUNC_5 (struct sym_hcb*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (char*,char*,int,int,int) ;
 scalar_t__ FUNC_7 () ;
 struct sym_ccb* FUNC_8 (struct sym_hcb*,int) ;
 int FUNC_9 (struct sym_hcb*) ;
 char* FUNC_10 (struct sym_hcb*) ;
 int FUNC_11 (struct sym_hcb*,int ) ;
 int FUNC_12 (struct sym_hcb*,struct sym_ccb*,int) ;
 int FUNC_13 (struct sym_hcb*) ;

__attribute__((used)) static void FUNC_14 (struct sym_hcb *VAR_17, u_short VAR_18)
{
 u_char VAR_19 = FUNC_0(VAR_17, VAR_2);
 u32 VAR_20 = FUNC_1(VAR_17, VAR_13);
 u32 VAR_21 = FUNC_1(VAR_17, VAR_11);
 u32 VAR_22 = FUNC_1(VAR_17, VAR_12);
 u_char VAR_23 = FUNC_0(VAR_17, VAR_14);
 u_char VAR_24 = VAR_21 >> 24;
 int VAR_25 = VAR_24 & 7;
 struct sym_ccb *VAR_26 = FUNC_8(VAR_17, VAR_22);

 if (FUNC_7())
  FUNC_6("%s: SCSI parity error detected: SCR1=%d DBC=%x SBCL=%x\n",
   FUNC_10(VAR_17), VAR_19, VAR_21, VAR_23);




 if (!(FUNC_0(VAR_17, VAR_15) & VAR_4)) {
  FUNC_11(VAR_17, VAR_3);
  return;
 }





 if (!VAR_26)
  goto reset_all;





 if ((VAR_24 & 0xc0) || !(VAR_25 & 1) || !(VAR_23 & 0x8))
  goto reset_all;




 FUNC_3(VAR_17, VAR_1, VAR_0);
 VAR_26->xerr_status |= VAR_8;




 VAR_17->msgout[0] = (VAR_25 == 7) ? VAR_7 : VAR_6;
 if (VAR_25 == 1 || VAR_25 == 5) {

  if (VAR_20 == FUNC_5(VAR_17, VAR_16))
   FUNC_2(VAR_17, VAR_20);

  else if (VAR_18 & VAR_5)
   FUNC_9 (VAR_17);

  else {
   FUNC_12 (VAR_17, VAR_26, VAR_20);
   FUNC_2(VAR_17, FUNC_4(VAR_17, VAR_10));
  }
 }
 else if (VAR_25 == 7)

  goto reset_all;



 else
  FUNC_2(VAR_17, FUNC_4(VAR_17, VAR_10));
 return;

reset_all:
 FUNC_13(VAR_17);
 return;
}
