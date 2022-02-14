
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
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int) ;
 int VAR_13 ;
 int FUNC_2 (int ,int) ;
 int VAR_14 ;
 int FUNC_3 (int ,int) ;
 int VAR_15 ;

void FUNC_4(drm_radeon_private_t *VAR_16, u32 VAR_17)
{

 if ((VAR_16->flags & VAR_11) >= VAR_5) {
  FUNC_1(VAR_9, VAR_17 & 0xffff);
  FUNC_1(VAR_10, (VAR_17 >> 16) & 0xffff);
 } else if ((VAR_16->flags & VAR_11) >= VAR_0) {
  FUNC_1(VAR_7, VAR_17 & 0xffff);
  FUNC_1(VAR_8, (VAR_17 >> 16) & 0xffff);
 } else if ((VAR_16->flags & VAR_11) == VAR_4)
  FUNC_0(VAR_15, VAR_17);
 else if (((VAR_16->flags & VAR_11) == VAR_2) ||
   ((VAR_16->flags & VAR_11) == VAR_3))
  FUNC_3(VAR_14, VAR_17);
 else if ((VAR_16->flags & VAR_11) == VAR_1)
  FUNC_2(VAR_13, VAR_17);
 else if ((VAR_16->flags & VAR_11) > VAR_4)
  FUNC_0(VAR_6, VAR_17);
 else
  FUNC_1(VAR_12, VAR_17);
}
