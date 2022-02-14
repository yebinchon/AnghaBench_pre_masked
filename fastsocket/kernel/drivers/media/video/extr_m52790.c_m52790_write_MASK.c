
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct m52790_state {int input; int output; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int) ;
 struct m52790_state* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0)
{
 struct m52790_state *VAR_1 = FUNC_1(VAR_0);
 struct i2c_client *VAR_2 = FUNC_2(VAR_0);

 u8 VAR_3 = (VAR_1->input | VAR_1->output) & 0xff;
 u8 VAR_4 = (VAR_1->input | VAR_1->output) >> 8;

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
