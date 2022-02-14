
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int * filp; } ;
struct drm_i915_gem_object {int madv; TYPE_1__ base; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct inode* FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct inode*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_gem_object *VAR_1)
{
 struct inode *VAR_2;

 FUNC_1(VAR_1);

 if (VAR_1->base.filp == ((void*)0))
  return;






 VAR_2 = FUNC_0(VAR_1->base.filp);
 FUNC_2(VAR_2, 0, (loff_t)-1);

 VAR_1->madv = VAR_0;
}
