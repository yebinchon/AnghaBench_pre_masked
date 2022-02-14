
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_ring {int ring_size; } ;
struct TYPE_6__ {int installed; } ;
struct radeon_device {int flags; int dev; struct radeon_ring* ring; TYPE_3__ irq; TYPE_2__* asic; int rlc_fw; int pfp_fw; int me_fw; } ;
struct TYPE_4__ {int * copy; } ;
struct TYPE_5__ {TYPE_1__ copy; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
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
 int FUNC_16 (struct radeon_device*) ;
 int FUNC_17 (struct radeon_device*) ;
 int FUNC_18 (struct radeon_device*) ;
 int FUNC_19 (struct radeon_device*,size_t) ;
 int FUNC_20 (struct radeon_device*) ;
 int FUNC_21 (struct radeon_device*) ;
 int FUNC_22 (struct radeon_device*) ;
 int FUNC_23 (struct radeon_device*,struct radeon_ring*,int ,int ,int ,int ,int,int,int ) ;
 int FUNC_24 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_25(struct radeon_device *VAR_11)
{
 struct radeon_ring *VAR_12;
 int VAR_13;


 FUNC_17(VAR_11);

 if (!VAR_11->me_fw || !VAR_11->pfp_fw || !VAR_11->rlc_fw) {
  VAR_13 = FUNC_12(VAR_11);
  if (VAR_13) {
   FUNC_1("Failed to load firmware!\n");
   return VAR_13;
  }
 }

 VAR_13 = FUNC_18(VAR_11);
 if (VAR_13)
  return VAR_13;

 FUNC_15(VAR_11);
 if (VAR_11->flags & VAR_8) {
  FUNC_4(VAR_11);
 } else {
  VAR_13 = FUNC_16(VAR_11);
  if (VAR_13)
   return VAR_13;
 }
 FUNC_11(VAR_11);
 VAR_13 = FUNC_7(VAR_11);
 if (VAR_13) {
  FUNC_6(VAR_11);
  VAR_11->asic->copy.copy = ((void*)0);
  FUNC_3(VAR_11->dev, "failed blitter (%d) falling back to memcpy\n", VAR_13);
 }


 VAR_13 = FUNC_24(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_19(VAR_11, VAR_9);
 if (VAR_13) {
  FUNC_2(VAR_11->dev, "failed initializing CP fences (%d).\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_19(VAR_11, VAR_5);
 if (VAR_13) {
  FUNC_2(VAR_11->dev, "failed initializing DMA fences (%d).\n", VAR_13);
  return VAR_13;
 }


 if (!VAR_11->irq.installed) {
  VAR_13 = FUNC_22(VAR_11);
  if (VAR_13)
   return VAR_13;
 }

 VAR_13 = FUNC_13(VAR_11);
 if (VAR_13) {
  FUNC_1("radeon: IH init failed (%d).\n", VAR_13);
  FUNC_21(VAR_11);
  return VAR_13;
 }
 FUNC_14(VAR_11);

 VAR_12 = &VAR_11->ring[VAR_9];
 VAR_13 = FUNC_23(VAR_11, VAR_12, VAR_12->ring_size, VAR_10,
        VAR_3, VAR_4,
        0, 0xfffff, VAR_7);
 if (VAR_13)
  return VAR_13;

 VAR_12 = &VAR_11->ring[VAR_5];
 VAR_13 = FUNC_23(VAR_11, VAR_12, VAR_12->ring_size, VAR_6,
        VAR_1, VAR_2,
        2, 0x3fffc, FUNC_0(VAR_0, 0, 0, 0));
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_8(VAR_11);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_9(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_10(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_20(VAR_11);
 if (VAR_13) {
  FUNC_2(VAR_11->dev, "IB initialization failed (%d).\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_5(VAR_11);
 if (VAR_13) {
  FUNC_1("radeon: audio init failed\n");
  return VAR_13;
 }

 return 0;
}
