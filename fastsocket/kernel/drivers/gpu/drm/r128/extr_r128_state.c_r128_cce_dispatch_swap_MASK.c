
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct drm_clip_rect {int x1; int y1; int x2; int y2; } ;
struct TYPE_4__ {int nbox; int last_frame; struct drm_clip_rect* boxes; } ;
typedef TYPE_1__ drm_r128_sarea_t ;
struct TYPE_5__ {int color_fmt; scalar_t__ current_page; int back_pitch_offset_c; int front_pitch_offset_c; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_r128_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
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
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_12)
{
 drm_r128_private_t *VAR_13 = VAR_12->dev_private;
 drm_r128_sarea_t *VAR_14 = VAR_13->sarea_priv;
 int VAR_15 = VAR_14->nbox;
 struct drm_clip_rect *VAR_16 = VAR_14->boxes;
 int VAR_17;
 VAR_11;
 FUNC_4("\n");







 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
  int VAR_18 = VAR_16[VAR_17].x1;
  int VAR_19 = VAR_16[VAR_17].y1;
  int VAR_20 = VAR_16[VAR_17].x2 - VAR_18;
  int VAR_21 = VAR_16[VAR_17].y2 - VAR_19;

  FUNC_1(7);

  FUNC_5(FUNC_3(VAR_0, 5));
  FUNC_5(VAR_7 |
    VAR_5 |
    VAR_3 |
    (VAR_13->color_fmt << 8) |
    VAR_6 |
    VAR_10 |
    VAR_1 |
    VAR_4 |
    VAR_2 | VAR_8);



  if (VAR_13->current_page == 0) {
   FUNC_5(VAR_13->back_pitch_offset_c);
   FUNC_5(VAR_13->front_pitch_offset_c);
  } else {
   FUNC_5(VAR_13->front_pitch_offset_c);
   FUNC_5(VAR_13->back_pitch_offset_c);
  }

  FUNC_5((VAR_18 << 16) | VAR_19);
  FUNC_5((VAR_18 << 16) | VAR_19);
  FUNC_5((VAR_20 << 16) | VAR_21);

  FUNC_0();
 }





 VAR_13->sarea_priv->last_frame++;

 FUNC_1(2);

 FUNC_5(FUNC_2(VAR_9, 0));
 FUNC_5(VAR_13->sarea_priv->last_frame);

 FUNC_0();
}
