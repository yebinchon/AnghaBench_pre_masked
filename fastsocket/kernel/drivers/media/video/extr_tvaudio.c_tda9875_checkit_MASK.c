
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {struct v4l2_subdev sd; } ;


 int FUNC_0 (struct CHIPSTATE*,int) ;
 int FUNC_1 (struct v4l2_subdev*,char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct CHIPSTATE *VAR_0)
{
 struct v4l2_subdev *VAR_1 = &VAR_0->sd;
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0, 254);
 VAR_3 = FUNC_0(VAR_0, 255);

 if (VAR_2 == 0 || VAR_2 == 2) {
  FUNC_1(VAR_1, "found tda9875%s rev. %d.\n",
   VAR_2 == 0 ? "" : "A", VAR_3);
  return 1;
 }
 return 0;
}
