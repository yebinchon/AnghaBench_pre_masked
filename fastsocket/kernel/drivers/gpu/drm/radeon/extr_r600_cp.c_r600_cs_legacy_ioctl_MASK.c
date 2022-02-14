
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_radeon_private {unsigned int flags; int cs_mutex; } ;
struct drm_radeon_cs {int cs_id; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* agp_buffer_map; struct drm_radeon_private* dev_private; } ;
struct drm_buf {int offset; } ;
struct TYPE_2__ {int * handle; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_radeon_private*,int *) ;
 int FUNC_4 (struct drm_device*,void*,struct drm_file*,unsigned int,int *,int*) ;
 int FUNC_5 (struct drm_device*,struct drm_buf*,struct drm_file*,int,int) ;
 int FUNC_6 (struct drm_device*,struct drm_file*,struct drm_buf**) ;

int FUNC_7(struct drm_device *VAR_3, void *VAR_4, struct drm_file *VAR_5)
{
 struct drm_radeon_private *VAR_6 = VAR_3->dev_private;
 struct drm_radeon_cs *VAR_7 = VAR_4;
 struct drm_buf *VAR_8;
 unsigned VAR_9;
 int VAR_10, VAR_11 = 0;
 u32 *VAR_12, VAR_13 = 0;

 if (VAR_6 == ((void*)0)) {
  FUNC_0("called with no initialization\n");
  return -VAR_1;
 }
 VAR_9 = VAR_6->flags & VAR_2;
 if (VAR_9 < VAR_0) {
  FUNC_0("cs ioctl valid only for R6XX & R7XX in legacy mode\n");
  return -VAR_1;
 }
 FUNC_1(&VAR_6->cs_mutex);

 VAR_11 = FUNC_6(VAR_3, VAR_5, &VAR_8);
 if (VAR_11) {
  FUNC_0("ib_get failed\n");
  goto out;
 }
 VAR_12 = VAR_3->agp_buffer_map->handle + VAR_8->offset;

 VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_9, VAR_12, &VAR_10);
 if (VAR_11) {
  goto out;
 }

out:
 FUNC_5(VAR_3, VAR_8, VAR_5, VAR_10, VAR_11);

 FUNC_3(VAR_6, &VAR_13);
 VAR_7->cs_id = VAR_13;
 FUNC_2(&VAR_6->cs_mutex);
 return VAR_11;
}
