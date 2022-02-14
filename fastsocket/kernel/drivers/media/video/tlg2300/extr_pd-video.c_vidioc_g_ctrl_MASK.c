
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tuner_param ;
struct v4l2_control {int value; int id; } ;
struct tuner_custom_parameter_s {int param_value; } ;
struct poseidon_control {int vc_id; } ;
struct poseidon {int lock; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct poseidon_control* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct poseidon*,int ,int ,struct tuner_custom_parameter_s*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, struct v4l2_control *VAR_4)
{
 struct front_face *VAR_5 = VAR_3;
 struct poseidon *VAR_6 = VAR_5->pd;
 struct poseidon_control *VAR_7 = ((void*)0);
 struct tuner_custom_parameter_s VAR_8;
 s32 VAR_9 = 0, VAR_10;

 VAR_7 = FUNC_0(VAR_4->id);
 if (!VAR_7)
  return -VAR_0;

 FUNC_1(&VAR_6->lock);
 VAR_9 = FUNC_3(VAR_6, VAR_1, VAR_7->vc_id,
   &VAR_8, &VAR_10, sizeof(VAR_8));
 FUNC_2(&VAR_6->lock);

 if (VAR_9 || VAR_10)
  return -1;

 VAR_4->value = VAR_8.param_value;
 return 0;
}
