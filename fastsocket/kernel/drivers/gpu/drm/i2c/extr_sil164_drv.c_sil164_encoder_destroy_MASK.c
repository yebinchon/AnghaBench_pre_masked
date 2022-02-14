
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sil164_priv {scalar_t__ duallink_slave; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sil164_priv*) ;
 struct sil164_priv* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_4(struct drm_encoder *VAR_0)
{
 struct sil164_priv *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->duallink_slave)
  FUNC_1(VAR_1->duallink_slave);

 FUNC_2(VAR_1);
 FUNC_0(VAR_0);
}
