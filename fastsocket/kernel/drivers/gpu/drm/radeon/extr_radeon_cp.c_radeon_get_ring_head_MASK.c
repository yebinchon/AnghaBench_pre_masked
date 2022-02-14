
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flags; scalar_t__ writeback_works; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

u32 FUNC_2(drm_radeon_private_t *VAR_4)
{
 if (VAR_4->writeback_works)
  return FUNC_1(VAR_4, 0);
 else {
  if ((VAR_4->flags & VAR_3) >= VAR_0)
   return FUNC_0(VAR_1);
  else
   return FUNC_0(VAR_2);
 }
}
