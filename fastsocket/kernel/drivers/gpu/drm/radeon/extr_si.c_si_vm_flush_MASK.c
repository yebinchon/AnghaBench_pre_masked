
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_vm {int id; int pd_gpu_addr; } ;
struct radeon_ring {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_ring*,int) ;

void FUNC_4(struct radeon_device *VAR_6, int VAR_7, struct radeon_vm *VAR_8)
{
 struct radeon_ring *VAR_9 = &VAR_6->ring[VAR_7];

 if (VAR_8 == ((void*)0))
  return;


 FUNC_3(VAR_9, FUNC_0(VAR_2, 3));
 FUNC_3(VAR_9, (FUNC_2(0) |
     FUNC_1(0)));

 if (VAR_8->id < 8) {
  FUNC_3(VAR_9,
      (VAR_3 + (VAR_8->id << 2)) >> 2);
 } else {
  FUNC_3(VAR_9,
      (VAR_4 + ((VAR_8->id - 8) << 2)) >> 2);
 }
 FUNC_3(VAR_9, 0);
 FUNC_3(VAR_9, VAR_8->pd_gpu_addr >> 12);


 FUNC_3(VAR_9, FUNC_0(VAR_2, 3));
 FUNC_3(VAR_9, (FUNC_2(0) |
     FUNC_1(0)));
 FUNC_3(VAR_9, VAR_0 >> 2);
 FUNC_3(VAR_9, 0);
 FUNC_3(VAR_9, 0x1);


 FUNC_3(VAR_9, FUNC_0(VAR_2, 3));
 FUNC_3(VAR_9, (FUNC_2(0) |
     FUNC_1(0)));
 FUNC_3(VAR_9, VAR_5 >> 2);
 FUNC_3(VAR_9, 0);
 FUNC_3(VAR_9, 1 << VAR_8->id);


 FUNC_3(VAR_9, FUNC_0(VAR_1, 0));
 FUNC_3(VAR_9, 0x0);
}
