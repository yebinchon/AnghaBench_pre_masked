
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ FUNC_0 (struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 char* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,struct edid*) ;
 char* VAR_0 ;
 scalar_t__ FUNC_4 (struct drm_connector*,char*,char*) ;
 int FUNC_5 (struct edid*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

int FUNC_9(struct drm_connector *VAR_1)
{
 char *VAR_2 = FUNC_2(VAR_1);
 char *VAR_3 = VAR_0, *VAR_4, *VAR_5;
 int VAR_6;
 struct edid *VAR_7;

 if (*VAR_3 == '\0')
  return 0;

 VAR_5 = FUNC_6(VAR_3, ':');
 if (VAR_5 != ((void*)0)) {
  if (FUNC_8(VAR_2, VAR_3, VAR_5 - VAR_3))
   return 0;
  VAR_3 = VAR_5 + 1;
  if (*VAR_3 == '\0')
   return 0;
 }

 VAR_4 = VAR_3 + FUNC_7(VAR_3) - 1;
 if (*VAR_4 == '\n')
  *VAR_4 = '\0';

 VAR_7 = (struct edid *) FUNC_4(VAR_1, VAR_3, VAR_2);
 if (FUNC_0(VAR_7))
  return 0;

 FUNC_3(VAR_1, VAR_7);
 VAR_6 = FUNC_1(VAR_1, VAR_7);
 FUNC_5(VAR_7);

 return VAR_6;
}
