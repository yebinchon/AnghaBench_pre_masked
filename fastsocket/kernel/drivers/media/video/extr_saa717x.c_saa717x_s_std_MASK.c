
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct saa717x_state {int std; scalar_t__ radio; } ;


 int VAR_0 ;
 struct saa717x_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, v4l2_std_id VAR_2)
{
 struct saa717x_state *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(1, VAR_0, VAR_1, "decoder set norm ");
 FUNC_1(1, VAR_0, VAR_1, "(not yet implementd)\n");

 VAR_3->radio = 0;
 VAR_3->std = VAR_2;
 return 0;
}
