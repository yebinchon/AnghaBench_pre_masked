
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int last_dispatch; } ;
typedef TYPE_1__ drm_i810_sarea_t ;
struct TYPE_4__ {scalar_t__ sarea_priv; scalar_t__* hw_status_page; } ;
typedef TYPE_2__ drm_i810_private_t ;



__attribute__((used)) static int FUNC_0(struct drm_device *VAR_0, void *VAR_1,
         struct drm_file *VAR_2)
{
 drm_i810_private_t *VAR_3 = (drm_i810_private_t *) VAR_0->dev_private;
 u32 *VAR_4 = VAR_3->hw_status_page;
 drm_i810_sarea_t *VAR_5 = (drm_i810_sarea_t *)
     VAR_3->sarea_priv;

 VAR_5->last_dispatch = (int)VAR_4[5];
 return 0;
}
