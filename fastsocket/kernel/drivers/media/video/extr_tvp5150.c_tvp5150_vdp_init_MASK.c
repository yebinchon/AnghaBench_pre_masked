
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_vbi_ram_value {int reg; int* values; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct v4l2_subdev*,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_6,
    const struct i2c_vbi_ram_value *VAR_7)
{
 unsigned int VAR_8;


 FUNC_0(VAR_6, VAR_2, 0);


 for (VAR_8 = VAR_4; VAR_8 <= VAR_3; VAR_8++)
  FUNC_0(VAR_6, VAR_8, 0xff);


 while (VAR_7->reg != (u16)-1) {
  FUNC_0(VAR_6, VAR_0, VAR_7->reg >> 8);
  FUNC_0(VAR_6, VAR_1, VAR_7->reg);

  for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
   FUNC_0(VAR_6, VAR_5, VAR_7->values[VAR_8]);

  VAR_7++;
 }
 return 0;
}
