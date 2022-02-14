
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int ring_size; int gpu_addr; int wptr; int rptr; int ready; } ;
struct TYPE_4__ {int real_vram_size; } ;
struct TYPE_3__ {int gpu_addr; scalar_t__ enabled; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ mc; TYPE_1__ wb; struct radeon_ring* ring; } ;


 scalar_t__ VAR_0 ;
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
 size_t VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct radeon_device*,size_t,struct radeon_ring*) ;
 int FUNC_4 (struct radeon_device*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

int FUNC_7(struct radeon_device *VAR_24)
{
 struct radeon_ring *VAR_25 = &VAR_24->ring[VAR_19];
 u32 VAR_26, VAR_27, VAR_28;
 u32 VAR_29;
 int VAR_30;


 if (VAR_24->family >= VAR_0)
  FUNC_1(VAR_23, VAR_21);
 else
  FUNC_1(VAR_23, VAR_22);
 FUNC_0(VAR_23);
 FUNC_5(50);
 FUNC_1(VAR_23, 0);

 FUNC_1(VAR_17, 0);
 FUNC_1(VAR_18, 0);


 VAR_29 = FUNC_2(VAR_25->ring_size / 4);
 VAR_26 = VAR_29 << 1;



 FUNC_1(VAR_8, VAR_26);


 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_14, 0);


 FUNC_1(VAR_11,
        FUNC_6(VAR_24->wb.gpu_addr + VAR_20) & 0xFF);
 FUNC_1(VAR_12,
        ((VAR_24->wb.gpu_addr + VAR_20) & 0xFFFFFFFC));

 if (VAR_24->wb.enabled)
  VAR_26 |= VAR_15;

 FUNC_1(VAR_7, VAR_25->gpu_addr >> 8);


 VAR_28 = VAR_4;



 FUNC_1(VAR_3, VAR_28);

 VAR_27 = FUNC_0(VAR_2);
 VAR_27 &= ~VAR_1;
 FUNC_1(VAR_2, VAR_27);

 if (VAR_24->family >= VAR_0)
  FUNC_1(VAR_6, 1);

 VAR_25->wptr = 0;
 FUNC_1(VAR_14, VAR_25->wptr << 2);

 VAR_25->rptr = FUNC_0(VAR_10) >> 2;

 FUNC_1(VAR_8, VAR_26 | VAR_9);

 VAR_25->ready = 1;

 VAR_30 = FUNC_3(VAR_24, VAR_19, VAR_25);
 if (VAR_30) {
  VAR_25->ready = 0;
  return VAR_30;
 }

 FUNC_4(VAR_24, VAR_24->mc.real_vram_size);

 return 0;
}
