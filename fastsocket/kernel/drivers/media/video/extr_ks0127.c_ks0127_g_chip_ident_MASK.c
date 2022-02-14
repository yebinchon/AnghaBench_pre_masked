
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dbg_chip_ident {int dummy; } ;
struct ks0127 {int ident; } ;
struct i2c_client {int dummy; } ;


 struct ks0127* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct i2c_client*,struct v4l2_dbg_chip_ident*,int ,int ) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, struct v4l2_dbg_chip_ident *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_2(VAR_0);
 struct ks0127 *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_1, VAR_3->ident, 0);
}
