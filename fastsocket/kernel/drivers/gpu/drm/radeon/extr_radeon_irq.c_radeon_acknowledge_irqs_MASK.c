
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static u32 FUNC_2(drm_radeon_private_t *VAR_13, u32 *VAR_14)
{
 u32 VAR_15 = FUNC_0(VAR_11);
 u32 VAR_16 = VAR_12;

 *VAR_14 = 0;
 if ((VAR_13->flags & VAR_10) >= VAR_0) {


  if (VAR_15 & VAR_5) {

   u32 VAR_17;

   VAR_17 = FUNC_0(VAR_6);

   *VAR_14 = VAR_17;
   if (VAR_17 & VAR_2)
    FUNC_1(VAR_1, VAR_7);
   if (VAR_17 & VAR_4)
    FUNC_1(VAR_3, VAR_7);
  }
  VAR_16 |= VAR_5;
 } else
  VAR_16 |= VAR_9 | VAR_8;

 VAR_15 &= VAR_16;

 if (VAR_15)
  FUNC_1(VAR_11, VAR_15);

 return VAR_15;
}
