
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ring {int * ring_obj; } ;
struct TYPE_4__ {int * ring_obj; } ;
struct TYPE_3__ {int atom_context; } ;
struct radeon_device {int accel_working; int mc_fw; int dev; TYPE_2__ ih; struct radeon_ring* ring; int ddev; TYPE_1__ mode_info; int bios; int is_atom_bios; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;

int FUNC_27(struct radeon_device *VAR_6)
{
 struct radeon_ring *VAR_7 = &VAR_6->ring[VAR_5];
 int VAR_8;


 if (!FUNC_13(VAR_6)) {
  if (FUNC_0(VAR_6))
   return -VAR_3;
 }

 if (!VAR_6->is_atom_bios) {
  FUNC_5(VAR_6->dev, "Expecting atombios for cayman GPU\n");
  return -VAR_3;
 }
 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  return VAR_8;


 if (!FUNC_11(VAR_6)) {
  if (!VAR_6->bios) {
   FUNC_5(VAR_6->dev, "Card not posted and no BIOS - ignoring\n");
   return -VAR_3;
  }
  FUNC_2("GPU not posted. posting now...\n");
  FUNC_3(VAR_6->mode_info.atom_context);
 }

 FUNC_25(VAR_6);

 FUNC_17(VAR_6);

 FUNC_14(VAR_6->ddev);


 VAR_8 = FUNC_12(VAR_6);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_22(VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_7 = &VAR_6->ring[VAR_5];
 VAR_7->ring_obj = ((void*)0);
 FUNC_8(VAR_6, VAR_7, 1024 * 1024);

 VAR_7 = &VAR_6->ring[VAR_0];
 VAR_7->ring_obj = ((void*)0);
 FUNC_8(VAR_6, VAR_7, 1024 * 1024);

 VAR_7 = &VAR_6->ring[VAR_1];
 VAR_7->ring_obj = ((void*)0);
 FUNC_8(VAR_6, VAR_7, 1024 * 1024);

 VAR_7 = &VAR_6->ring[VAR_4];
 VAR_7->ring_obj = ((void*)0);
 FUNC_8(VAR_6, VAR_7, 64 * 1024);

 VAR_7 = &VAR_6->ring[VAR_2];
 VAR_7->ring_obj = ((void*)0);
 FUNC_8(VAR_6, VAR_7, 64 * 1024);

 VAR_6->ih.ring_obj = ((void*)0);
 FUNC_6(VAR_6, 64 * 1024);

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_6->accel_working = 1;
 VAR_8 = FUNC_26(VAR_6);
 if (VAR_8) {
  FUNC_5(VAR_6->dev, "disabling GPU acceleration\n");
  FUNC_20(VAR_6);
  FUNC_4(VAR_6);
  FUNC_21(VAR_6);
  FUNC_24(VAR_6);
  FUNC_19(VAR_6);
  FUNC_15(VAR_6);
  FUNC_18(VAR_6);
  FUNC_16(VAR_6);
  FUNC_23(VAR_6);
  VAR_6->accel_working = 0;
 }





 if (!VAR_6->mc_fw) {
  FUNC_1("radeon: MC ucode required for NI+.\n");
  return -VAR_3;
 }

 return 0;
}
