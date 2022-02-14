
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_encoder {int dummy; } ;
struct nouveau_drm {int dummy; } ;
struct nouveau_connector {scalar_t__ type; } ;
struct drm_connector {scalar_t__ force; int status; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct nouveau_drm*,char*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct drm_connector*) ;
 struct nouveau_encoder* FUNC_2 (struct drm_connector*,int) ;
 struct nouveau_connector* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,struct nouveau_encoder*) ;
 struct nouveau_drm* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct drm_connector *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_5(VAR_6->dev);
 struct nouveau_connector *VAR_8 = FUNC_3(VAR_6);
 struct nouveau_encoder *VAR_9;
 int VAR_10;

 if (VAR_8->type == VAR_0) {
  if (VAR_6->force == VAR_4)
   VAR_10 = VAR_3;
  else
   VAR_10 = VAR_1;
 } else
  VAR_10 = VAR_2;

 VAR_9 = FUNC_2(VAR_6, VAR_10);
 if (!VAR_9) {
  FUNC_0(VAR_7, "can't find encoder to force %s on!\n",
    FUNC_1(VAR_6));
  VAR_6->status = VAR_5;
  return;
 }

 FUNC_4(VAR_6, VAR_9);
}
