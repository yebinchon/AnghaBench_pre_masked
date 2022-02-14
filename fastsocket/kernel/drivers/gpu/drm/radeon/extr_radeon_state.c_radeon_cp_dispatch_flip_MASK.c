
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int y; int x; } ;
struct drm_sarea {TYPE_3__ frame; } ;
struct drm_radeon_master_private {TYPE_4__* sarea_priv; TYPE_1__* sarea; } ;
struct drm_master {struct drm_radeon_master_private* driver_priv; } ;
struct drm_device {TYPE_5__* dev_private; } ;
struct TYPE_8__ {int boxes; } ;
struct TYPE_11__ {int front_offset; int back_offset; int front_pitch; int color_fmt; TYPE_2__ stats; scalar_t__ do_boxes; } ;
typedef TYPE_5__ drm_radeon_private_t ;
struct TYPE_10__ {int pfCurrentPage; int crtc2_base; int last_frame; } ;
struct TYPE_7__ {scalar_t__ handle; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (TYPE_5__*,struct drm_radeon_master_private*) ;

void FUNC_7(struct drm_device *VAR_4, struct drm_master *VAR_5)
{
 drm_radeon_private_t *VAR_6 = VAR_4->dev_private;
 struct drm_radeon_master_private *VAR_7 = VAR_5->driver_priv;
 struct drm_sarea *VAR_8 = (struct drm_sarea *)VAR_7->sarea->handle;
 int VAR_9 = (VAR_7->sarea_priv->pfCurrentPage == 1)
     ? VAR_6->front_offset : VAR_6->back_offset;
 VAR_3;
 FUNC_2("pfCurrentPage=%d\n",
    VAR_7->sarea_priv->pfCurrentPage);



 if (VAR_6->do_boxes) {
  VAR_6->stats.boxes |= VAR_0;
  FUNC_6(VAR_6, VAR_7);
 }



 FUNC_1(6);

 FUNC_5();
 FUNC_3(VAR_2,
       ((VAR_8->frame.y * VAR_6->front_pitch +
         VAR_8->frame.x * (VAR_6->color_fmt - 2)) & ~7)
       + VAR_9);
 FUNC_3(VAR_1, VAR_7->sarea_priv->crtc2_base
       + VAR_9);

 FUNC_0();





 VAR_7->sarea_priv->last_frame++;
 VAR_7->sarea_priv->pfCurrentPage =
  1 - VAR_7->sarea_priv->pfCurrentPage;

 FUNC_1(2);

 FUNC_4(VAR_7->sarea_priv->last_frame);

 FUNC_0();
}
