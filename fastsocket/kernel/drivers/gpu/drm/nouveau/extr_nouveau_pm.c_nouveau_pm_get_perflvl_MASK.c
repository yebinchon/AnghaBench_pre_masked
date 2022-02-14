
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_pm_level {int dummy; } ;
struct nouveau_pm {TYPE_2__* profile_dc; TYPE_1__* profile_ac; } ;
struct drm_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 struct nouveau_pm* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*,struct nouveau_pm_level*) ;
 int FUNC_2 (struct nouveau_pm_level*,char*,int) ;
 struct drm_device* FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_3(FUNC_6(VAR_1));
 struct nouveau_pm *VAR_5 = FUNC_0(VAR_4);
 struct nouveau_pm_level VAR_6;
 int VAR_7 = VAR_0, VAR_8;
 char *VAR_9 = VAR_3;

 FUNC_4(VAR_9, VAR_7, "profile: %s, %s\nc:",
   VAR_5->profile_ac->name, VAR_5->profile_dc->name);
 VAR_9 += FUNC_5(VAR_3);
 VAR_7 -= FUNC_5(VAR_3);

 VAR_8 = FUNC_1(VAR_4, &VAR_6);
 if (VAR_8 == 0)
  FUNC_2(&VAR_6, VAR_9, VAR_7);
 return FUNC_5(VAR_3);
}
