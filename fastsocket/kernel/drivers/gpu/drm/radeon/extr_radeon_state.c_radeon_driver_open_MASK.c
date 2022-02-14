
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_radeon_driver_file_fields {scalar_t__ radeon_fb_delta; } ;
struct drm_file {struct drm_radeon_driver_file_fields* driver_priv; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {scalar_t__ fb_location; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_radeon_driver_file_fields* FUNC_1 (int,int ) ;

int FUNC_2(struct drm_device *VAR_2, struct drm_file *VAR_3)
{
 drm_radeon_private_t *VAR_4 = VAR_2->dev_private;
 struct drm_radeon_driver_file_fields *VAR_5;

 FUNC_0("\n");
 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);

 if (!VAR_5)
  return -VAR_0;

 VAR_3->driver_priv = VAR_5;

 if (VAR_4)
  VAR_5->radeon_fb_delta = VAR_4->fb_location;
 else
  VAR_5->radeon_fb_delta = 0;
 return 0;
}
