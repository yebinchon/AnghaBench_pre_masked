
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct CHIPSTATE {int * thread; int wt; } ;


 int FUNC_0 (int *) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct CHIPSTATE*) ;
 int FUNC_3 (int *) ;
 struct CHIPSTATE* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_1(VAR_0);
 struct CHIPSTATE *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(&VAR_2->wt);
 if (VAR_2->thread) {

  FUNC_3(VAR_2->thread);
  VAR_2->thread = ((void*)0);
 }

 FUNC_5(VAR_1);
 FUNC_2(VAR_2);
 return 0;
}
