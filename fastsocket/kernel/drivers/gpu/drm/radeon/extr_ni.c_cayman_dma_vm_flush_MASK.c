
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_vm {int id; int pd_gpu_addr; } ;
struct radeon_ring {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct radeon_ring*,int) ;

void FUNC_2(struct radeon_device *VAR_4, int VAR_5, struct radeon_vm *VAR_6)
{
 struct radeon_ring *VAR_7 = &VAR_4->ring[VAR_5];

 if (VAR_6 == ((void*)0))
  return;

 FUNC_1(VAR_7, FUNC_0(VAR_0, 0, 0, 0));
 FUNC_1(VAR_7, (0xf << 16) | ((VAR_2 + (VAR_6->id << 2)) >> 2));
 FUNC_1(VAR_7, VAR_6->pd_gpu_addr >> 12);


 FUNC_1(VAR_7, FUNC_0(VAR_0, 0, 0, 0));
 FUNC_1(VAR_7, (0xf << 16) | (VAR_1 >> 2));
 FUNC_1(VAR_7, 1);


 FUNC_1(VAR_7, FUNC_0(VAR_0, 0, 0, 0));
 FUNC_1(VAR_7, (0xf << 16) | (VAR_3 >> 2));
 FUNC_1(VAR_7, 1 << VAR_6->id);
}
