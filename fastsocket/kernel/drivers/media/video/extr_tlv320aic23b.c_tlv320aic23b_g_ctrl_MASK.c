
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {scalar_t__ id; int value; } ;
struct tlv320aic23b_state {int muted; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tlv320aic23b_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2, struct v4l2_control *VAR_3)
{
 struct tlv320aic23b_state *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3->id != VAR_1)
  return -VAR_0;
 VAR_3->value = VAR_4->muted;
 return 0;
}
