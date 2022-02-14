
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct running_context {unsigned int sig_index; } ;
struct TYPE_2__ {struct running_context context; } ;
struct poseidon {TYPE_1__ video_data; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct front_face*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct front_face *VAR_3 = VAR_1;
 struct poseidon *VAR_4 = VAR_3->pd;
 struct running_context *VAR_5 = &VAR_4->video_data.context;

 FUNC_0(VAR_3);
 *VAR_2 = VAR_5->sig_index;
 return 0;
}
