
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int ring_size; int gpu_addr; int wptr; int rptr; int ready; int idx; } ;
struct TYPE_4__ {int real_vram_size; } ;
struct TYPE_3__ {int gpu_addr; scalar_t__ enabled; } ;
struct radeon_device {TYPE_2__ mc; TYPE_1__ wb; struct radeon_ring* ring; } ;


 size_t VAR_0 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct radeon_device*,int ,struct radeon_ring*) ;
 int FUNC_4 (struct radeon_device*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

int FUNC_7(struct radeon_device *VAR_27)
{
 struct radeon_ring *VAR_28;
 u32 VAR_29, VAR_30, VAR_31;
 u32 VAR_32;
 u32 VAR_33, VAR_34;
 int VAR_35, VAR_36;


 FUNC_1(VAR_26, VAR_24 | VAR_25);
 FUNC_0(VAR_26);
 FUNC_5(50);
 FUNC_1(VAR_26, 0);

 for (VAR_35 = 0; VAR_35 < 2; VAR_35++) {
  if (VAR_35 == 0) {
   VAR_28 = &VAR_27->ring[VAR_22];
   VAR_33 = VAR_4;
   VAR_34 = VAR_23;
  } else {
   VAR_28 = &VAR_27->ring[VAR_0];
   VAR_33 = VAR_5;
   VAR_34 = VAR_1;
  }

  FUNC_1(VAR_20 + VAR_33, 0);
  FUNC_1(VAR_21 + VAR_33, 0);


  VAR_32 = FUNC_2(VAR_28->ring_size / 4);
  VAR_29 = VAR_32 << 1;



  FUNC_1(VAR_11 + VAR_33, VAR_29);


  FUNC_1(VAR_13 + VAR_33, 0);
  FUNC_1(VAR_17 + VAR_33, 0);


  FUNC_1(VAR_14 + VAR_33,
         FUNC_6(VAR_27->wb.gpu_addr + VAR_34) & 0xFF);
  FUNC_1(VAR_15 + VAR_33,
         ((VAR_27->wb.gpu_addr + VAR_34) & 0xFFFFFFFC));

  if (VAR_27->wb.enabled)
   VAR_29 |= VAR_18;

  FUNC_1(VAR_10 + VAR_33, VAR_28->gpu_addr >> 8);


  VAR_31 = VAR_8 | VAR_2;



  FUNC_1(VAR_7 + VAR_33, VAR_31);

  VAR_30 = FUNC_0(VAR_6 + VAR_33);
  VAR_30 &= ~VAR_3;
  FUNC_1(VAR_6 + VAR_33, VAR_30);

  VAR_28->wptr = 0;
  FUNC_1(VAR_17 + VAR_33, VAR_28->wptr << 2);

  VAR_28->rptr = FUNC_0(VAR_13 + VAR_33) >> 2;

  FUNC_1(VAR_11 + VAR_33, VAR_29 | VAR_12);

  VAR_28->ready = 1;

  VAR_36 = FUNC_3(VAR_27, VAR_28->idx, VAR_28);
  if (VAR_36) {
   VAR_28->ready = 0;
   return VAR_36;
  }
 }

 FUNC_4(VAR_27, VAR_27->mc.real_vram_size);

 return 0;
}
