
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sil164_encoder_params {int dummy; } ;
struct sil164_priv {struct sil164_encoder_params config; } ;
struct drm_encoder {int dummy; } ;


 struct sil164_priv* FUNC_0 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_1(struct drm_encoder *VAR_0, void *VAR_1)
{
 struct sil164_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_2->config = *(struct sil164_encoder_params *)VAR_1;
}
