
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_8__ {int size; int filp; } ;
struct drm_i915_gem_object {TYPE_4__* phys_obj; TYPE_2__ base; } ;
struct drm_device {TYPE_5__* dev_private; } ;
struct address_space {int dummy; } ;
struct TYPE_7__ {TYPE_4__** phys_objs; } ;
struct TYPE_11__ {TYPE_1__ mm; } ;
typedef TYPE_5__ drm_i915_private_t ;
struct TYPE_12__ {struct address_space* i_mapping; } ;
struct TYPE_10__ {int id; TYPE_3__* handle; struct drm_i915_gem_object* cur_obj; } ;
struct TYPE_9__ {char* vaddr; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct page*) ;
 TYPE_6__* FUNC_3 (int ) ;
 int FUNC_4 (struct drm_device*,struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_device*,int,int,int) ;
 char* FUNC_6 (struct page*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (struct page*) ;
 struct page* FUNC_11 (struct address_space*,int) ;

int
FUNC_12(struct drm_device *VAR_4,
       struct drm_i915_gem_object *VAR_5,
       int VAR_6,
       int VAR_7)
{
 struct address_space *VAR_8 = FUNC_3(VAR_5->base.filp)->i_mapping;
 drm_i915_private_t *VAR_9 = VAR_4->dev_private;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 if (VAR_6 > VAR_1)
  return -VAR_0;

 if (VAR_5->phys_obj) {
  if (VAR_5->phys_obj->id == VAR_6)
   return 0;
  FUNC_4(VAR_4, VAR_5);
 }


 if (!VAR_9->mm.phys_objs[VAR_6 - 1]) {
  VAR_10 = FUNC_5(VAR_4, VAR_6,
      VAR_5->base.size, VAR_7);
  if (VAR_10) {
   FUNC_0("failed to init phys object %d size: %zu\n",
      VAR_6, VAR_5->base.size);
   return VAR_10;
  }
 }


 VAR_5->phys_obj = VAR_9->mm.phys_objs[VAR_6 - 1];
 VAR_5->phys_obj->cur_obj = VAR_5;

 VAR_11 = VAR_5->base.size / VAR_3;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  struct page *VAR_13;
  char *VAR_14, *VAR_15;

  VAR_13 = FUNC_11(VAR_8, VAR_12);
  if (FUNC_1(VAR_13))
   return FUNC_2(VAR_13);

  VAR_15 = FUNC_6(VAR_13, VAR_2);
  VAR_14 = VAR_5->phys_obj->handle->vaddr + (VAR_12 * VAR_3);
  FUNC_9(VAR_14, VAR_15, VAR_3);
  FUNC_7(VAR_15, VAR_2);

  FUNC_8(VAR_13);
  FUNC_10(VAR_13);
 }

 return 0;
}
