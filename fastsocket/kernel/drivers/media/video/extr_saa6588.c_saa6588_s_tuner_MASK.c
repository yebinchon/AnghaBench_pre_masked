
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct saa6588 {int dummy; } ;


 int FUNC_0 (struct saa6588*) ;
 struct saa6588* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, struct v4l2_tuner *VAR_1)
{
 struct saa6588 *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2);
 return 0;
}
