
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct drm_encoder_slave {int * slave_funcs; struct ch7006_priv* slave_priv; } ;
struct drm_device {int dummy; } ;
struct ch7006_priv {int norm; int scale; int contrast; int brightness; int flicker; int hmargin; int vmargin; int last_dpms; int chip_version; int subconnector; int select_subconnector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_client*,char*) ;
 int VAR_7 ;
 int FUNC_1 (struct i2c_client*,char*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 struct ch7006_priv* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_11,
          struct drm_device *VAR_12,
          struct drm_encoder_slave *VAR_13)
{
 struct ch7006_priv *VAR_14;
 int VAR_15;

 FUNC_0(VAR_11, "\n");

 VAR_14 = FUNC_3(sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_3;

 VAR_13->slave_priv = VAR_14;
 VAR_13->slave_funcs = &VAR_7;

 VAR_14->norm = VAR_6;
 VAR_14->select_subconnector = VAR_1;
 VAR_14->subconnector = VAR_2;
 VAR_14->scale = 1;
 VAR_14->contrast = 50;
 VAR_14->brightness = 50;
 VAR_14->flicker = 50;
 VAR_14->hmargin = 50;
 VAR_14->vmargin = 50;
 VAR_14->last_dpms = -1;
 VAR_14->chip_version = FUNC_2(VAR_11, VAR_0);

 if (VAR_9) {
  for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
   if (!FUNC_4(VAR_10[VAR_15], VAR_9)) {
    VAR_14->norm = VAR_15;
    break;
   }
  }

  if (VAR_15 == VAR_5)
   FUNC_1(VAR_11, "Invalid TV norm setting \"%s\".\n",
       VAR_9);
 }

 if (VAR_8 >= 0 && VAR_8 <= 2)
  VAR_14->scale = VAR_8;
 else
  FUNC_1(VAR_11, "Invalid scale setting \"%d\".\n",
      VAR_8);

 return 0;
}
