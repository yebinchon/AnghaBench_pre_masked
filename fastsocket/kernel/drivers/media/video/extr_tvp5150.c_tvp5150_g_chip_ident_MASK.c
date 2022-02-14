
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_dbg_chip_ident {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct i2c_client*,struct v4l2_dbg_chip_ident*,int ,int) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3,
    struct v4l2_dbg_chip_ident *VAR_4)
{
 int VAR_5;
 struct i2c_client *VAR_6 = FUNC_2(VAR_3);

 VAR_5 = FUNC_0(VAR_3, VAR_0) << 8 |
       FUNC_0(VAR_3, VAR_1);

 return FUNC_1(VAR_6, VAR_4, VAR_2,
       VAR_5);
}
