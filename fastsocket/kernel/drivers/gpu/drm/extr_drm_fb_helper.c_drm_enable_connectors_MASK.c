
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_fb_helper {int connector_count; TYPE_2__** connector_info; } ;
struct TYPE_3__ {int id; } ;
struct drm_connector {TYPE_1__ base; } ;
struct TYPE_4__ {struct drm_connector* connector; } ;


 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (struct drm_connector*,int) ;

__attribute__((used)) static void FUNC_2(struct drm_fb_helper *VAR_0,
      bool *VAR_1)
{
 bool VAR_2 = 0;
 struct drm_connector *VAR_3;
 int VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0->connector_count; VAR_4++) {
  VAR_3 = VAR_0->connector_info[VAR_4]->connector;
  VAR_1[VAR_4] = FUNC_1(VAR_3, 1);
  FUNC_0("connector %d enabled? %s\n", VAR_3->base.id,
     VAR_1[VAR_4] ? "yes" : "no");
  VAR_2 |= VAR_1[VAR_4];
 }

 if (VAR_2)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0->connector_count; VAR_4++) {
  VAR_3 = VAR_0->connector_info[VAR_4]->connector;
  VAR_1[VAR_4] = FUNC_1(VAR_3, 0);
 }
}
