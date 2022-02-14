
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
struct nv50_disp {scalar_t__ sync; TYPE_1__ mast; int core; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int * priv; } ;


 int FUNC_0 (struct nv50_disp*) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_2__* FUNC_4 (struct drm_device*) ;
 struct nv50_disp* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int ,int *) ;

void
FUNC_7(struct drm_device *VAR_0)
{
 struct nv50_disp *VAR_1 = FUNC_5(VAR_0);

 FUNC_6(VAR_1->core, &VAR_1->mast.base);

 FUNC_2(VAR_1->sync);
 if (VAR_1->sync)
  FUNC_3(VAR_1->sync);
 FUNC_1(((void*)0), &VAR_1->sync);

 FUNC_4(VAR_0)->priv = ((void*)0);
 FUNC_0(VAR_1);
}
