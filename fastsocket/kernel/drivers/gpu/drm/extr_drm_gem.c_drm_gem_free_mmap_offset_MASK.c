
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_map_list {int * map; int file_offset_node; int hash; } ;
struct drm_gem_object {struct drm_map_list map_list; struct drm_device* dev; } ;
struct drm_gem_mm {int offset_hash; } ;
struct drm_device {struct drm_gem_mm* mm_private; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct drm_gem_object *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_gem_mm *VAR_2 = VAR_1->mm_private;
 struct drm_map_list *VAR_3 = &VAR_0->map_list;

 FUNC_0(&VAR_2->offset_hash, &VAR_3->hash);
 FUNC_1(VAR_3->file_offset_node);
 FUNC_2(VAR_3->map);
 VAR_3->map = ((void*)0);
}
