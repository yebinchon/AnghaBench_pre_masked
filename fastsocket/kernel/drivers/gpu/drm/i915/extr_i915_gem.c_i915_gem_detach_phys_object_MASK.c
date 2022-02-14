
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_6__ {int size; int filp; } ;
struct drm_i915_gem_object {TYPE_3__* phys_obj; TYPE_2__ base; } ;
struct drm_device {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_8__ {struct address_space* i_mapping; } ;
struct TYPE_7__ {int * cur_obj; TYPE_1__* handle; } ;
struct TYPE_5__ {char* vaddr; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page**,int) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (struct drm_device*) ;
 char* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 struct page* FUNC_10 (struct address_space*,int) ;

void FUNC_11(struct drm_device *VAR_2,
     struct drm_i915_gem_object *VAR_3)
{
 struct address_space *VAR_4 = FUNC_2(VAR_3->base.filp)->i_mapping;
 char *VAR_5;
 int VAR_6;
 int VAR_7;

 if (!VAR_3->phys_obj)
  return;
 VAR_5 = VAR_3->phys_obj->handle->vaddr;

 VAR_7 = VAR_3->base.size / VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct page *VAR_8 = FUNC_10(VAR_4, VAR_6);
  if (!FUNC_0(VAR_8)) {
   char *VAR_9 = FUNC_4(VAR_8, VAR_0);
   FUNC_7(VAR_9, VAR_5 + VAR_6*VAR_1, VAR_1);
   FUNC_5(VAR_9, VAR_0);

   FUNC_1(&VAR_8, 1);

   FUNC_9(VAR_8);
   FUNC_6(VAR_8);
   FUNC_8(VAR_8);
  }
 }
 FUNC_3(VAR_2);

 VAR_3->phys_obj->cur_obj = ((void*)0);
 VAR_3->phys_obj = ((void*)0);
}
