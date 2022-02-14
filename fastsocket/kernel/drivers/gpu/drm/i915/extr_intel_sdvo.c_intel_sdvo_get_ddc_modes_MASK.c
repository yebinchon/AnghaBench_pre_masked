
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 scalar_t__ FUNC_2 (int ,struct edid*) ;
 struct edid* FUNC_3 (struct drm_connector*) ;
 struct edid* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct edid*) ;
 int FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_7(struct drm_connector *VAR_0)
{
 struct edid *VAR_1;


 VAR_1 = FUNC_4(VAR_0);







 if (VAR_1 == ((void*)0))
  VAR_1 = FUNC_3(VAR_0);

 if (VAR_1 != ((void*)0)) {
  if (FUNC_2(FUNC_6(VAR_0),
            VAR_1)) {
   FUNC_1(VAR_0, VAR_1);
   FUNC_0(VAR_0, VAR_1);
  }

  FUNC_5(VAR_1);
 }
}
