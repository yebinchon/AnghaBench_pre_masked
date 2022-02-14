
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
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static u32 FUNC_3(drm_radeon_private_t *VAR_4, int VAR_5)
{
 if (((VAR_4->flags & VAR_3) == VAR_1) ||
     ((VAR_4->flags & VAR_3) == VAR_2))
  return FUNC_2(VAR_4, VAR_5);
 else if ((VAR_4->flags & VAR_3) == VAR_0)
  return FUNC_1(VAR_4, VAR_5);
 else
  return FUNC_0(VAR_4, VAR_5);
}
