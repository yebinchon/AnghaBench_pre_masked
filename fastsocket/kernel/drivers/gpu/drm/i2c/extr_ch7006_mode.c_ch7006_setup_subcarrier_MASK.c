
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct i2c_client {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct ch7006_tv_norm_info {int subc_freq; } ;
struct ch7006_state {int dummy; } ;
struct ch7006_priv {size_t norm; struct ch7006_mode* mode; struct ch7006_state state; } ;
struct ch7006_mode {int subc_coeff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_client*,char*,int ) ;
 struct ch7006_tv_norm_info* VAR_8 ;
 struct i2c_client* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ch7006_state*,int ,int,int ) ;
 struct ch7006_priv* FUNC_4 (struct drm_encoder*) ;

void FUNC_5(struct drm_encoder *VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_1(VAR_9);
 struct ch7006_priv *VAR_11 = FUNC_4(VAR_9);
 struct ch7006_state *VAR_12 = &VAR_11->state;
 struct ch7006_tv_norm_info *VAR_13 = &VAR_8[VAR_11->norm];
 struct ch7006_mode *VAR_14 = VAR_11->mode;
 uint32_t VAR_15;

 VAR_15 = FUNC_2((VAR_14->subc_coeff >> 8)
          * (VAR_13->subc_freq >> 24));

 FUNC_3(VAR_12, VAR_0, 28, VAR_15);
 FUNC_3(VAR_12, VAR_1, 24, VAR_15);
 FUNC_3(VAR_12, VAR_2, 20, VAR_15);
 FUNC_3(VAR_12, VAR_3, 16, VAR_15);
 FUNC_3(VAR_12, VAR_4, 12, VAR_15);
 FUNC_3(VAR_12, VAR_5, 8, VAR_15);
 FUNC_3(VAR_12, VAR_6, 4, VAR_15);
 FUNC_3(VAR_12, VAR_7, 0, VAR_15);

 FUNC_0(VAR_10, "subcarrier inc: %u\n", VAR_15);
}
