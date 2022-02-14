
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sil164_priv {int saved_slave_state; scalar_t__ duallink_slave; int saved_state; } ;
struct drm_encoder {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (scalar_t__,int ) ;
 struct sil164_priv* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_3(struct drm_encoder *VAR_0)
{
 struct sil164_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(FUNC_0(VAR_0),
        VAR_1->saved_state);

 if (VAR_1->duallink_slave)
  FUNC_1(VAR_1->duallink_slave,
         VAR_1->saved_slave_state);
}
