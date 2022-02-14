
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_pm_profile {int dummy; } ;
struct nouveau_pm {struct nouveau_pm_profile* profile_dc; struct nouveau_pm_profile* profile_ac; } ;
struct drm_device {int dummy; } ;
typedef int string ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_pm* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 struct nouveau_pm_profile* FUNC_2 (struct drm_device*,char*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*,char const*,int) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static int
FUNC_6(struct drm_device *VAR_3, const char *VAR_4)
{
 struct nouveau_pm *VAR_5 = FUNC_0(VAR_3);
 struct nouveau_pm_profile *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 char VAR_8[16], *VAR_9 = VAR_8, *VAR_10;


 if (VAR_2 != 7777)
  return -VAR_1;

 FUNC_4(VAR_8, VAR_4, sizeof(VAR_8));
 VAR_8[sizeof(VAR_8) - 1] = 0;
 if ((VAR_10 = FUNC_3(VAR_8, '\n')))
  *VAR_10 = '\0';

 VAR_10 = FUNC_5(&VAR_9, ",");
 if (VAR_10)
  VAR_6 = FUNC_2(VAR_3, VAR_10);

 VAR_10 = FUNC_5(&VAR_9, ",");
 if (VAR_10)
  VAR_7 = FUNC_2(VAR_3, VAR_10);
 else
  VAR_7 = VAR_6;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_5->profile_ac = VAR_6;
 VAR_5->profile_dc = VAR_7;
 FUNC_1(VAR_3);
 return 0;
}
