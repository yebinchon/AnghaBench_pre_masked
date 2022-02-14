
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ addr; } ;
struct v4l2_dbg_chip_ident {scalar_t__ revision; int ident; TYPE_1__ match; } ;
struct mt9t031 {int model; } ;
struct i2c_client {scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mt9t031* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3,
    struct v4l2_dbg_chip_ident *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_1(VAR_3);
 struct mt9t031 *VAR_6 = FUNC_0(VAR_5);

 if (VAR_4->match.type != VAR_2)
  return -VAR_0;

 if (VAR_4->match.addr != VAR_5->addr)
  return -VAR_1;

 VAR_4->ident = VAR_6->model;
 VAR_4->revision = 0;

 return 0;
}
