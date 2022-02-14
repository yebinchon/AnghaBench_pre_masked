
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tlv320aic23b_state {scalar_t__ muted; } ;


 struct tlv320aic23b_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct tlv320aic23b_state *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, "Input: %s\n", VAR_1->muted ? "muted" : "active");
 return 0;
}
