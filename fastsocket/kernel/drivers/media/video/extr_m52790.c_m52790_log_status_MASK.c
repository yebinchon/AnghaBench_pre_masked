
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct m52790_state {int input; int output; } ;


 struct m52790_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct m52790_state *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, "Switch 1: %02x\n",
   (VAR_1->input | VAR_1->output) & 0xff);
 FUNC_1(VAR_0, "Switch 2: %02x\n",
   (VAR_1->input | VAR_1->output) >> 8);
 return 0;
}
