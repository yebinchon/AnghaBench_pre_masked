
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_vbi_format {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int std; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 struct cx25840_state* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

int FUNC_4(struct v4l2_subdev *VAR_1, struct v4l2_vbi_format *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_3(VAR_1);
 struct cx25840_state *VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = !(VAR_4->std & VAR_0);
 int VAR_6 = VAR_5 ? 1 : 0;


 FUNC_0(VAR_3);


 FUNC_1(VAR_3, 0x47f, VAR_6);
 FUNC_1(VAR_3, 0x404, 0x2e);
 return 0;
}
