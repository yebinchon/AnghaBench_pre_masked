
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int value; int id; } ;
struct tuner_custom_parameter_s {int param_id; int param_value; int member_0; } ;
struct poseidon_control {int vc_id; } ;
struct poseidon {int lock; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct poseidon_control* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct poseidon*,int ,int,int*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_5, void *VAR_6, struct v4l2_control *VAR_7)
{
 struct tuner_custom_parameter_s VAR_8 = {0};
 struct poseidon_control *VAR_9 = ((void*)0);
 struct front_face *VAR_10 = VAR_6;
 struct poseidon *VAR_11 = VAR_10->pd;
 s32 VAR_12 = 0, VAR_13, VAR_14;

 VAR_9 = FUNC_0(VAR_7->id);
 if (!VAR_9)
  return -VAR_0;

 VAR_8.param_value = VAR_7->value;
 VAR_8.param_id = VAR_9->vc_id;
 VAR_14 = *(s32 *)&VAR_8;

 FUNC_1(&VAR_11->lock);
 VAR_12 = FUNC_4(VAR_11, VAR_4, VAR_14, &VAR_13);
 VAR_12 = FUNC_4(VAR_11, VAR_2, 0, &VAR_13);
 FUNC_2(&VAR_11->lock);

 FUNC_5(VAR_3);
 FUNC_3(VAR_1/4);
 return VAR_12;
}
