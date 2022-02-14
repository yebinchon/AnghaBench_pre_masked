
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int atom_context; } ;
struct radeon_device {int flags; int accel_working; int dev; int ddev; TYPE_1__ mode_info; scalar_t__ bios; scalar_t__ is_atom_bios; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 scalar_t__ FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;

int FUNC_30(struct radeon_device *VAR_4)
{
 int VAR_5;


 FUNC_23(VAR_4);

 FUNC_24(VAR_4);

 FUNC_7(VAR_4);


 if (!FUNC_19(VAR_4)) {
  if (FUNC_0(VAR_4))
   return -VAR_0;
 }
 if (VAR_4->is_atom_bios) {
  VAR_5 = FUNC_14(VAR_4);
  if (VAR_5)
   return VAR_5;
 } else {
  FUNC_4(VAR_4->dev, "Expecting atombios for RV515 GPU\n");
  return -VAR_0;
 }

 if (FUNC_13(VAR_4)) {
  FUNC_5(VAR_4->dev,
   "GPU reset failed ! (0xE40=0x%08X, 0x7C0=0x%08X)\n",
   FUNC_2(VAR_3),
   FUNC_2(VAR_2));
 }

 if (FUNC_16(VAR_4) == 0)
  return -VAR_0;

 if (!FUNC_17(VAR_4) && VAR_4->bios) {
  FUNC_1("GPU not posted. posting now...\n");
  FUNC_3(VAR_4->mode_info.atom_context);
 }

 FUNC_20(VAR_4->ddev);

 if (VAR_4->flags & VAR_1) {
  VAR_5 = FUNC_12(VAR_4);
  if (VAR_5) {
   FUNC_10(VAR_4);
  }
 }

 FUNC_8(VAR_4);
 FUNC_28(VAR_4);

 VAR_5 = FUNC_18(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_15(VAR_4);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_27(VAR_4);
 if (VAR_5)
  return VAR_5;
 FUNC_29(VAR_4);

 VAR_4->accel_working = 1;
 VAR_5 = FUNC_9(VAR_4);
 if (VAR_5) {

  FUNC_4(VAR_4->dev, "Disabling GPU acceleration\n");
  FUNC_6(VAR_4);
  FUNC_25(VAR_4);
  FUNC_21(VAR_4);
  FUNC_22(VAR_4);
  FUNC_26(VAR_4);
  FUNC_11(VAR_4);
  VAR_4->accel_working = 0;
 }
 return 0;
}
