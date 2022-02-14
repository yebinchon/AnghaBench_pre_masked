
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int VAR_11 ;
 int FUNC_2 (int ,int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int ) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_4(drm_radeon_private_t *VAR_14, u32 VAR_15)
{
 if ((VAR_14->flags & VAR_9) >= VAR_5)
  FUNC_1(VAR_8, VAR_15);
 else if ((VAR_14->flags & VAR_9) >= VAR_0)
  FUNC_1(VAR_7, VAR_15);
 else if ((VAR_14->flags & VAR_9) == VAR_4)
  FUNC_0(VAR_13, VAR_15);
 else if (((VAR_14->flags & VAR_9) == VAR_2) ||
   ((VAR_14->flags & VAR_9) == VAR_3))
  FUNC_3(VAR_12, VAR_15);
 else if ((VAR_14->flags & VAR_9) == VAR_1)
  FUNC_2(VAR_11, VAR_15);
 else if ((VAR_14->flags & VAR_9) > VAR_4)
  FUNC_0(VAR_6, VAR_15);
 else
  FUNC_1(VAR_10, VAR_15);
}
