
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_ring {int align_mask; int gpu_addr; int wptr; int ready; scalar_t__ rptr_save_reg; int rptr; } ;
struct TYPE_4__ {int real_vram_size; } ;
struct TYPE_3__ {int gpu_addr; scalar_t__ enabled; } ;
struct radeon_device {TYPE_2__ mc; struct radeon_ring* ring; int pdev; TYPE_1__ wb; int me_fw; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned long) ;
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
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 scalar_t__ FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*,struct radeon_ring*,unsigned int,int,int ,int,int ,int,int ) ;
 int FUNC_12 (struct radeon_device*,size_t,struct radeon_ring*) ;
 scalar_t__ FUNC_13 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_14 (struct radeon_device*,size_t,struct radeon_ring*) ;
 int FUNC_15 (struct radeon_device*,scalar_t__*) ;
 int FUNC_16 (struct radeon_device*,int ) ;
 int FUNC_17 (int) ;

int FUNC_18(struct radeon_device *VAR_24, unsigned VAR_25)
{
 struct radeon_ring *VAR_26 = &VAR_24->ring[VAR_18];
 unsigned VAR_27;
 unsigned VAR_28;
 unsigned VAR_29;
 unsigned VAR_30;
 unsigned VAR_31;
 unsigned VAR_32;
 unsigned VAR_33;
 uint32_t VAR_34;
 int VAR_35;

 if (FUNC_10(VAR_24)) {
  FUNC_0("Failed to register debugfs file for CP !\n");
 }
 if (!VAR_24->me_fw) {
  VAR_35 = FUNC_8(VAR_24);
  if (VAR_35) {
   FUNC_0("Failed to load firmware!\n");
   return VAR_35;
  }
 }


 VAR_27 = FUNC_6(VAR_25 / 8);
 VAR_25 = (1 << (VAR_27 + 1)) * 4;
 FUNC_9(VAR_24);
 VAR_35 = FUNC_11(VAR_24, VAR_26, VAR_25, VAR_19,
        VAR_6, VAR_8,
        0, 0x7fffff, VAR_3);
 if (VAR_35) {
  return VAR_35;
 }


 VAR_28 = 9;

 VAR_29 = 1;
 VAR_26->align_mask = 16 - 1;

 VAR_30 = 64;



 VAR_31 = 0;
 VAR_32 = 80;
 VAR_33 = 16;

 FUNC_5(0x718, VAR_30 | (VAR_31 << 28));
 VAR_34 = (FUNC_2(VAR_15, VAR_27) |
        FUNC_2(VAR_14, VAR_28) |
        FUNC_2(VAR_13, VAR_29));



 FUNC_5(VAR_5, VAR_34 | VAR_16);


 FUNC_1("radeon: ring at 0x%016lX\n", (unsigned long)VAR_26->gpu_addr);
 FUNC_5(VAR_4, VAR_26->gpu_addr);

 FUNC_5(VAR_5, VAR_34 | VAR_17 | VAR_16);
 FUNC_5(VAR_7, 0);
 VAR_26->wptr = 0;
 FUNC_5(VAR_8, VAR_26->wptr);


 FUNC_5(VAR_21,
  FUNC_4((VAR_24->wb.gpu_addr + VAR_19) >> 2));
 FUNC_5(VAR_23, VAR_24->wb.gpu_addr + VAR_20);

 if (VAR_24->wb.enabled)
  FUNC_5(VAR_22, 0xff);
 else {
  VAR_34 |= VAR_16;
  FUNC_5(VAR_22, 0);
 }

 FUNC_5(VAR_5, VAR_34);
 FUNC_17(10);
 VAR_26->rptr = FUNC_3(VAR_6);

 FUNC_5(VAR_2,
        FUNC_2(VAR_12, VAR_32) |
        FUNC_2(VAR_11, VAR_33));
 FUNC_5(VAR_9, 0);
 FUNC_5(VAR_2, 0x00004D4D);
 FUNC_5(VAR_1, VAR_10);


 FUNC_7(VAR_24->pdev);

 FUNC_12(VAR_24, VAR_18, &VAR_24->ring[VAR_18]);
 VAR_35 = FUNC_14(VAR_24, VAR_18, VAR_26);
 if (VAR_35) {
  FUNC_0("radeon: cp isn't working (%d).\n", VAR_35);
  return VAR_35;
 }
 VAR_26->ready = 1;
 FUNC_16(VAR_24, VAR_24->mc.real_vram_size);

 if (!VAR_26->rptr_save_reg
     && FUNC_13(VAR_24, VAR_26)) {
  VAR_35 = FUNC_15(VAR_24, &VAR_26->rptr_save_reg);
  if (VAR_35) {
   FUNC_0("failed to get scratch reg for rptr save (%d).\n", VAR_35);
   VAR_26->rptr_save_reg = 0;
  }
 }
 return 0;
}
