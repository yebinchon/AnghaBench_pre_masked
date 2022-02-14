
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_local_map {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int FUNC_0 (struct drm_device*,struct drm_local_map*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct drm_device *VAR_0, struct drm_local_map *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->struct_mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->struct_mutex);

 return VAR_2;
}
