
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct drm_radeon_master_private {TYPE_2__* sarea_priv; } ;
struct TYPE_7__ {int color_fmt; int front_pitch_offset; int back_pitch_offset; } ;
typedef TYPE_3__ drm_radeon_private_t ;
struct TYPE_6__ {int pfCurrentPage; TYPE_1__* boxes; } ;
struct TYPE_5__ {scalar_t__ y1; scalar_t__ x1; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 () ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6(drm_radeon_private_t * VAR_8,
        struct drm_radeon_master_private *VAR_9,
        int VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16)
{
 u32 VAR_17;
 VAR_7;

 VAR_10 += VAR_9->sarea_priv->boxes[0].x1;
 VAR_11 += VAR_9->sarea_priv->boxes[0].y1;

 switch (VAR_8->color_fmt) {
 case 128:
  VAR_17 = (((VAR_14 & 0xf8) << 8) |
    ((VAR_15 & 0xfc) << 3) | ((VAR_16 & 0xf8) >> 3));
  break;
 case 129:
 default:
  VAR_17 = (((0xff) << 24) | (VAR_14 << 16) | (VAR_15 << 8) | VAR_16);
  break;
 }

 FUNC_1(4);
 FUNC_5();
 FUNC_4(FUNC_2(VAR_1, 0));
 FUNC_4(0xffffffff);
 FUNC_0();

 FUNC_1(6);

 FUNC_4(FUNC_3(VAR_0, 4));
 FUNC_4(VAR_4 |
   VAR_2 |
   (VAR_8->color_fmt << 8) |
   VAR_5 |
   VAR_6 | VAR_3);

 if (VAR_9->sarea_priv->pfCurrentPage == 1) {
  FUNC_4(VAR_8->front_pitch_offset);
 } else {
  FUNC_4(VAR_8->back_pitch_offset);
 }

 FUNC_4(VAR_17);

 FUNC_4((VAR_10 << 16) | VAR_11);
 FUNC_4((VAR_12 << 16) | VAR_13);

 FUNC_0();
}
