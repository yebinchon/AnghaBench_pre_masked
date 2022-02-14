
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_semaphore {int gpu_addr; } ;
struct radeon_ring {int dummy; } ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct radeon_ring*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct radeon_device *VAR_5,
         struct radeon_ring *VAR_6,
         struct radeon_semaphore *VAR_7,
         bool VAR_8)
{
 uint64_t VAR_9 = VAR_7->gpu_addr;
 unsigned VAR_10 = VAR_8 ? VAR_3 : VAR_2;

 if (VAR_5->family < VAR_0)
  VAR_10 |= VAR_4;

 FUNC_1(VAR_6, FUNC_0(VAR_1, 1));
 FUNC_1(VAR_6, VAR_9 & 0xffffffff);
 FUNC_1(VAR_6, (FUNC_2(VAR_9) & 0xff) | VAR_10);
}
