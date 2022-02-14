
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int u32 ;
struct sym_tcb {int usrflags; int usr_width; int usr_period; int usrtags; } ;
struct sym_nvram {scalar_t__ type; } ;
struct sym_hcb {int maxwide; int features; int clock_khz; int multiplier; int clock_divn; int rv_scntl3; int minsync; int maxsync; int minsync_dt; int maxsync_dt; int maxoffs_dt; int rv_ccntl1; int sv_dmode; int sv_ctest4; int sv_ctest5; int maxburst; int rv_dmode; int rv_dcntl; int rv_ctest3; int rv_ctest5; int rv_ctest4; int rv_scntl0; int myaddr; int sv_gpcntl; int sv_dcntl; char* fw_name; int sv_scntl3; int sv_ctest3; scalar_t__ ram_ba; scalar_t__ scsi_mode; struct sym_tcb* target; int rv_ccntl0; } ;
struct sym_data {struct pci_dev* pdev; } ;
struct pci_dev {scalar_t__ device; int revision; } ;
struct Scsi_Host {int dummy; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 unsigned long VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_1 (int,int,int) ;
 unsigned long* VAR_49 ;
 int VAR_50 ;
 int FUNC_2 (char*,char*,...) ;
 struct sym_data* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct sym_hcb*,int) ;
 int FUNC_5 (struct sym_hcb*,int) ;
 char* FUNC_6 (struct sym_hcb*) ;
 int FUNC_7 (struct Scsi_Host*,struct sym_hcb*,struct sym_nvram*) ;
 int FUNC_8 (struct sym_tcb*,int,struct sym_nvram*) ;
 char* FUNC_9 (struct sym_nvram*) ;
 char* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct sym_hcb*,struct sym_nvram*) ;
 int VAR_51 ;
 int FUNC_12 (struct sym_hcb*) ;

