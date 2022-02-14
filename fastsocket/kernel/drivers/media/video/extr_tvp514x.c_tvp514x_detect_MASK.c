
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct v4l2_subdev {int dummy; } ;
struct tvp514x_decoder {scalar_t__ ver; } ;
struct i2c_client {int addr; TYPE_1__* adapter; int name; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct v4l2_subdev*,char*,scalar_t__,scalar_t__) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*,char*,int ,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_8,
  struct tvp514x_decoder *VAR_9)
{
 u8 VAR_10, VAR_11, VAR_12;
 struct i2c_client *VAR_13 = FUNC_3(VAR_8);

 VAR_10 = FUNC_0(VAR_8, VAR_2);
 VAR_11 = FUNC_0(VAR_8, VAR_1);
 VAR_12 = FUNC_0(VAR_8, VAR_3);

 FUNC_1(1, VAR_7, VAR_8,
   "chip id detected msb:0x%x lsb:0x%x rom version:0x%x\n",
   VAR_10, VAR_11, VAR_12);
 if ((VAR_10 != VAR_6)
  || ((VAR_11 != VAR_4)
  && (VAR_11 != VAR_5))) {



  FUNC_2(VAR_8, "chip id mismatch msb:0x%x lsb:0x%x\n",
    VAR_10, VAR_11);
  return -VAR_0;
 }

 VAR_9->ver = VAR_12;

 FUNC_4(VAR_8, "%s (Version - 0x%.2x) found at 0x%x (%s)\n",
   VAR_13->name, VAR_9->ver,
   VAR_13->addr << 1, VAR_13->adapter->name);
 return 0;
}
