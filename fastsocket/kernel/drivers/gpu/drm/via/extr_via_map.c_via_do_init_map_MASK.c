
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct drm_device {TYPE_1__* dev_private; } ;
typedef int drm_via_sarea_t ;
struct TYPE_6__ {int agpAddr; TYPE_5__* sarea; int * sarea_priv; void* mmio; void* fb; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_7__ {int sarea_priv_offset; int agpAddr; int mmio_offset; int fb_offset; } ;
typedef TYPE_2__ drm_via_init_t ;
struct TYPE_8__ {scalar_t__ handle; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 void* FUNC_2 (struct drm_device*,int ) ;
 TYPE_5__* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_1, drm_via_init_t *VAR_2)
{
 drm_via_private_t *VAR_3 = VAR_1->dev_private;

 FUNC_0("\n");

 VAR_3->sarea = FUNC_3(VAR_1);
 if (!VAR_3->sarea) {
  FUNC_1("could not find sarea!\n");
  VAR_1->dev_private = (void *)VAR_3;
  FUNC_4(VAR_1);
  return -VAR_0;
 }

 VAR_3->fb = FUNC_2(VAR_1, VAR_2->fb_offset);
 if (!VAR_3->fb) {
  FUNC_1("could not find framebuffer!\n");
  VAR_1->dev_private = (void *)VAR_3;
  FUNC_4(VAR_1);
  return -VAR_0;
 }
 VAR_3->mmio = FUNC_2(VAR_1, VAR_2->mmio_offset);
 if (!VAR_3->mmio) {
  FUNC_1("could not find mmio region!\n");
  VAR_1->dev_private = (void *)VAR_3;
  FUNC_4(VAR_1);
  return -VAR_0;
 }

 VAR_3->sarea_priv =
     (drm_via_sarea_t *) ((u8 *) VAR_3->sarea->handle +
     VAR_2->sarea_priv_offset);

 VAR_3->agpAddr = VAR_2->agpAddr;

 FUNC_6(VAR_3);

 FUNC_5(VAR_1);

 VAR_1->dev_private = (void *)VAR_3;
 return 0;
}
