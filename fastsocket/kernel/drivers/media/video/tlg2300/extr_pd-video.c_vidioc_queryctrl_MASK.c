
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; } ;
struct poseidon_control {struct v4l2_queryctrl v4l2_ctrl; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct poseidon_control* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
   struct v4l2_queryctrl *VAR_3)
{
 struct poseidon_control *VAR_4 = ((void*)0);

 VAR_4 = FUNC_0(VAR_3->id);
 if (!VAR_4)
  return -VAR_0;

 *VAR_3 = VAR_4->v4l2_ctrl;
 return 0;
}
