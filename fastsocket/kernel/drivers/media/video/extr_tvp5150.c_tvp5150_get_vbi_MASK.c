
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
typedef scalar_t__ u8 ;
struct v4l2_subdev {int dummy; } ;
struct tvp5150 {int norm; } ;
struct TYPE_2__ {int vbi_type; } ;
struct i2c_vbi_ram_value {TYPE_1__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tvp5150* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,scalar_t__) ;
 int FUNC_2 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
   const struct i2c_vbi_ram_value *VAR_4, int VAR_5)
{
 struct tvp5150 *VAR_6 = FUNC_0(VAR_3);
 v4l2_std_id VAR_7 = VAR_6->norm;
 u8 VAR_8;
 int VAR_9, VAR_10 = 0;

 if (VAR_7 == VAR_2) {
  FUNC_2(VAR_3, "VBI can't be configured without knowing number of lines\n");
  return 0;
 } else if (VAR_7 & VAR_1) {

  VAR_5 += 3;
 }

 if (VAR_5 < 6 || VAR_5 > 27)
  return 0;

 VAR_8 = ((VAR_5 - 6) << 1) + VAR_0;

 VAR_9 = FUNC_1(VAR_3, VAR_8) & 0x0f;
 if (VAR_9 < 0x0f)
  VAR_10 = VAR_4[VAR_9].type.vbi_type;

 VAR_9 = FUNC_1(VAR_3, VAR_8 + 1) & 0x0f;
 if (VAR_9 < 0x0f)
  VAR_10 |= VAR_4[VAR_9].type.vbi_type;

 return VAR_10;
}
