
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_mm {int offset_hash; int offset_manager; } ;
struct drm_device {struct drm_gem_mm* mm_private; int object_name_idr; int object_name_lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_gem_mm*) ;
 struct drm_gem_mm* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct drm_device *VAR_4)
{
 struct drm_gem_mm *VAR_5;

 FUNC_7(&VAR_4->object_name_lock);
 FUNC_4(&VAR_4->object_name_idr);

 VAR_5 = FUNC_6(sizeof(struct drm_gem_mm), VAR_3);
 if (!VAR_5) {
  FUNC_0("out of memory\n");
  return -VAR_2;
 }

 VAR_4->mm_private = VAR_5;

 if (FUNC_1(&VAR_5->offset_hash, 12)) {
  FUNC_5(VAR_5);
  return -VAR_2;
 }

 if (FUNC_3(&VAR_5->offset_manager, VAR_1,
   VAR_0)) {
  FUNC_2(&VAR_5->offset_hash);
  FUNC_5(VAR_5);
  return -VAR_2;
 }

 return 0;
}
