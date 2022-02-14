
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcontrol {int start_bit; int reg; } ;
struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct v4l2_control {scalar_t__ id; int value; } ;
struct tcm825x_sensor {TYPE_1__* platform_data; struct i2c_client* i2c_client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int (* is_upside_down ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct vcontrol* FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_int_device *VAR_6,
        struct v4l2_control *VAR_7)
{
 struct tcm825x_sensor *VAR_8 = VAR_6->priv;
 struct i2c_client *VAR_9 = VAR_8->i2c_client;
 int VAR_10, VAR_11;
 struct vcontrol *VAR_12;


 if (VAR_7->id == VAR_3) {
  int VAR_13, VAR_14;

  VAR_14 = FUNC_4(VAR_9,
          FUNC_0(VAR_2));
  if (VAR_14 < 0)
   return VAR_14;
  VAR_13 = FUNC_4(VAR_9,
          FUNC_0(VAR_1));
  if (VAR_13 < 0)
   return VAR_13;

  VAR_7->value = ((VAR_14 & 0x1f) << 8) | (VAR_13);
  return 0;
 }

 VAR_12 = FUNC_2(VAR_7->id);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 VAR_11 = FUNC_4(VAR_9, FUNC_0(VAR_12->reg));
 if (VAR_11 < 0)
  return VAR_11;
 VAR_10 = VAR_11 & FUNC_1(VAR_12->reg);
 VAR_10 >>= VAR_12->start_bit;

 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_7->id == VAR_4 || VAR_7->id == VAR_5)
  VAR_10 ^= VAR_8->platform_data->is_upside_down();

 VAR_7->value = VAR_10;
 return 0;
}
