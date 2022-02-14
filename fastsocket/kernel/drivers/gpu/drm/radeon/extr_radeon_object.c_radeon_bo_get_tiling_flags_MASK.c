
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_bo {int pitch; int tiling_flags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct radeon_bo*) ;

void FUNC_2(struct radeon_bo *VAR_0,
    uint32_t *VAR_1,
    uint32_t *VAR_2)
{
 FUNC_0(!FUNC_1(VAR_0));
 if (VAR_1)
  *VAR_1 = VAR_0->tiling_flags;
 if (VAR_2)
  *VAR_2 = VAR_0->pitch;
}
