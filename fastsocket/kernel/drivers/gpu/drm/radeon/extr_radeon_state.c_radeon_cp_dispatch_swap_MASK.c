
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_radeon_master_private {TYPE_1__* sarea_priv; } ;
struct drm_master {struct drm_radeon_master_private* driver_priv; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct drm_clip_rect {int x1; int y1; int x2; int y2; } ;
struct TYPE_4__ {int nbox; scalar_t__ pfCurrentPage; int last_frame; struct drm_clip_rect* boxes; } ;
typedef TYPE_1__ drm_radeon_sarea_t ;
struct TYPE_5__ {int color_fmt; int back_pitch_offset; int front_pitch_offset; scalar_t__ do_boxes; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_11 ;
 int FUNC_8 (TYPE_2__*,struct drm_radeon_master_private*) ;

__attribute__((used)) static void FUNC_9(struct drm_device *VAR_12, struct drm_master *VAR_13)
{
 drm_radeon_private_t *VAR_14 = VAR_12->dev_private;
 struct drm_radeon_master_private *VAR_15 = VAR_13->driver_priv;
 drm_radeon_sarea_t *VAR_16 = VAR_15->sarea_priv;
 int VAR_17 = VAR_16->nbox;
 struct drm_clip_rect *VAR_18 = VAR_16->boxes;
 int VAR_19;
 VAR_11;
 FUNC_3("\n");



 if (VAR_14->do_boxes)
  FUNC_8(VAR_14, VAR_15);




 FUNC_1(2);

 FUNC_7();

 FUNC_0();

 for (VAR_19 = 0; VAR_19 < VAR_17; VAR_19++) {
  int VAR_20 = VAR_18[VAR_19].x1;
  int VAR_21 = VAR_18[VAR_19].y1;
  int VAR_22 = VAR_18[VAR_19].x2 - VAR_20;
  int VAR_23 = VAR_18[VAR_19].y2 - VAR_21;

  FUNC_3("%d,%d-%d,%d\n", VAR_20, VAR_21, VAR_22, VAR_23);

  FUNC_1(9);

  FUNC_4(FUNC_2(VAR_0, 0));
  FUNC_4(VAR_6 |
    VAR_4 |
    VAR_2 |
    (VAR_14->color_fmt << 8) |
    VAR_5 |
    VAR_8 |
    VAR_1 |
    VAR_3 | VAR_7);



  FUNC_4(FUNC_2(VAR_9, 1));
  if (VAR_16->pfCurrentPage == 0) {
   FUNC_4(VAR_14->back_pitch_offset);
   FUNC_4(VAR_14->front_pitch_offset);
  } else {
   FUNC_4(VAR_14->front_pitch_offset);
   FUNC_4(VAR_14->back_pitch_offset);
  }

  FUNC_4(FUNC_2(VAR_10, 2));
  FUNC_4((VAR_20 << 16) | VAR_21);
  FUNC_4((VAR_20 << 16) | VAR_21);
  FUNC_4((VAR_22 << 16) | VAR_23);

  FUNC_0();
 }





 VAR_16->last_frame++;

 FUNC_1(4);

 FUNC_5(VAR_16->last_frame);
 FUNC_6();

 FUNC_0();
}
