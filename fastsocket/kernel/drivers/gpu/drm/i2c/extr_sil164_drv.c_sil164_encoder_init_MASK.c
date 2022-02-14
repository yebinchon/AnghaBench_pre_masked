
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sil164_priv {int duallink_slave; } ;
struct i2c_client {int dummy; } ;
struct drm_encoder_slave {int * slave_funcs; struct sil164_priv* slave_priv; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sil164_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct i2c_client *VAR_3,
      struct drm_device *VAR_4,
      struct drm_encoder_slave *VAR_5)
{
 struct sil164_priv *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5->slave_priv = VAR_6;
 VAR_5->slave_funcs = &VAR_2;

 VAR_6->duallink_slave = FUNC_1(VAR_3);

 return 0;
}
