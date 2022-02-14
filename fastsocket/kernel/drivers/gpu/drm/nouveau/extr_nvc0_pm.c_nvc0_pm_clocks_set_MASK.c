
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ coef; } ;
struct nvc0_pm_state {TYPE_2__* eng; TYPE_1__ mem; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int freq; } ;


 int FUNC_0 (struct nvc0_pm_state*) ;
 int FUNC_1 (struct drm_device*,int,TYPE_2__*) ;
 int FUNC_2 (struct drm_device*,struct nvc0_pm_state*) ;

int
FUNC_3(struct drm_device *VAR_0, void *VAR_1)
{
 struct nvc0_pm_state *VAR_2 = VAR_1;
 int VAR_3;

 if (VAR_2->mem.coef)
  FUNC_2(VAR_0, VAR_2);

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  if (!VAR_2->eng[VAR_3].freq)
   continue;
  FUNC_1(VAR_0, VAR_3, &VAR_2->eng[VAR_3]);
 }

 FUNC_0(VAR_2);
 return 0;
}
