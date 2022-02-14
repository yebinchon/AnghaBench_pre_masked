
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {scalar_t__ id; int value; } ;
struct tlv320aic23b_state {int muted; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct tlv320aic23b_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2, struct v4l2_control *VAR_3)
{
 struct tlv320aic23b_state *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3->id != VAR_1)
  return -VAR_0;
 VAR_4->muted = VAR_3->value;
 FUNC_0(VAR_2, 0, 0x180);

 if (!VAR_4->muted)
  FUNC_0(VAR_2, 0, 0x119);
 return 0;
}
