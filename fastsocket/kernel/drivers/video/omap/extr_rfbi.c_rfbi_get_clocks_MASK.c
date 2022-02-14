
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* dss1_fck; void* dss_ick; TYPE_1__* fbdev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,char*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_5(void)
{
 VAR_0.dss_ick = FUNC_2(VAR_0.fbdev->dev, "ick");
 if (FUNC_0(VAR_0.dss_ick)) {
  FUNC_4(VAR_0.fbdev->dev, "can't get ick\n");
  return FUNC_1(VAR_0.dss_ick);
 }

 VAR_0.dss1_fck = FUNC_2(VAR_0.fbdev->dev, "dss1_fck");
 if (FUNC_0(VAR_0.dss1_fck)) {
  FUNC_4(VAR_0.fbdev->dev, "can't get dss1_fck\n");
  FUNC_3(VAR_0.dss_ick);
  return FUNC_1(VAR_0.dss1_fck);
 }

 return 0;
}
