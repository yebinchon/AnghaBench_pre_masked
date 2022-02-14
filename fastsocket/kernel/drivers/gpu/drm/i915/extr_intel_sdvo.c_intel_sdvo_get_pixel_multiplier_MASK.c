
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int clock; } ;



__attribute__((used)) static int FUNC_0(struct drm_display_mode *VAR_0)
{
 if (VAR_0->clock >= 100000)
  return 1;
 else if (VAR_0->clock >= 50000)
  return 2;
 else
  return 4;
}
