
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ engine; int sync_handle; } ;
typedef TYPE_1__ drm_via_blitsync_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct drm_device*,int ,scalar_t__) ;

int
FUNC_1(struct drm_device *VAR_4, void *VAR_5, struct drm_file *VAR_6)
{
 drm_via_blitsync_t *VAR_7 = VAR_5;
 int VAR_8;

 if (VAR_7->engine >= VAR_3)
  return -VAR_2;

 VAR_8 = FUNC_0(VAR_4, VAR_7->sync_handle, VAR_7->engine);

 if (-VAR_1 == VAR_8)
  VAR_8 = -VAR_0;

 return VAR_8;
}
