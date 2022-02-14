
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_ring {int rptr_save_reg; int wptr; } ;
struct radeon_ib {size_t ring; int gpu_addr; int length_dw; TYPE_1__* vm; } ;
struct radeon_device {struct radeon_ring* ring; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct radeon_ring*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_8, struct radeon_ib *VAR_9)
{
 struct radeon_ring *VAR_10 = &VAR_8->ring[VAR_9->ring];


 FUNC_1(VAR_10, FUNC_0(VAR_2, 0));
 FUNC_1(VAR_10, 1);

 if (VAR_10->rptr_save_reg) {
  uint32_t VAR_11 = VAR_10->wptr + 3 + 4 + 8;
  FUNC_1(VAR_10, FUNC_0(VAR_3, 1));
  FUNC_1(VAR_10, ((VAR_10->rptr_save_reg -
       VAR_4) >> 2));
  FUNC_1(VAR_10, VAR_11);
 }

 FUNC_1(VAR_10, FUNC_0(VAR_1, 2));
 FUNC_1(VAR_10,



     (VAR_9->gpu_addr & 0xFFFFFFFC));
 FUNC_1(VAR_10, FUNC_2(VAR_9->gpu_addr) & 0xFF);
 FUNC_1(VAR_10, VAR_9->length_dw |
     (VAR_9->vm ? (VAR_9->vm->id << 24) : 0));


 FUNC_1(VAR_10, FUNC_0(VAR_3, 1));
 FUNC_1(VAR_10, (VAR_0 - VAR_4) >> 2);
 FUNC_1(VAR_10, VAR_9->vm ? VAR_9->vm->id : 0);
 FUNC_1(VAR_10, FUNC_0(VAR_6, 3));
 FUNC_1(VAR_10, VAR_7 | VAR_5);
 FUNC_1(VAR_10, 0xFFFFFFFF);
 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_10, 10);
}
