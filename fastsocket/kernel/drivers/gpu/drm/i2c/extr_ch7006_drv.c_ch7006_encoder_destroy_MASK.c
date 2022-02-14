
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dev; } ;
struct ch7006_priv {int scale_property; } ;
struct TYPE_2__ {int * slave_priv; } ;


 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ch7006_priv*) ;
 struct ch7006_priv* FUNC_3 (struct drm_encoder*) ;
 TYPE_1__* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_0)
{
 struct ch7006_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_0->dev, VAR_1->scale_property);

 FUNC_2(VAR_1);
 FUNC_4(VAR_0)->slave_priv = ((void*)0);

 FUNC_0(VAR_0);
}
