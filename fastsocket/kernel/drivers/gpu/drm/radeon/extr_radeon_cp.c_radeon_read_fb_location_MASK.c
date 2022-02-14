
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_13 ;

u32 FUNC_4(drm_radeon_private_t *VAR_14)
{

 if ((VAR_14->flags & VAR_9) >= VAR_5)
  return FUNC_1(VAR_8);
 else if ((VAR_14->flags & VAR_9) >= VAR_0)
  return FUNC_1(VAR_7);
 else if ((VAR_14->flags & VAR_9) == VAR_4)
  return FUNC_0(VAR_14, VAR_13);
 else if (((VAR_14->flags & VAR_9) == VAR_2) ||
   ((VAR_14->flags & VAR_9) == VAR_3))
  return FUNC_3(VAR_14, VAR_12);
 else if ((VAR_14->flags & VAR_9) == VAR_1)
  return FUNC_2(VAR_14, VAR_11);
 else if ((VAR_14->flags & VAR_9) > VAR_4)
  return FUNC_0(VAR_14, VAR_6);
 else
  return FUNC_1(VAR_10);
}
