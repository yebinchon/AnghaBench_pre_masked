
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct i2c_client {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct ch7006_tv_norm_info {int black_level; } ;
struct TYPE_2__ {int * regs; } ;
struct ch7006_priv {size_t norm; int brightness; TYPE_1__ state; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct i2c_client*,char*,int) ;
 struct ch7006_tv_norm_info* VAR_4 ;
 struct i2c_client* FUNC_2 (struct drm_encoder*) ;
 int VAR_5 ;
 int FUNC_3 (int,int,int,int ) ;
 int FUNC_4 (int) ;
 struct ch7006_priv* FUNC_5 (struct drm_encoder*) ;

void FUNC_6(struct drm_encoder *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_2(VAR_6);
 struct ch7006_priv *VAR_8 = FUNC_5(VAR_6);
 uint8_t *VAR_9 = VAR_8->state.regs;
 struct ch7006_tv_norm_info *VAR_10 = &VAR_4[VAR_8->norm];
 int VAR_11;
 int VAR_12;



 if (VAR_10->black_level < 339*VAR_5/1000) {
  VAR_11 = 76;

  VAR_9[VAR_2] |= VAR_3;
 } else {
  VAR_11 = 71;

  VAR_9[VAR_2] &= ~VAR_3;
 }

 VAR_12 = FUNC_4(VAR_10->black_level*26625)/VAR_11;


 VAR_12 = FUNC_3(90, VAR_12, 208, VAR_8->brightness);

 VAR_9[VAR_0] = FUNC_0(VAR_1, VAR_12);

 FUNC_1(VAR_7, "black level: %d\n", VAR_12);
}
