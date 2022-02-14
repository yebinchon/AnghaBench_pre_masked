
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int ring_size; int wptr; int gpu_addr; int ready; int rptr; } ;
struct TYPE_2__ {int gpu_addr; scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ wb; struct radeon_ring* ring; } ;


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
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,size_t,struct radeon_ring*) ;
 int FUNC_6 (int) ;

int FUNC_7(struct radeon_device *VAR_21)
{
 struct radeon_ring *VAR_22 = &VAR_21->ring[VAR_13];
 u32 VAR_23;
 u32 VAR_24;
 int VAR_25;


 FUNC_1(VAR_11, VAR_20);
 FUNC_0(VAR_11);
 FUNC_3(15);
 FUNC_1(VAR_11, 0);


 VAR_24 = FUNC_2(VAR_22->ring_size / 8);
 VAR_23 = (FUNC_2(VAR_12/8) << 8) | VAR_24;



 FUNC_1(VAR_3, VAR_23);
 FUNC_1(VAR_10, 0x0);


 FUNC_1(VAR_9, 0);


 FUNC_1(VAR_3, VAR_23 | VAR_17);
 FUNC_1(VAR_7, 0);
 VAR_22->wptr = 0;
 FUNC_1(VAR_8, VAR_22->wptr);


 FUNC_1(VAR_5,
        ((VAR_21->wb.gpu_addr + VAR_14) & 0xFFFFFFFC));
 FUNC_1(VAR_6, FUNC_6(VAR_21->wb.gpu_addr + VAR_14) & 0xFF);
 FUNC_1(VAR_18, ((VAR_21->wb.gpu_addr + VAR_15) >> 8) & 0xFFFFFFFF);

 if (VAR_21->wb.enabled)
  FUNC_1(VAR_19, 0xff);
 else {
  VAR_23 |= VAR_16;
  FUNC_1(VAR_19, 0);
 }

 FUNC_3(1);
 FUNC_1(VAR_3, VAR_23);

 FUNC_1(VAR_2, VAR_22->gpu_addr >> 8);
 FUNC_1(VAR_1, (1 << 27) | (1 << 28));

 VAR_22->rptr = FUNC_0(VAR_4);

 FUNC_4(VAR_21);
 VAR_22->ready = 1;
 VAR_25 = FUNC_5(VAR_21, VAR_13, VAR_22);
 if (VAR_25) {
  VAR_22->ready = 0;
  return VAR_25;
 }
 return 0;
}
