
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_camera_link {int dummy; } ;
struct soc_camera_device {int dummy; } ;
struct ov772x_priv {TYPE_1__* info; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 struct ov772x_priv* FUNC_0 (struct i2c_client*) ;
 unsigned long FUNC_1 (struct soc_camera_link*,unsigned long) ;
 struct i2c_client* FUNC_2 (int ) ;
 int FUNC_3 (struct soc_camera_device*) ;
 struct soc_camera_link* FUNC_4 (struct soc_camera_device*) ;

__attribute__((used)) static unsigned long FUNC_5(struct soc_camera_device *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_2(FUNC_3(VAR_8));
 struct ov772x_priv *VAR_10 = FUNC_0(VAR_9);
 struct soc_camera_link *VAR_11 = FUNC_4(VAR_8);
 unsigned long VAR_12 = VAR_6 | VAR_5 |
  VAR_7 | VAR_4 |
  VAR_3;

 if (VAR_10->info->flags & VAR_0)
  VAR_12 |= VAR_2;
 else
  VAR_12 |= VAR_1;

 return FUNC_1(VAR_11, VAR_12);
}
