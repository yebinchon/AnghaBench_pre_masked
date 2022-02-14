
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int flags; int accel_working; int dev; int ddev; scalar_t__ is_atom_bios; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 scalar_t__ FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;

int FUNC_30(struct radeon_device *VAR_6)
{
 int VAR_7;


 FUNC_8(VAR_6);

 FUNC_25(VAR_6);

 FUNC_26(VAR_6);


 FUNC_7(VAR_6);

 if (!FUNC_21(VAR_6)) {
  if (FUNC_0(VAR_6))
   return -VAR_0;
 }
 if (VAR_6->is_atom_bios) {
  FUNC_2(VAR_6->dev, "Expecting combios for RS400/RS480 GPU\n");
  return -VAR_0;
 } else {
  VAR_7 = FUNC_19(VAR_6);
  if (VAR_7)
   return VAR_7;
 }

 if (FUNC_16(VAR_6)) {
  FUNC_3(VAR_6->dev,
   "GPU reset failed ! (0xE40=0x%08X, 0x7C0=0x%08X)\n",
   FUNC_1(VAR_5),
   FUNC_1(VAR_4));
 }

 if (FUNC_18(VAR_6) == 0)
  return -VAR_0;

 FUNC_9(VAR_6);

 FUNC_22(VAR_6->ddev);

 if (VAR_6->flags & VAR_1) {
  VAR_7 = FUNC_15(VAR_6);
  if (VAR_7) {
   FUNC_13(VAR_6);
  }
 }

 FUNC_10(VAR_6);

 VAR_7 = FUNC_20(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_17(VAR_6);
 if (VAR_7)
  return VAR_7;
 if (VAR_6->flags & VAR_3) {
  VAR_7 = FUNC_29(VAR_6);
  if (VAR_7)
   return VAR_7;
 }
 if (VAR_6->flags & VAR_2) {
  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7)
   return VAR_7;
 }
 FUNC_11(VAR_6);

 VAR_6->accel_working = 1;
 VAR_7 = FUNC_12(VAR_6);
 if (VAR_7) {

  FUNC_2(VAR_6->dev, "Disabling GPU acceleration\n");
  FUNC_4(VAR_6);
  FUNC_27(VAR_6);
  FUNC_23(VAR_6);
  FUNC_24(VAR_6);
  if (VAR_6->flags & VAR_3)
   FUNC_28(VAR_6);
  if (VAR_6->flags & VAR_2)
   FUNC_5(VAR_6);
  FUNC_14(VAR_6);
  VAR_6->accel_working = 0;
 }
 return 0;
}
