
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_vm {int id; int pd_gpu_addr; } ;
struct radeon_ring {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct radeon_ring*,int) ;

void FUNC_2(struct radeon_device *VAR_5, int VAR_6, struct radeon_vm *VAR_7)
{
 struct radeon_ring *VAR_8 = &VAR_5->ring[VAR_6];

 if (VAR_7 == ((void*)0))
  return;

 FUNC_1(VAR_8, FUNC_0(VAR_0, 0, 0, 0, 0));
 if (VAR_7->id < 8) {
  FUNC_1(VAR_8, (0xf << 16) | ((VAR_2 + (VAR_7->id << 2)) >> 2));
 } else {
  FUNC_1(VAR_8, (0xf << 16) | ((VAR_3 + ((VAR_7->id - 8) << 2)) >> 2));
 }
 FUNC_1(VAR_8, VAR_7->pd_gpu_addr >> 12);


 FUNC_1(VAR_8, FUNC_0(VAR_0, 0, 0, 0, 0));
 FUNC_1(VAR_8, (0xf << 16) | (VAR_1 >> 2));
 FUNC_1(VAR_8, 1);


 FUNC_1(VAR_8, FUNC_0(VAR_0, 0, 0, 0, 0));
 FUNC_1(VAR_8, (0xf << 16) | (VAR_4 >> 2));
 FUNC_1(VAR_8, 1 << VAR_7->id);
}
