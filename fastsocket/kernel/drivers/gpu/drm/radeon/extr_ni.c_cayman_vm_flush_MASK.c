
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_vm {int id; int pd_gpu_addr; } ;
struct radeon_ring {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct radeon_ring*,int) ;

void FUNC_3(struct radeon_device *VAR_4, int VAR_5, struct radeon_vm *VAR_6)
{
 struct radeon_ring *VAR_7 = &VAR_4->ring[VAR_5];

 if (VAR_6 == ((void*)0))
  return;

 FUNC_2(VAR_7, FUNC_0(VAR_2 + (VAR_6->id << 2), 0));
 FUNC_2(VAR_7, VAR_6->pd_gpu_addr >> 12);


 FUNC_2(VAR_7, FUNC_0(VAR_0, 0));
 FUNC_2(VAR_7, 0x1);


 FUNC_2(VAR_7, FUNC_0(VAR_3, 0));
 FUNC_2(VAR_7, 1 << VAR_6->id);


 FUNC_2(VAR_7, FUNC_1(VAR_1, 0));
 FUNC_2(VAR_7, 0x0);
}
