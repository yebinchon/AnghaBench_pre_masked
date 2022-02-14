
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_bo*,int ) ;
 struct nouveau_bo* FUNC_1 (struct drm_gem_object*) ;

int FUNC_2(struct drm_gem_object *VAR_2)
{
 struct nouveau_bo *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = 0;


 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4)
  return -VAR_0;

 return 0;
}
