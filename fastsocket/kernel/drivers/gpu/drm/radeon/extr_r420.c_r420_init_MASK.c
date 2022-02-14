
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int flags; scalar_t__ family; int accel_working; int dev; int ddev; scalar_t__ is_atom_bios; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
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
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;
 int FUNC_30 (struct radeon_device*) ;

int FUNC_31(struct radeon_device *VAR_7)
{
 int VAR_8;


 FUNC_26(VAR_7);

 FUNC_27(VAR_7);


 FUNC_8(VAR_7);

 if (!FUNC_22(VAR_7)) {
  if (FUNC_0(VAR_7))
   return -VAR_1;
 }
 if (VAR_7->is_atom_bios) {
  VAR_8 = FUNC_17(VAR_7);
  if (VAR_8) {
   return VAR_8;
  }
 } else {
  VAR_8 = FUNC_20(VAR_7);
  if (VAR_8) {
   return VAR_8;
  }
 }

 if (FUNC_16(VAR_7)) {
  FUNC_3(VAR_7->dev,
   "GPU reset failed ! (0xE40=0x%08X, 0x7C0=0x%08X)\n",
   FUNC_1(VAR_6),
   FUNC_1(VAR_5));
 }

 if (FUNC_19(VAR_7) == 0)
  return -VAR_1;


 FUNC_23(VAR_7->ddev);

 if (VAR_7->flags & VAR_2) {
  VAR_8 = FUNC_15(VAR_7);
  if (VAR_8) {
   FUNC_13(VAR_7);
  }
 }

 FUNC_9(VAR_7);
 FUNC_10(VAR_7);

 VAR_8 = FUNC_21(VAR_7);
 if (VAR_8) {
  return VAR_8;
 }

 VAR_8 = FUNC_18(VAR_7);
 if (VAR_8) {
  return VAR_8;
 }
 if (VAR_7->family == VAR_0)
  FUNC_5(VAR_7);

 if (VAR_7->flags & VAR_4) {
  VAR_8 = FUNC_30(VAR_7);
  if (VAR_8)
   return VAR_8;
 }
 if (VAR_7->flags & VAR_3) {
  VAR_8 = FUNC_7(VAR_7);
  if (VAR_8)
   return VAR_8;
 }
 FUNC_11(VAR_7);

 VAR_7->accel_working = 1;
 VAR_8 = FUNC_12(VAR_7);
 if (VAR_8) {

  FUNC_2(VAR_7->dev, "Disabling GPU acceleration\n");
  FUNC_4(VAR_7);
  FUNC_28(VAR_7);
  FUNC_24(VAR_7);
  FUNC_25(VAR_7);
  if (VAR_7->flags & VAR_4)
   FUNC_29(VAR_7);
  if (VAR_7->flags & VAR_3)
   FUNC_6(VAR_7);
  FUNC_14(VAR_7);
  VAR_7->accel_working = 0;
 }
 return 0;
}
