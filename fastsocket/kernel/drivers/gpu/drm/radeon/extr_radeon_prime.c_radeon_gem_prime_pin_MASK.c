
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 struct radeon_bo* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct radeon_bo*,int ,int *) ;
 int FUNC_2 (struct radeon_bo*,int) ;
 int FUNC_3 (struct radeon_bo*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct drm_gem_object *VAR_1)
{
 struct radeon_bo *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 0;

 VAR_3 = FUNC_2(VAR_2, 0);
 if (FUNC_4(VAR_3 != 0))
  return VAR_3;


 VAR_3 = FUNC_1(VAR_2, VAR_0, ((void*)0));
 if (VAR_3) {
  FUNC_3(VAR_2);
  return VAR_3;
 }
 FUNC_3(VAR_2);

 return 0;
}
