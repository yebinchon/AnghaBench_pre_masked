
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct drm_i915_gem_mmap {scalar_t__ addr_ptr; int offset; int size; int handle; } ;
struct drm_gem_object {int filp; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 unsigned long FUNC_1 (int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (int *) ;
 struct drm_gem_object* FUNC_3 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct drm_device *VAR_6, void *VAR_7,
      struct drm_file *VAR_8)
{
 struct drm_i915_gem_mmap *VAR_9 = VAR_7;
 struct drm_gem_object *VAR_10;
 unsigned long VAR_11;

 VAR_10 = FUNC_3(VAR_6, VAR_8, VAR_9->handle);
 if (VAR_10 == ((void*)0))
  return -VAR_1;




 if (!VAR_10->filp) {
  FUNC_4(VAR_10);
  return -VAR_0;
 }

 FUNC_2(&VAR_5->mm->mmap_sem);
 VAR_11 = FUNC_1(VAR_10->filp, 0, VAR_9->size,
         VAR_3 | VAR_4, VAR_2,
         VAR_9->offset);
 FUNC_5(&VAR_5->mm->mmap_sem);
 FUNC_4(VAR_10);
 if (FUNC_0((void *)VAR_11))
  return VAR_11;

 VAR_9->addr_ptr = (uint64_t) VAR_11;

 return 0;
}
