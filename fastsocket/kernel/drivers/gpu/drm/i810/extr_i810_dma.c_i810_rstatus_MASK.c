
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {scalar_t__ hw_status_page; } ;
typedef TYPE_1__ drm_i810_private_t ;



__attribute__((used)) static int FUNC_0(struct drm_device *VAR_0, void *VAR_1,
   struct drm_file *VAR_2)
{
 drm_i810_private_t *VAR_3 = (drm_i810_private_t *) VAR_0->dev_private;

 return (int)(((u32 *) (VAR_3->hw_status_page))[4]);
}
