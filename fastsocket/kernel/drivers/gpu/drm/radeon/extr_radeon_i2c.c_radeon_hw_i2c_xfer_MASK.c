
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_i2c_bus_rec {int mm_i2c; } ;
struct radeon_i2c_chan {struct radeon_i2c_bus_rec rec; TYPE_1__* dev; } ;
struct radeon_device {int family; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct radeon_i2c_chan* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_3 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_1,
         struct i2c_msg *VAR_2, int VAR_3)
{
 struct radeon_i2c_chan *VAR_4 = FUNC_1(VAR_1);
 struct radeon_device *VAR_5 = VAR_4->dev->dev_private;
 struct radeon_i2c_bus_rec *VAR_6 = &VAR_4->rec;
 int VAR_7 = 0;

 switch (VAR_5->family) {
 case 167:
 case 147:
 case 157:
 case 146:
 case 156:
 case 166:
 case 145:
 case 155:
 case 144:
 case 165:
 case 164:
 case 143:
 case 142:
 case 163:
 case 162:
 case 141:
 case 154:
 case 153:
  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 case 152:
 case 151:
 case 150:

  break;
 case 140:
 case 161:
 case 139:
 case 138:
 case 137:
 case 160:
  if (VAR_6->mm_i2c)
   VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3);
  else
   VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3);
  break;
 case 159:
 case 136:
 case 134:
 case 132:

  break;
 case 135:
 case 133:
 case 149:
 case 148:
 case 128:
 case 130:
 case 131:
 case 129:

  break;
 case 171:
 case 158:
 case 168:
 case 170:
 case 169:

  break;
 default:
  FUNC_0("i2c: unhandled radeon chip\n");
  VAR_7 = -VAR_0;
  break;
 }

 return VAR_7;
}
