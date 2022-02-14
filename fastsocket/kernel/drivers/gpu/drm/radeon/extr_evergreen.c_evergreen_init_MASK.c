
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * ring_obj; } ;
struct TYPE_4__ {int atom_context; } ;
struct radeon_device {int flags; int accel_working; int mc_fw; int dev; TYPE_2__ ih; TYPE_3__* ring; int ddev; TYPE_1__ mode_info; int bios; int is_atom_bios; } ;
struct TYPE_6__ {int * ring_obj; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*,int) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*,TYPE_3__*,int) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 scalar_t__ FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct radeon_device*) ;
 int FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*) ;

int FUNC_30(struct radeon_device *VAR_5)
{
 int VAR_6;


 if (!FUNC_24(VAR_5)) {
  if (FUNC_0(VAR_5))
   return -VAR_0;
 }

 if (!VAR_5->is_atom_bios) {
  FUNC_5(VAR_5->dev, "Expecting atombios for evergreen GPU\n");
  return -VAR_0;
 }
 VAR_6 = FUNC_20(VAR_5);
 if (VAR_6)
  return VAR_6;



 if (FUNC_19(VAR_5))
  FUNC_6(VAR_5->dev, "GPU reset failed !\n");

 if (!FUNC_22(VAR_5)) {
  if (!VAR_5->bios) {
   FUNC_5(VAR_5->dev, "Card not posted and no BIOS - ignoring\n");
   return -VAR_0;
  }
  FUNC_3("GPU not posted. posting now...\n");
  FUNC_4(VAR_5->mode_info.atom_context);
 }

 FUNC_15(VAR_5);

 FUNC_28(VAR_5);

 FUNC_25(VAR_5->ddev);

 VAR_6 = FUNC_23(VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->flags & VAR_2) {
  VAR_6 = FUNC_18(VAR_5);
  if (VAR_6)
   FUNC_17(VAR_5);
 }

 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_21(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5->ring[VAR_4].ring_obj = ((void*)0);
 FUNC_14(VAR_5, &VAR_5->ring[VAR_4], 1024 * 1024);

 VAR_5->ring[VAR_1].ring_obj = ((void*)0);
 FUNC_14(VAR_5, &VAR_5->ring[VAR_1], 64 * 1024);

 VAR_5->ih.ring_obj = ((void*)0);
 FUNC_11(VAR_5, 64 * 1024);

 VAR_6 = FUNC_13(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5->accel_working = 1;
 VAR_6 = FUNC_9(VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_5->dev, "disabling GPU acceleration\n");
  FUNC_16(VAR_5);
  FUNC_10(VAR_5);
  FUNC_12(VAR_5);
  FUNC_29(VAR_5);
  FUNC_26(VAR_5);
  FUNC_27(VAR_5);
  FUNC_8(VAR_5);
  VAR_5->accel_working = 0;
 }





 if (FUNC_1(VAR_5)) {
  if (!VAR_5->mc_fw && !(VAR_5->flags & VAR_3)) {
   FUNC_2("radeon: MC ucode required for NI+.\n");
   return -VAR_0;
  }
 }

 return 0;
}
