
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_ring {int ring_size; } ;
struct TYPE_6__ {int installed; } ;
struct radeon_device {int flags; int dev; struct radeon_ring* ring; TYPE_3__ irq; TYPE_2__* asic; int mc_fw; int rlc_fw; int pfp_fw; int me_fw; } ;
struct TYPE_4__ {int * copy; } ;
struct TYPE_5__ {TYPE_1__ copy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (char*,...) ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
 int FUNC_15 (struct radeon_device*) ;
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*,size_t) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*,struct radeon_ring*,int ,int ,scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_24 (struct radeon_device*) ;
 int FUNC_25 (struct radeon_device*) ;
 int FUNC_26 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_27(struct radeon_device *VAR_17)
{
 struct radeon_ring *VAR_18 = &VAR_17->ring[VAR_15];
 int VAR_19;


 FUNC_12(VAR_17);

 if (VAR_17->flags & VAR_14) {
  if (!VAR_17->me_fw || !VAR_17->pfp_fw || !VAR_17->rlc_fw) {
   VAR_19 = FUNC_13(VAR_17);
   if (VAR_19) {
    FUNC_1("Failed to load firmware!\n");
    return VAR_19;
   }
  }
 } else {
  if (!VAR_17->me_fw || !VAR_17->pfp_fw || !VAR_17->rlc_fw || !VAR_17->mc_fw) {
   VAR_19 = FUNC_13(VAR_17);
   if (VAR_19) {
    FUNC_1("Failed to load firmware!\n");
    return VAR_19;
   }
  }

  VAR_19 = FUNC_14(VAR_17);
  if (VAR_19) {
   FUNC_1("Failed to load MC firmware!\n");
   return VAR_19;
  }
 }

 VAR_19 = FUNC_18(VAR_17);
 if (VAR_19)
  return VAR_19;

 FUNC_11(VAR_17);
 VAR_19 = FUNC_6(VAR_17);
 if (VAR_19)
  return VAR_19;
 FUNC_5(VAR_17);

 VAR_19 = FUNC_9(VAR_17);
 if (VAR_19) {
  FUNC_16(VAR_17);
  VAR_17->asic->copy.copy = ((void*)0);
  FUNC_8(VAR_17->dev, "failed blitter (%d) falling back to memcpy\n", VAR_19);
 }


 if (VAR_17->flags & VAR_14) {
  VAR_19 = FUNC_26(VAR_17);
  if (VAR_19) {
   FUNC_1("Failed to init rlc BOs!\n");
   return VAR_19;
  }
 }


 VAR_19 = FUNC_25(VAR_17);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_19(VAR_17, VAR_15);
 if (VAR_19) {
  FUNC_7(VAR_17->dev, "failed initializing CP fences (%d).\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_19(VAR_17, VAR_0);
 if (VAR_19) {
  FUNC_7(VAR_17->dev, "failed initializing CP fences (%d).\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_19(VAR_17, VAR_1);
 if (VAR_19) {
  FUNC_7(VAR_17->dev, "failed initializing CP fences (%d).\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_19(VAR_17, VAR_11);
 if (VAR_19) {
  FUNC_7(VAR_17->dev, "failed initializing DMA fences (%d).\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_19(VAR_17, VAR_2);
 if (VAR_19) {
  FUNC_7(VAR_17->dev, "failed initializing DMA fences (%d).\n", VAR_19);
  return VAR_19;
 }


 if (!VAR_17->irq.installed) {
  VAR_19 = FUNC_22(VAR_17);
  if (VAR_19)
   return VAR_19;
 }

 VAR_19 = FUNC_17(VAR_17);
 if (VAR_19) {
  FUNC_1("radeon: IH init failed (%d).\n", VAR_19);
  FUNC_21(VAR_17);
  return VAR_19;
 }
 FUNC_10(VAR_17);

 VAR_19 = FUNC_23(VAR_17, VAR_18, VAR_18->ring_size, VAR_16,
        VAR_4, VAR_5,
        0, 0xfffff, VAR_13);
 if (VAR_19)
  return VAR_19;

 VAR_18 = &VAR_17->ring[VAR_11];
 VAR_19 = FUNC_23(VAR_17, VAR_18, VAR_18->ring_size, VAR_12,
        VAR_9 + VAR_6,
        VAR_10 + VAR_6,
        2, 0x3fffc, FUNC_0(VAR_8, 0, 0, 0));
 if (VAR_19)
  return VAR_19;

 VAR_18 = &VAR_17->ring[VAR_2];
 VAR_19 = FUNC_23(VAR_17, VAR_18, VAR_18->ring_size, VAR_3,
        VAR_9 + VAR_7,
        VAR_10 + VAR_7,
        2, 0x3fffc, FUNC_0(VAR_8, 0, 0, 0));
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_2(VAR_17);
 if (VAR_19)
  return VAR_19;
 VAR_19 = FUNC_3(VAR_17);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_4(VAR_17);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_20(VAR_17);
 if (VAR_19) {
  FUNC_7(VAR_17->dev, "IB initialization failed (%d).\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_24(VAR_17);
 if (VAR_19) {
  FUNC_7(VAR_17->dev, "vm manager initialization failed (%d).\n", VAR_19);
  return VAR_19;
 }

 VAR_19 = FUNC_15(VAR_17);
 if (VAR_19)
  return VAR_19;

 return 0;
}
