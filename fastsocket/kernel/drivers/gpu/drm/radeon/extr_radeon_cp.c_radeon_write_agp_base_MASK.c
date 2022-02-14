
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (int) ;

void FUNC_5(drm_radeon_private_t *VAR_23, u64 VAR_24)
{
 u32 VAR_25 = FUNC_4(VAR_24);
 u32 VAR_26 = VAR_24 & 0xffffffff;
 u32 VAR_27 = (VAR_24 >> 22) & 0x3ffff;


 if ((VAR_23->flags & VAR_15) >= VAR_8)
  FUNC_1(VAR_12, VAR_27);
 else if ((VAR_23->flags & VAR_15) >= VAR_1)
  FUNC_1(VAR_11, VAR_27);
 else if ((VAR_23->flags & VAR_15) == VAR_7) {
  FUNC_0(VAR_21, VAR_26);
  FUNC_0(VAR_22, VAR_25);
 } else if (((VAR_23->flags & VAR_15) == VAR_5) ||
   ((VAR_23->flags & VAR_15) == VAR_6)) {
  FUNC_3(VAR_19, VAR_26);
  FUNC_3(VAR_20, VAR_25);
 } else if ((VAR_23->flags & VAR_15) == VAR_4) {
  FUNC_2(VAR_17, VAR_26);
  FUNC_2(VAR_18, VAR_25);
 } else if ((VAR_23->flags & VAR_15) > VAR_7) {
  FUNC_0(VAR_9, VAR_26);
  FUNC_0(VAR_10, VAR_25);
 } else if (((VAR_23->flags & VAR_15) == VAR_2) ||
     ((VAR_23->flags & VAR_15) == VAR_3)) {
  FUNC_1(VAR_13, VAR_26);
  FUNC_1(VAR_16, VAR_25);
 } else {
  FUNC_1(VAR_13, VAR_26);
  if ((VAR_23->flags & VAR_15) >= VAR_0)
   FUNC_1(VAR_14, VAR_25);
 }
}