__attribute__((used)) static int FUNC_13(struct Scsi_Host *VAR_52, struct sym_hcb *VAR_53, struct sym_nvram *VAR_54)
{
 struct sym_data *VAR_55 = FUNC_3(VAR_52);
 struct pci_dev *VAR_56 = VAR_55->pdev;
 u_char VAR_57;
 u32 VAR_58;
 int VAR_59;

 VAR_53->maxwide = (VAR_53->features & VAR_26) ? 1 : 0;




 if (VAR_53->features & (VAR_24 | VAR_23))
  VAR_53->clock_khz = 160000;
 else if (VAR_53->features & VAR_22)
  VAR_53->clock_khz = 80000;
 else
  VAR_53->clock_khz = 40000;




 if (VAR_53->features & VAR_21)
  VAR_53->multiplier = 4;
 else if (VAR_53->features & VAR_13)
  VAR_53->multiplier = 2;
 else
  VAR_53->multiplier = 1;





 if (VAR_53->features & VAR_25)
  FUNC_4(VAR_53, VAR_53->multiplier);




 VAR_59 = VAR_53->clock_divn - 1;
 while (--VAR_59 >= 0) {
  if (10ul * VAR_37 * VAR_53->clock_khz > VAR_49[VAR_59]) {
   ++VAR_59;
   break;
  }
 }
 VAR_53->rv_scntl3 = VAR_59+1;





 if (VAR_53->features & VAR_10)
  VAR_53->rv_scntl3 = 0;





 VAR_58 = (4 * VAR_49[0] + VAR_53->clock_khz - 1) / VAR_53->clock_khz;

 if (VAR_58 <= 250) VAR_53->minsync = 10;
 else if (VAR_58 <= 303) VAR_53->minsync = 11;
 else if (VAR_58 <= 500) VAR_53->minsync = 12;
 else VAR_53->minsync = (VAR_58 + 40 - 1) / 40;




 if (VAR_53->minsync < 25 &&
   !(VAR_53->features & (VAR_22|VAR_23|VAR_24)))
  VAR_53->minsync = 25;
 else if (VAR_53->minsync < 12 &&
   !(VAR_53->features & (VAR_23|VAR_24)))
  VAR_53->minsync = 12;




 VAR_58 = (11 * VAR_49[VAR_53->clock_divn - 1]) / (4 * VAR_53->clock_khz);
 VAR_53->maxsync = VAR_58 > 2540 ? 254 : VAR_58 / 10;




 if ((VAR_53->features & (VAR_10|VAR_24)) == (VAR_10|VAR_24)) {
  if (VAR_53->clock_khz == 160000) {
   VAR_53->minsync_dt = 9;
   VAR_53->maxsync_dt = 50;
   VAR_53->maxoffs_dt = VAR_54->type ? 62 : 31;
  }
 }




 if (VAR_53->features & VAR_12) {
  if (!FUNC_12(VAR_53))
   VAR_53->rv_ccntl1 |= (VAR_2);
  else if (VAR_35 == 1)
   VAR_53->rv_ccntl1 |= (VAR_48 | VAR_8);
  else if (VAR_35 == 2)
   VAR_53->rv_ccntl1 |= (0 | VAR_8);
 }




 if (VAR_53->features & VAR_19)
  VAR_53->rv_ccntl0 |= (VAR_5);






 if (VAR_56->device == VAR_30 &&
     VAR_56->revision < 0x1)
  VAR_53->rv_ccntl0 |= VAR_4;




 VAR_57 = VAR_39;
 if (VAR_57 == 255)
  VAR_57 = FUNC_1(VAR_53->sv_dmode, VAR_53->sv_ctest4,
           VAR_53->sv_ctest5);
 if (VAR_57 > 7)
  VAR_57 = 7;
 if (VAR_57 > VAR_53->maxburst)
  VAR_57 = VAR_53->maxburst;
 if ((VAR_56->device == VAR_31 &&
      VAR_56->revision >= 0x10 && VAR_56->revision <= 0x11) ||
     (VAR_56->device == VAR_32 &&
      VAR_56->revision <= 0x1))
  VAR_53->features &= ~(VAR_27|VAR_15|VAR_16);







 if (VAR_53->features & VAR_15)
  VAR_53->rv_dmode |= VAR_6;
 if (VAR_53->features & VAR_9)
  VAR_53->rv_dmode |= VAR_0;
 if (VAR_53->features & VAR_16)
  VAR_53->rv_dmode |= VAR_7;

 if ((VAR_53->features & VAR_20) && !VAR_53->ram_ba)



  VAR_53->rv_dcntl |= VAR_34;
 if (VAR_53->features & VAR_11)
  VAR_53->rv_dcntl |= VAR_1;
 if (VAR_53->features & VAR_27)
  VAR_53->rv_ctest3 |= VAR_47;
 if (VAR_53->features & VAR_14)
  VAR_53->rv_ctest5 |= VAR_3;




 VAR_53->rv_ctest4 |= VAR_29;
 VAR_53->rv_scntl0 |= 0x0a;




 VAR_53->myaddr = 255;
 VAR_53->scsi_mode = 0;
 FUNC_7(VAR_52, VAR_53, VAR_54);




 if (VAR_53->myaddr == 255) {
  VAR_53->myaddr = FUNC_0(VAR_53, VAR_50) & 0x07;
  if (!VAR_53->myaddr)
   VAR_53->myaddr = VAR_40;
 }




 FUNC_5(VAR_53, VAR_57);

 FUNC_11(VAR_53, VAR_54);







 if ((VAR_43 ||
      (VAR_54->type == VAR_44 ||
       (VAR_54->type == VAR_46 &&
        VAR_56->device == VAR_33))) &&
     !(VAR_53->features & VAR_18) && !(VAR_53->sv_gpcntl & 0x01))
  VAR_53->features |= VAR_17;




 switch(VAR_41 & 3) {
 case 2:
  VAR_53->rv_dcntl |= VAR_28;
  break;
 case 1:
  VAR_53->rv_dcntl |= (VAR_53->sv_dcntl & VAR_28);
  break;
 default:
  break;
 }





 for (VAR_59 = 0 ; VAR_59 < VAR_36 ; VAR_59++) {
  struct sym_tcb *VAR_60 = &VAR_53->target[VAR_59];

  VAR_60->usrflags |= (VAR_38 | VAR_45);
  VAR_60->usrtags = VAR_42;
  VAR_60->usr_width = VAR_53->maxwide;
  VAR_60->usr_period = 9;

  FUNC_8(VAR_60, VAR_59, VAR_54);

  if (!VAR_60->usrtags)
   VAR_60->usrflags &= ~VAR_45;
 }




 FUNC_2("%s: %s, ID %d, Fast-%d, %s, %s\n", FUNC_6(VAR_53),
  FUNC_9(VAR_54), VAR_53->myaddr,
  (VAR_53->features & VAR_24) ? 80 :
  (VAR_53->features & VAR_23) ? 40 :
  (VAR_53->features & VAR_22) ? 20 : 10,
  FUNC_10(VAR_53->scsi_mode),
  (VAR_53->rv_scntl0 & 0xa) ? "parity checking" : "NO parity");



 if (VAR_51) {
  FUNC_2("%s: %s IRQ line driver%s\n",
   FUNC_6(VAR_53),
   VAR_53->rv_dcntl & VAR_28 ? "totem pole" : "open drain",
   VAR_53->ram_ba ? ", using on-chip SRAM" : "");
  FUNC_2("%s: using %s firmware.\n", FUNC_6(VAR_53), VAR_53->fw_name);
  if (VAR_53->features & VAR_19)
   FUNC_2("%s: handling phase mismatch from SCRIPTS.\n",
          FUNC_6(VAR_53));
 }



 if (VAR_51 >= 2) {
  FUNC_2 ("%s: initial SCNTL3/DMODE/DCNTL/CTEST3/4/5 = "
   "(hex) %02x/%02x/%02x/%02x/%02x/%02x\n",
   FUNC_6(VAR_53), VAR_53->sv_scntl3, VAR_53->sv_dmode, VAR_53->sv_dcntl,
   VAR_53->sv_ctest3, VAR_53->sv_ctest4, VAR_53->sv_ctest5);

  FUNC_2 ("%s: final   SCNTL3/DMODE/DCNTL/CTEST3/4/5 = "
   "(hex) %02x/%02x/%02x/%02x/%02x/%02x\n",
   FUNC_6(VAR_53), VAR_53->rv_scntl3, VAR_53->rv_dmode, VAR_53->rv_dcntl,
   VAR_53->rv_ctest3, VAR_53->rv_ctest4, VAR_53->rv_ctest5);
 }

 return 0;
}
