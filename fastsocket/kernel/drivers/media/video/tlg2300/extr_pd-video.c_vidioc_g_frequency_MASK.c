
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; int type; int frequency; } ;
struct running_context {int freq; } ;
struct TYPE_2__ {struct running_context context; } ;
struct poseidon {TYPE_1__ video_data; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
   struct v4l2_frequency *VAR_4)
{
 struct front_face *VAR_5 = VAR_3;
 struct poseidon *VAR_6 = VAR_5->pd;
 struct running_context *VAR_7 = &VAR_6->video_data.context;

 if (0 != VAR_4->tuner)
  return -VAR_0;
 VAR_4->frequency = VAR_7->freq;
 VAR_4->type = VAR_1;
 return 0;
}
