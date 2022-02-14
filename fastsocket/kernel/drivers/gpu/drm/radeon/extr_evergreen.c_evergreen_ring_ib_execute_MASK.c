
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ring {int rptr_save_reg; int wptr; int next_rptr_gpu_addr; } ;
struct radeon_ib {size_t ring; int gpu_addr; int length_dw; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct radeon_device {TYPE_1__ wb; struct radeon_ring* ring; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct radeon_ring*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_5, struct radeon_ib *VAR_6)
{
 struct radeon_ring *VAR_7 = &VAR_5->ring[VAR_6->ring];
 u32 VAR_8;


 FUNC_1(VAR_7, FUNC_0(VAR_2, 0));
 FUNC_1(VAR_7, 1);

 if (VAR_7->rptr_save_reg) {
  VAR_8 = VAR_7->wptr + 3 + 4;
  FUNC_1(VAR_7, FUNC_0(VAR_3, 1));
  FUNC_1(VAR_7, ((VAR_7->rptr_save_reg -
       VAR_4) >> 2));
  FUNC_1(VAR_7, VAR_8);
 } else if (VAR_5->wb.enabled) {
  VAR_8 = VAR_7->wptr + 5 + 4;
  FUNC_1(VAR_7, FUNC_0(VAR_1, 3));
  FUNC_1(VAR_7, VAR_7->next_rptr_gpu_addr & 0xfffffffc);
  FUNC_1(VAR_7, (FUNC_2(VAR_7->next_rptr_gpu_addr) & 0xff) | (1 << 18));
  FUNC_1(VAR_7, VAR_8);
  FUNC_1(VAR_7, 0);
 }

 FUNC_1(VAR_7, FUNC_0(VAR_0, 2));
 FUNC_1(VAR_7,



     (VAR_6->gpu_addr & 0xFFFFFFFC));
 FUNC_1(VAR_7, FUNC_2(VAR_6->gpu_addr) & 0xFF);
 FUNC_1(VAR_7, VAR_6->length_dw);
}
