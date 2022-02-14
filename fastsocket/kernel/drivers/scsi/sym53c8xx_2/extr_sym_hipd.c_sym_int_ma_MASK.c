
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
typedef int u32 ;
struct TYPE_7__ {int addr; int size; } ;
struct sym_pmc {int ret; TYPE_2__ sg; } ;
struct sym_hcb {int features; int rv_ctest3; int scripta_ba; int scripta_sz; int scriptb_ba; int scriptb_sz; int * msgout; scalar_t__ scriptb0; scalar_t__ scripta0; } ;
struct TYPE_6__ {void* size; void* addr; } ;
struct TYPE_8__ {int sel_scntl3; } ;
struct TYPE_9__ {TYPE_1__ wresid; TYPE_3__ select; struct sym_pmc pm1; struct sym_pmc pm0; } ;
struct sym_ccb {TYPE_5__* cmd; int lun; int host_status; int tag; TYPE_4__ phys; } ;
struct scsi_device {int ppr; } ;
struct TYPE_10__ {struct scsi_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sym_hcb*,int ) ;
 int FUNC_2 (struct sym_hcb*,int ) ;
 int FUNC_3 (struct sym_hcb*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (struct sym_hcb*,int ,int) ;
 int FUNC_5 (struct sym_hcb*,int) ;
 int FUNC_6 (struct sym_hcb*,int ) ;
 int FUNC_7 (struct sym_hcb*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* FUNC_8 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 struct sym_ccb* FUNC_11 (struct sym_hcb*,int) ;
 char* FUNC_12 (struct sym_hcb*) ;
 int FUNC_13 (TYPE_5__*,char*,int,int,...) ;
 int FUNC_14 (struct sym_hcb*,struct sym_ccb*,int) ;
 int FUNC_15 (struct sym_hcb*) ;
 int VAR_44 ;

__attribute__((used)) static void FUNC_16 (struct sym_hcb *VAR_45)
{
 u32 VAR_46;
 u32 VAR_47;
 u32 VAR_48;
 u32 VAR_49;
 u32 VAR_50;
 u32 *VAR_51;
 u32 VAR_52, VAR_53;
 u32 *VAR_54;
        u32 VAR_55;
 u_int VAR_56;
 u_char VAR_57;
 u_char VAR_58, VAR_59;
 struct sym_pmc *VAR_60;
 struct sym_ccb *VAR_61;

 VAR_48 = FUNC_2(VAR_45, VAR_31);
 VAR_46 = FUNC_2(VAR_45, VAR_27);
 VAR_49 = FUNC_2(VAR_45, VAR_30);

 VAR_57 = VAR_46 >> 24;
 VAR_47 = VAR_46 & 0xffffff;
 VAR_56 = 0;




 VAR_61 = FUNC_11(VAR_45, VAR_49);







 if ((VAR_57 & 7) != 1 && (VAR_57 & 7) != 5) {
  u_char VAR_62, VAR_63;

  if (VAR_45->features & VAR_8)
   VAR_56 = FUNC_3(VAR_45, VAR_28);
  else {
   u32 VAR_64;




   VAR_64 = FUNC_2(VAR_45, VAR_29);





   if (VAR_64 & (VAR_5 << 16))
    VAR_56 = ((((VAR_64 >> 8) & 0x300) |
              (VAR_64 & 0xff)) - VAR_47) & 0x3ff;
   else
    VAR_56 = ((VAR_64 & 0xff) - VAR_47) & 0x7f;
  }







  VAR_47 += VAR_56;
  VAR_62 = FUNC_1(VAR_45, VAR_34);
  if (VAR_62 & VAR_16) VAR_47++;
  if (!(VAR_45->features & VAR_7))
   if (VAR_62 & VAR_18) VAR_47++;
  if (VAR_61 && (VAR_61->phys.select.sel_scntl3 & VAR_6)) {
   VAR_63 = FUNC_1(VAR_45, VAR_35);
   if (VAR_63 & VAR_17) VAR_47++;
   if (!(VAR_45->features & VAR_7))
    if (VAR_63 & VAR_19) VAR_47++;
  }




  FUNC_4(VAR_45, VAR_26, VAR_45->rv_ctest3 | VAR_0);
  FUNC_4(VAR_45, VAR_36, VAR_20|VAR_1);
 }




 if (VAR_2 & (VAR_4|VAR_3))
  FUNC_9 ("P%x%x RL=%d D=%d ", VAR_57&7, FUNC_1(VAR_45, VAR_32)&7,
   (unsigned) VAR_47, (unsigned) VAR_56);





 VAR_51 = ((void*)0);
 VAR_50 = 0;
 if (VAR_48 > VAR_45->scripta_ba &&
   VAR_48 <= VAR_45->scripta_ba + VAR_45->scripta_sz) {
  VAR_51 = (u32 *)((char*)VAR_45->scripta0 + (VAR_48-VAR_45->scripta_ba-8));
  VAR_50 = VAR_48;
 }
 else if (VAR_48 > VAR_45->scriptb_ba &&
   VAR_48 <= VAR_45->scriptb_ba + VAR_45->scriptb_sz) {
  VAR_51 = (u32 *)((char*)VAR_45->scriptb0 + (VAR_48-VAR_45->scriptb_ba-8));
  VAR_50 = VAR_48;
 }




 if (VAR_2 & VAR_3) {
  FUNC_9 ("\nCP=%p DSP=%x NXT=%x VDSP=%p CMD=%x ",
   VAR_61, (unsigned)VAR_48, (unsigned)VAR_50, VAR_51, VAR_57);
 }

 if (!VAR_51) {
  FUNC_9 ("%s: interrupted SCRIPT address not found.\n",
   FUNC_12 (VAR_45));
  goto reset_all;
 }

 if (!VAR_61) {
  FUNC_9 ("%s: SCSI phase error fixup: CCB already dequeued.\n",
   FUNC_12 (VAR_45));
  goto reset_all;
 }




 VAR_52 = FUNC_10(VAR_51[1]);

 if (VAR_57 & 0x10) {
  VAR_54 = (u32 *) ((char*) &VAR_61->phys + VAR_52);
  VAR_53 = FUNC_10(VAR_54[0]);
  VAR_52 = FUNC_10(VAR_54[1]);
 } else {
  VAR_54 = (u32 *) 0;
  VAR_53 = FUNC_10(VAR_51[0]) & 0xffffff;
 }

 if (VAR_2 & VAR_3) {
  FUNC_9 ("OCMD=%x\nTBLP=%p OLEN=%x OADR=%x\n",
   (unsigned) (FUNC_10(VAR_51[0]) >> 24),
   VAR_54,
   (unsigned) VAR_53,
   (unsigned) VAR_52);
 }






 if (((VAR_57 & 2) ? VAR_57 : (VAR_57 & ~4)) != (FUNC_10(VAR_51[0]) >> 24)) {
  FUNC_13(VAR_61->cmd,
   "internal error: cmd=%02x != %02x=(vdsp[0] >> 24)\n",
   VAR_57, FUNC_10(VAR_51[0]) >> 24);

  goto reset_all;
 }




 if (VAR_57 & 2) {
  FUNC_13(VAR_61->cmd,
   "phase change %x-%x %d@%08x resid=%d.\n",
   VAR_57&7, FUNC_1(VAR_45, VAR_32)&7, (unsigned)VAR_53,
   (unsigned)VAR_52, (unsigned)VAR_47);
  goto unexpected_phase;
 }
 VAR_59 = FUNC_1(VAR_45, VAR_13);
 VAR_58 = VAR_59;

 if (VAR_58 & (VAR_11 | VAR_12 | VAR_10)) {
  if (VAR_58 & VAR_11)
   VAR_50 = FUNC_10(VAR_61->phys.pm0.ret);
  else if (VAR_58 & VAR_12)
   VAR_50 = FUNC_10(VAR_61->phys.pm1.ret);

  if (VAR_58 & VAR_10)
   VAR_58 ^= VAR_9;
 }

 if (!(VAR_58 & VAR_9)) {
  VAR_60 = &VAR_61->phys.pm0;
  VAR_55 = FUNC_6(VAR_45, VAR_38);
 }
 else {
  VAR_60 = &VAR_61->phys.pm1;
  VAR_55 = FUNC_6(VAR_45, VAR_39);
 }

 VAR_58 &= ~(VAR_11 | VAR_12 | VAR_10);
 if (VAR_58 != VAR_59)
  FUNC_4(VAR_45, VAR_13, VAR_58);




 VAR_60->sg.addr = FUNC_8(VAR_52 + VAR_53 - VAR_47);
 VAR_60->sg.size = FUNC_8(VAR_47);
 VAR_60->ret = FUNC_8(VAR_50);







 VAR_50 = FUNC_6(VAR_45, VAR_23);
 if ((VAR_57 & 7) == 1 && VAR_61 && (VAR_61->phys.select.sel_scntl3 & VAR_6) &&
     (FUNC_1(VAR_45, VAR_33) & VAR_21)) {
  u32 VAR_65;






  VAR_65 = FUNC_10(VAR_60->sg.addr);
  VAR_61->phys.wresid.addr = FUNC_8(VAR_65);
  VAR_60->sg.addr = FUNC_8(VAR_65 + 1);
  VAR_65 = FUNC_10(VAR_60->sg.size);
  VAR_61->phys.wresid.size = FUNC_8((VAR_65&0xff000000) | 1);
  VAR_60->sg.size = FUNC_8(VAR_65 - 1);





  if ((VAR_65&0xffffff) == 1)
   VAR_55 = VAR_60->ret;





  VAR_50 = FUNC_7(VAR_45, VAR_44);
 }

 if (VAR_2 & VAR_3) {
  FUNC_13(VAR_61->cmd, "PM %x %x %x / %x %x %x.\n",
   VAR_59, VAR_58, VAR_55,
   (unsigned)FUNC_10(VAR_60->sg.addr),
   (unsigned)FUNC_10(VAR_60->sg.size),
   (unsigned)FUNC_10(VAR_60->ret));
 }




 FUNC_14 (VAR_45, VAR_61, VAR_55);
 FUNC_5(VAR_45, VAR_50);
 return;
unexpected_phase:
 VAR_48 -= 8;
 VAR_50 = 0;

 switch (VAR_57 & 7) {
 case 2:
  VAR_50 = FUNC_6(VAR_45, VAR_23);
  break;





 case 6:






  if (VAR_48 == FUNC_6(VAR_45, VAR_40)) {
   if (VAR_61->tag != VAR_15 && VAR_53 - VAR_47 <= 3) {
    VAR_61->host_status = VAR_14;
    VAR_45->msgout[0] = FUNC_0(0, VAR_61->lun);
    VAR_50 = FUNC_7(VAR_45, VAR_25);
   }
   else
    VAR_50 = FUNC_7(VAR_45, VAR_24);
  }
  else if (VAR_48 == FUNC_7(VAR_45, VAR_43) ||
    VAR_48 == FUNC_7(VAR_45, VAR_42) ||
    VAR_48 == FUNC_7(VAR_45, VAR_41)) {
   VAR_50 = FUNC_7(VAR_45, VAR_37);
   if (VAR_48 == FUNC_7(VAR_45, VAR_41)) {
    struct scsi_device *VAR_66 = VAR_61->cmd->device;
    VAR_66->ppr = 0;
   }
  }
  break;





 }

 if (VAR_50) {
  FUNC_5(VAR_45, VAR_50);
  return;
 }

reset_all:
 FUNC_15(VAR_45);
}
