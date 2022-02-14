
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (struct drm_device const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_device const*) ;
 scalar_t__ VAR_2 ;

int FUNC_3(const struct drm_device *VAR_3)
{

 if (VAR_2 >= 0)
  return VAR_2;


 if (FUNC_1(VAR_3)->gen == 5)
  return 0;

 if (FUNC_2(VAR_3)) {
  FUNC_0("Haswell: only RC6 available\n");
  return VAR_0;
 }


 if (FUNC_1(VAR_3)->gen == 6) {
  FUNC_0("Sandybridge: deep RC6 disabled\n");
  return VAR_0;
 }

 FUNC_0("RC6 and deep RC6 enabled\n");
 return (VAR_0 | VAR_1);
}
