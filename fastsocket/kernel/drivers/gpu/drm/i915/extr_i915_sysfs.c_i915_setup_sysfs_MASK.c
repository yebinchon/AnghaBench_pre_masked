
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_1__* primary; } ;
struct TYPE_6__ {int gen; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_4__ {TYPE_2__ kdev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 TYPE_3__* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;

void FUNC_5(struct drm_device *VAR_3)
{
 int VAR_4;
 if (FUNC_1(VAR_3)) {
  VAR_4 = FUNC_3(&VAR_3->primary->kdev, &VAR_0);
  if (VAR_4)
   FUNC_0("l3 parity sysfs setup failed\n");
 }

 if (FUNC_2(VAR_3)->gen >= 6) {
  VAR_4 = FUNC_4(&VAR_3->primary->kdev.kobj, &VAR_1);
  if (VAR_4)
   FUNC_0("gen6 sysfs setup failed\n");
 }
}
