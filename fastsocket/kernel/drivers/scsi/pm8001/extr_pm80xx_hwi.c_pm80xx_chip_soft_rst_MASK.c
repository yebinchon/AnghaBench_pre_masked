
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int FUNC_2 (struct pm8001_hba_info*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct pm8001_hba_info*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct pm8001_hba_info*) ;
 int FUNC_6 (struct pm8001_hba_info*,int ,int ) ;
 int FUNC_7 (struct pm8001_hba_info*,int ,int ,int ) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(struct pm8001_hba_info *VAR_11)
{
 u32 VAR_12;
 u32 VAR_13;


 if (FUNC_5(VAR_11) != 0) {
  FUNC_0(VAR_11,
   FUNC_8("MPI state is not ready\n"));
  return -1;
 }


 VAR_12 = FUNC_6(VAR_11, 0, VAR_7);
 FUNC_1(VAR_11,
  FUNC_8("reset register before write : 0x%x\n", VAR_12));

 FUNC_7(VAR_11, 0, VAR_7, VAR_8);
 FUNC_4(500);

 VAR_12 = FUNC_6(VAR_11, 0, VAR_7);
 FUNC_1(VAR_11,
 FUNC_8("reset register after write 0x%x\n", VAR_12));

 if ((VAR_12 & VAR_10) ==
   VAR_9) {
  FUNC_2(VAR_11,
   FUNC_8(" soft reset successful [regval: 0x%x]\n",
     VAR_12));
 } else {
  FUNC_2(VAR_11,
   FUNC_8(" soft reset failed [regval: 0x%x]\n",
     VAR_12));


  VAR_13 =
   FUNC_6(VAR_11, 0, VAR_1) &
   VAR_6;

  if (VAR_13 == VAR_4) {
   FUNC_2(VAR_11, FUNC_8(
    "Bootloader state - HDA mode SEEPROM\n"));
  } else if (VAR_13 ==
    VAR_3) {
   FUNC_2(VAR_11, FUNC_8(
    "Bootloader state - HDA mode Bootstrap Pin\n"));
  } else if (VAR_13 ==
    VAR_5) {
   FUNC_2(VAR_11, FUNC_8(
    "Bootloader state - HDA mode soft reset\n"));
  } else if (VAR_13 ==
     VAR_2) {
   FUNC_2(VAR_11, FUNC_8(
    "Bootloader state-HDA mode critical error\n"));
  }
  return -VAR_0;
 }


 if (-1 == FUNC_3(VAR_11)) {
  FUNC_0(VAR_11,
   FUNC_8("Firmware is not ready!\n"));
  return -VAR_0;
 }
 FUNC_1(VAR_11,
  FUNC_8("SPCv soft reset Complete\n"));
 return 0;
}
