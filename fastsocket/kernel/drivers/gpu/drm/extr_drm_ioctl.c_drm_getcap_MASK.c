
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_get_cap {int value; int capability; } ;
struct drm_file {int dummy; } ;
struct TYPE_3__ {int preferred_depth; int prefer_shadow; } ;
struct drm_device {TYPE_2__* driver; TYPE_1__ mode_config; } ;
struct TYPE_4__ {int prime_handle_to_fd; int prime_fd_to_handle; int dumb_create; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct drm_device *VAR_4, void *VAR_5, struct drm_file *VAR_6)
{
 struct drm_get_cap *VAR_7 = VAR_5;

 VAR_7->value = 0;
 switch (VAR_7->capability) {
 case 133:
  if (VAR_4->driver->dumb_create)
   VAR_7->value = 1;
  break;
 case 128:
  VAR_7->value = 1;
  break;
 case 132:
  VAR_7->value = VAR_4->mode_config.preferred_depth;
  break;
 case 131:
  VAR_7->value = VAR_4->mode_config.prefer_shadow;
  break;
 case 130:
  VAR_7->value |= VAR_4->driver->prime_fd_to_handle ? VAR_1 : 0;
  VAR_7->value |= VAR_4->driver->prime_handle_to_fd ? VAR_0 : 0;
  break;
 case 129:
  VAR_7->value = VAR_3;
  break;
 default:
  return -VAR_2;
 }
 return 0;
}
