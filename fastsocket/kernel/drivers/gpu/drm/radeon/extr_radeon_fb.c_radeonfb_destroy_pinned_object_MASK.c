
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_1 (struct drm_gem_object*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct radeon_bo*) ;
 int FUNC_4 (struct radeon_bo*,int) ;
 int FUNC_5 (struct radeon_bo*) ;
 int FUNC_6 (struct radeon_bo*) ;

__attribute__((used)) static void FUNC_7(struct drm_gem_object *VAR_0)
{
 struct radeon_bo *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1, 0);
 if (FUNC_2(VAR_2 == 0)) {
  FUNC_3(VAR_1);
  FUNC_5(VAR_1);
  FUNC_6(VAR_1);
 }
 FUNC_0(VAR_0);
}
