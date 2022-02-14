
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcontrol {int start_bit; int reg; } ;
struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct v4l2_control {int value; scalar_t__ id; } ;
struct tcm825x_sensor {TYPE_1__* platform_data; struct i2c_client* i2c_client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int (* is_upside_down ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct vcontrol* FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_int_device *VAR_7,
        struct v4l2_control *VAR_8)
{
 struct tcm825x_sensor *VAR_9 = VAR_7->priv;
 struct i2c_client *VAR_10 = VAR_9->i2c_client;
 struct vcontrol *VAR_11;
 int VAR_12 = VAR_8->value;


 if (VAR_8->id == VAR_4) {
  int VAR_13, VAR_14;
  VAR_13 = VAR_12 & FUNC_0(VAR_2);
  VAR_14 = (VAR_12 >> 8) & FUNC_0(VAR_3);

  if (FUNC_3(VAR_10,
        VAR_3, VAR_14))
   return -VAR_1;

  if (FUNC_3(VAR_10,
        VAR_2, VAR_13))
   return -VAR_1;

  return 0;
 }

 VAR_11 = FUNC_1(VAR_8->id);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 if (VAR_8->id == VAR_5 || VAR_8->id == VAR_6)
  VAR_12 ^= VAR_9->platform_data->is_upside_down();

 VAR_12 = VAR_12 << VAR_11->start_bit;
 if (FUNC_3(VAR_10, VAR_11->reg, VAR_12))
  return -VAR_1;

 return 0;
}
