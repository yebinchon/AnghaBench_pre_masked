
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dbg_chip_ident {int dummy; } ;
struct indycam {int version; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct indycam* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct i2c_client*,struct v4l2_dbg_chip_ident*,int ,int ) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1,
  struct v4l2_dbg_chip_ident *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_1);
 struct indycam *VAR_4 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3, VAR_2, VAR_0,
         VAR_4->version);
}
