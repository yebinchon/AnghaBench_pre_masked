
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int wptr; int next_rptr_gpu_addr; } ;
struct radeon_ib {size_t ring; int gpu_addr; int length_dw; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ wb; struct radeon_ring* ring; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct radeon_ring*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_3, struct radeon_ib *VAR_4)
{
 struct radeon_ring *VAR_5 = &VAR_3->ring[VAR_4->ring];

 if (VAR_3->wb.enabled) {
  u32 VAR_6 = VAR_5->wptr + 4;
  while ((VAR_6 & 7) != 5)
   VAR_6++;
  VAR_6 += 3;
  FUNC_1(VAR_5, FUNC_0(VAR_2, 0, 0, 1));
  FUNC_1(VAR_5, VAR_5->next_rptr_gpu_addr & 0xfffffffc);
  FUNC_1(VAR_5, FUNC_2(VAR_5->next_rptr_gpu_addr) & 0xff);
  FUNC_1(VAR_5, VAR_6);
 }




 while ((VAR_5->wptr & 7) != 5)
  FUNC_1(VAR_5, FUNC_0(VAR_1, 0, 0, 0));
 FUNC_1(VAR_5, FUNC_0(VAR_0, 0, 0, 0));
 FUNC_1(VAR_5, (VAR_4->gpu_addr & 0xFFFFFFE0));
 FUNC_1(VAR_5, (VAR_4->length_dw << 16) | (FUNC_2(VAR_4->gpu_addr) & 0xFF));

}
