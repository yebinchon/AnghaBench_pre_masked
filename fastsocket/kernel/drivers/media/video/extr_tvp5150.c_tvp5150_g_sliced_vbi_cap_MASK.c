
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_cap {int service_set; int ** service_lines; } ;
struct TYPE_2__ {int ini_line; int end_line; int vbi_type; } ;
struct i2c_vbi_ram_value {scalar_t__ reg; TYPE_1__ type; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_sliced_vbi_cap*,int ,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*) ;
 struct i2c_vbi_ram_value* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
    struct v4l2_sliced_vbi_cap *VAR_3)
{
 const struct i2c_vbi_ram_value *VAR_4 = VAR_1;
 int VAR_5;

 FUNC_1(1, VAR_0, VAR_2, "g_sliced_vbi_cap\n");
 FUNC_0(VAR_3, 0, sizeof *VAR_3);

 while (VAR_4->reg != (u16)-1 ) {
  for (VAR_5=VAR_4->type.ini_line;VAR_5<=VAR_4->type.end_line;VAR_5++) {
   VAR_3->service_lines[0][VAR_5] |= VAR_4->type.vbi_type;
  }
  VAR_3->service_set |= VAR_4->type.vbi_type;

  VAR_4++;
 }
 return 0;
}
