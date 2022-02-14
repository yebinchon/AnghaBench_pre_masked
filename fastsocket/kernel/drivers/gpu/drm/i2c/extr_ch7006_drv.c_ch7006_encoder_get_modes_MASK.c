
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dev; } ;
struct drm_connector {int dummy; } ;
struct ch7006_priv {int scale; int norm; } ;
struct TYPE_2__ {scalar_t__ clock; } ;
struct ch7006_mode {int valid_scales; int valid_norms; TYPE_1__ mode; } ;


 struct ch7006_mode* VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (struct drm_connector*,int ) ;
 struct ch7006_priv* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_3(struct drm_encoder *VAR_1,
        struct drm_connector *VAR_2)
{
 struct ch7006_priv *VAR_3 = FUNC_2(VAR_1);
 struct ch7006_mode *VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_0; VAR_4->mode.clock; VAR_4++) {
  if (~VAR_4->valid_scales & 1<<VAR_3->scale ||
      ~VAR_4->valid_norms & 1<<VAR_3->norm)
   continue;

  FUNC_1(VAR_2,
    FUNC_0(VAR_1->dev, &VAR_4->mode));

  VAR_5++;
 }

 return VAR_5;
}
