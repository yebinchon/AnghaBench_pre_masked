
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct drm_radeon_master_private {TYPE_1__* sarea_priv; } ;
struct drm_master {struct drm_radeon_master_private* driver_priv; } ;
struct drm_file {struct drm_master* master; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct drm_clip_rect {int x1; int y1; int x2; int y2; } ;
struct TYPE_3__ {int nbox; scalar_t__ pfCurrentPage; int last_frame; struct drm_clip_rect* boxes; } ;
typedef TYPE_1__ drm_radeon_sarea_t ;
struct TYPE_4__ {scalar_t__ color_fmt; int back_pitch; int front_pitch; scalar_t__ fb_location; scalar_t__ back_offset; scalar_t__ front_offset; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct drm_device*,scalar_t__,scalar_t__,int,int,int,int,int,int,int,int,int) ;
 int FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*,struct drm_file*) ;

void FUNC_8(struct drm_device *VAR_2, struct drm_file *VAR_3)
{
 drm_radeon_private_t *VAR_4 = VAR_2->dev_private;
 struct drm_master *VAR_5 = VAR_3->master;
 struct drm_radeon_master_private *VAR_6 = VAR_5->driver_priv;
 drm_radeon_sarea_t *VAR_7 = VAR_6->sarea_priv;
 int VAR_8 = VAR_7->nbox;
 struct drm_clip_rect *VAR_9 = VAR_7->boxes;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 uint64_t VAR_14, VAR_15;
 VAR_1;
 FUNC_2("\n");

 if (VAR_4->color_fmt == VAR_0)
  VAR_11 = 4;
 else
  VAR_11 = 2;

 if (VAR_7->pfCurrentPage == 0) {
  VAR_12 = VAR_4->back_pitch;
  VAR_13 = VAR_4->front_pitch;
  VAR_14 = VAR_4->back_offset + VAR_4->fb_location;
  VAR_15 = VAR_4->front_offset + VAR_4->fb_location;
 } else {
  VAR_12 = VAR_4->front_pitch;
  VAR_13 = VAR_4->back_pitch;
  VAR_14 = VAR_4->front_offset + VAR_4->fb_location;
  VAR_15 = VAR_4->back_offset + VAR_4->fb_location;
 }

 if (FUNC_7(VAR_2, VAR_3)) {
  FUNC_3("unable to allocate vertex buffer for swap buffer\n");
  return;
 }
 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
  int VAR_16 = VAR_9[VAR_10].x1;
  int VAR_17 = VAR_9[VAR_10].y1;
  int VAR_18 = VAR_9[VAR_10].x2 - VAR_16;
  int VAR_19 = VAR_9[VAR_10].y2 - VAR_17;

  FUNC_2("%d,%d-%d,%d\n", VAR_16, VAR_17, VAR_18, VAR_19);

  FUNC_5(VAR_2,
          VAR_14, VAR_15,
          VAR_16, VAR_17, VAR_16, VAR_17, VAR_18, VAR_19,
          VAR_12, VAR_13, VAR_11);
 }
 FUNC_6(VAR_2);





 VAR_7->last_frame++;

 FUNC_1(3);
 FUNC_4(VAR_7->last_frame);
 FUNC_0();
}
