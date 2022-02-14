
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ring {int ring_size; } ;
struct TYPE_4__ {int installed; } ;
struct radeon_device {int dev; struct radeon_ring* ring; TYPE_2__ irq; TYPE_1__* asic; int mc_fw; int rlc_fw; int ce_fw; int pfp_fw; int me_fw; } ;
struct TYPE_3__ {int * copy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (char*,...) ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,size_t) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*,struct radeon_ring*,int ,int ,scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (struct radeon_device*) ;
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

__attribute__((used)) static int FUNC_25(struct radeon_device *VAR_22)
{
 struct radeon_ring *VAR_23;
 int VAR_24;

 if (!VAR_22->me_fw || !VAR_22->pfp_fw || !VAR_22->ce_fw ||
     !VAR_22->rlc_fw || !VAR_22->mc_fw) {
  VAR_24 = FUNC_18(VAR_22);
  if (VAR_24) {
   FUNC_1("Failed to load firmware!\n");
   return VAR_24;
  }
 }

 VAR_24 = FUNC_21(VAR_22);
 if (VAR_24) {
  FUNC_1("Failed to load MC firmware!\n");
  return VAR_24;
 }

 VAR_24 = FUNC_7(VAR_22);
 if (VAR_24)
  return VAR_24;

 FUNC_22(VAR_22);
 VAR_24 = FUNC_23(VAR_22);
 if (VAR_24)
  return VAR_24;
 FUNC_17(VAR_22);
 VAR_24 = FUNC_24(VAR_22);
 if (VAR_24) {
  FUNC_1("Failed to init rlc BOs!\n");
  return VAR_24;
 }


 VAR_24 = FUNC_14(VAR_22);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_8(VAR_22, VAR_18);
 if (VAR_24) {
  FUNC_3(VAR_22->dev, "failed initializing CP fences (%d).\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_8(VAR_22, VAR_0);
 if (VAR_24) {
  FUNC_3(VAR_22->dev, "failed initializing CP fences (%d).\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_8(VAR_22, VAR_1);
 if (VAR_24) {
  FUNC_3(VAR_22->dev, "failed initializing CP fences (%d).\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_8(VAR_22, VAR_15);
 if (VAR_24) {
  FUNC_3(VAR_22->dev, "failed initializing DMA fences (%d).\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_8(VAR_22, VAR_2);
 if (VAR_24) {
  FUNC_3(VAR_22->dev, "failed initializing DMA fences (%d).\n", VAR_24);
  return VAR_24;
 }


 if (!VAR_22->irq.installed) {
  VAR_24 = FUNC_11(VAR_22);
  if (VAR_24)
   return VAR_24;
 }

 VAR_24 = FUNC_19(VAR_22);
 if (VAR_24) {
  FUNC_1("radeon: IH init failed (%d).\n", VAR_24);
  FUNC_10(VAR_22);
  return VAR_24;
 }
 FUNC_20(VAR_22);

 VAR_23 = &VAR_22->ring[VAR_18];
 VAR_24 = FUNC_12(VAR_22, VAR_23, VAR_23->ring_size, VAR_21,
        VAR_4, VAR_5,
        0, 0xfffff, VAR_17);
 if (VAR_24)
  return VAR_24;

 VAR_23 = &VAR_22->ring[VAR_0];
 VAR_24 = FUNC_12(VAR_22, VAR_23, VAR_23->ring_size, VAR_19,
        VAR_6, VAR_7,
        0, 0xfffff, VAR_17);
 if (VAR_24)
  return VAR_24;

 VAR_23 = &VAR_22->ring[VAR_1];
 VAR_24 = FUNC_12(VAR_22, VAR_23, VAR_23->ring_size, VAR_20,
        VAR_8, VAR_9,
        0, 0xfffff, VAR_17);
 if (VAR_24)
  return VAR_24;

 VAR_23 = &VAR_22->ring[VAR_15];
 VAR_24 = FUNC_12(VAR_22, VAR_23, VAR_23->ring_size, VAR_16,
        VAR_13 + VAR_10,
        VAR_14 + VAR_10,
        2, 0x3fffc, FUNC_0(VAR_12, 0, 0, 0, 0));
 if (VAR_24)
  return VAR_24;

 VAR_23 = &VAR_22->ring[VAR_2];
 VAR_24 = FUNC_12(VAR_22, VAR_23, VAR_23->ring_size, VAR_3,
        VAR_13 + VAR_11,
        VAR_14 + VAR_11,
        2, 0x3fffc, FUNC_0(VAR_12, 0, 0, 0, 0));
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_15(VAR_22);
 if (VAR_24)
  return VAR_24;
 VAR_24 = FUNC_16(VAR_22);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_2(VAR_22);
 if (VAR_24)
  return VAR_24;

 VAR_24 = FUNC_9(VAR_22);
 if (VAR_24) {
  FUNC_3(VAR_22->dev, "IB initialization failed (%d).\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_13(VAR_22);
 if (VAR_24) {
  FUNC_3(VAR_22->dev, "vm manager initialization failed (%d).\n", VAR_24);
  return VAR_24;
 }

 return 0;
}
