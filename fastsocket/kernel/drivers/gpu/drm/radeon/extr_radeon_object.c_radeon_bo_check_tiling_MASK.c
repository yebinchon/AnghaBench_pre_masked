
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mem_type; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;
struct radeon_bo {int tiling_flags; scalar_t__ surface_reg; TYPE_2__ tbo; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct radeon_bo*) ;
 int FUNC_2 (struct radeon_bo*) ;
 int FUNC_3 (struct radeon_bo*) ;

int FUNC_4(struct radeon_bo *VAR_2, bool VAR_3,
    bool VAR_4)
{
 FUNC_0(!FUNC_3(VAR_2) && !VAR_4);

 if (!(VAR_2->tiling_flags & VAR_0))
  return 0;

 if (VAR_4) {
  FUNC_1(VAR_2);
  return 0;
 }

 if (VAR_2->tbo.mem.mem_type != VAR_1) {
  if (!VAR_3)
   return 0;

  if (VAR_2->surface_reg >= 0)
   FUNC_1(VAR_2);
  return 0;
 }

 if ((VAR_2->surface_reg >= 0) && !VAR_3)
  return 0;

 return FUNC_2(VAR_2);
}
