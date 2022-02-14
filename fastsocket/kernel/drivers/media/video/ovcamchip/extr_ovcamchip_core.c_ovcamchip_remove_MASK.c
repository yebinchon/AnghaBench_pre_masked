
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ovcamchip {TYPE_1__* sops; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int (* free ) (struct i2c_client*) ;} ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct ovcamchip*) ;
 int FUNC_2 (struct i2c_client*) ;
 struct ovcamchip* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct ovcamchip *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_4(VAR_1);
 VAR_3 = VAR_2->sops->free(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(VAR_2);
 return 0;
}
