
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct nouveau_timer {int (* read ) (struct nouveau_timer*) ;} ;
struct nouveau_pm_profile {TYPE_1__* func; } ;
struct nouveau_pm_level {int id; } ;
struct nouveau_pm {struct nouveau_pm_level* cur; struct nouveau_pm_profile* profile; struct nouveau_pm_profile* profile_dc; struct nouveau_pm_profile* profile_ac; } ;
struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct nouveau_pm_level* (* select ) (struct nouveau_pm_profile*) ;int (* init ) (struct nouveau_pm_profile*) ;int (* fini ) (struct nouveau_pm_profile*) ;} ;


 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 struct nouveau_pm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,struct nouveau_pm_level*) ;
 struct nouveau_timer* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct nouveau_pm_profile*) ;
 int FUNC_7 (struct nouveau_pm_profile*) ;
 struct nouveau_pm_level* FUNC_8 (struct nouveau_pm_profile*) ;
 int FUNC_9 (struct nouveau_timer*) ;
 int FUNC_10 (struct nouveau_timer*) ;

void
FUNC_11(struct drm_device *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_1(VAR_0);
 struct nouveau_timer *VAR_2 = FUNC_4(VAR_1->device);
 struct nouveau_pm *VAR_3 = FUNC_2(VAR_0);
 struct nouveau_pm_profile *VAR_4 = ((void*)0);
 struct nouveau_pm_level *VAR_5 = ((void*)0);
 int VAR_6;


 if (FUNC_5())
  VAR_4 = VAR_3->profile_ac;
 else
  VAR_4 = VAR_3->profile_dc;

 if (VAR_4 != VAR_3->profile) {
  VAR_3->profile->func->fini(VAR_3->profile);
  VAR_3->profile = VAR_4;
  VAR_3->profile->func->init(VAR_3->profile);
 }


 VAR_5 = VAR_4->func->select(VAR_4);


 if (VAR_5 != VAR_3->cur) {
  u64 VAR_7 = VAR_2->read(VAR_2);

  FUNC_0(VAR_1, "setting performance level: %d", VAR_5->id);
  VAR_6 = FUNC_3(VAR_0, VAR_5);
  if (VAR_6)
   FUNC_0(VAR_1, "> reclocking failed: %d\n\n", VAR_6);

  FUNC_0(VAR_1, "> reclocking took %lluns\n\n",
        VAR_2->read(VAR_2) - VAR_7);
 }
}
