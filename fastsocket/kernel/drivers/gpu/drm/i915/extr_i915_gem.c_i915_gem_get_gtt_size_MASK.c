
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct drm_device*) ;

uint32_t
FUNC_1(struct drm_device *VAR_1, uint32_t VAR_2, int VAR_3)
{
 uint32_t VAR_4;

 if (FUNC_0(VAR_1)->gen >= 4 ||
     VAR_3 == VAR_0)
  return VAR_2;


 if (FUNC_0(VAR_1)->gen == 3)
  VAR_4 = 1024*1024;
 else
  VAR_4 = 512*1024;

 while (VAR_4 < VAR_2)
  VAR_4 <<= 1;

 return VAR_4;
}
