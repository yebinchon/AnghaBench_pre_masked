
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw9910_priv {TYPE_1__* info; } ;
struct soc_camera_link {int dummy; } ;
struct soc_camera_device {int dummy; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {unsigned long buswidth; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (struct soc_camera_link*,unsigned long) ;
 struct i2c_client* FUNC_1 (int ) ;
 int FUNC_2 (struct soc_camera_device*) ;
 struct soc_camera_link* FUNC_3 (struct soc_camera_device*) ;
 struct tw9910_priv* FUNC_4 (struct i2c_client*) ;

__attribute__((used)) static unsigned long FUNC_5(struct soc_camera_device *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_1(FUNC_2(VAR_7));
 struct tw9910_priv *VAR_9 = FUNC_4(VAR_8);
 struct soc_camera_link *VAR_10 = FUNC_3(VAR_7);
 unsigned long VAR_11 = VAR_4 | VAR_3 |
  VAR_5 | VAR_1 |
  VAR_6 | VAR_2 |
  VAR_0 | VAR_9->info->buswidth;

 return FUNC_0(VAR_10, VAR_11);
}
