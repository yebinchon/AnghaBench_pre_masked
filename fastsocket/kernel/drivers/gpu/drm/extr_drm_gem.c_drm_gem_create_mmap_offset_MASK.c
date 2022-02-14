
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int key; } ;
struct drm_map_list {struct drm_local_map* map; TYPE_1__* file_offset_node; TYPE_5__ hash; } ;
struct drm_local_map {int size; struct drm_gem_object* handle; int type; } ;
struct drm_gem_object {int size; int name; struct drm_map_list map_list; struct drm_device* dev; } ;
struct drm_gem_mm {int offset_hash; int offset_manager; } ;
struct drm_device {struct drm_gem_mm* mm_private; } ;
struct TYPE_6__ {int start; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,TYPE_5__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,int,int ,int) ;
 int FUNC_5 (struct drm_local_map*) ;
 struct drm_local_map* FUNC_6 (int,int ) ;

int
FUNC_7(struct drm_gem_object *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct drm_gem_mm *VAR_7 = VAR_6->mm_private;
 struct drm_map_list *VAR_8;
 struct drm_local_map *VAR_9;
 int VAR_10;


 VAR_8 = &VAR_5->map_list;
 VAR_8->map = FUNC_6(sizeof(struct drm_map_list), VAR_2);
 if (!VAR_8->map)
  return -VAR_0;

 VAR_9 = VAR_8->map;
 VAR_9->type = VAR_4;
 VAR_9->size = VAR_5->size;
 VAR_9->handle = VAR_5;


 VAR_8->file_offset_node = FUNC_4(&VAR_7->offset_manager,
   VAR_5->size / VAR_3, 0, 0);

 if (!VAR_8->file_offset_node) {
  FUNC_0("failed to allocate offset for bo %d\n", VAR_5->name);
  VAR_10 = -VAR_1;
  goto out_free_list;
 }

 VAR_8->file_offset_node = FUNC_2(VAR_8->file_offset_node,
   VAR_5->size / VAR_3, 0);
 if (!VAR_8->file_offset_node) {
  VAR_10 = -VAR_0;
  goto out_free_list;
 }

 VAR_8->hash.key = VAR_8->file_offset_node->start;
 VAR_10 = FUNC_1(&VAR_7->offset_hash, &VAR_8->hash);
 if (VAR_10) {
  FUNC_0("failed to add to map hash\n");
  goto out_free_mm;
 }

 return 0;

out_free_mm:
 FUNC_3(VAR_8->file_offset_node);
out_free_list:
 FUNC_5(VAR_8->map);
 VAR_8->map = ((void*)0);

 return VAR_10;
}
