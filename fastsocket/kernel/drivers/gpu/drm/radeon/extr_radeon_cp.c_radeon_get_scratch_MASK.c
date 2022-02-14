
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flags; scalar_t__ writeback_works; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ) ;

u32 FUNC_4(drm_radeon_private_t *VAR_4, int VAR_5)
{
 if (VAR_4->writeback_works) {
  if ((VAR_4->flags & VAR_2) >= VAR_0)
   return FUNC_3(VAR_4,
           FUNC_0(VAR_5));
  else
   return FUNC_3(VAR_4,
           FUNC_2(VAR_5));
 } else {
  if ((VAR_4->flags & VAR_2) >= VAR_0)
   return FUNC_1(VAR_1 + 4*VAR_5);
  else
   return FUNC_1(VAR_3 + 4*VAR_5);
 }
}
