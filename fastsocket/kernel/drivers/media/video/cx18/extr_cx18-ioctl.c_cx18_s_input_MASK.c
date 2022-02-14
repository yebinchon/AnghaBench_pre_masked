
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct cx18_open_id {int prio; struct cx18* cx; } ;
struct cx18 {unsigned int nof_inputs; unsigned int active_input; TYPE_2__* card; int audio_input; int prio; } ;
struct TYPE_4__ {TYPE_1__* video_inputs; } ;
struct TYPE_3__ {int audio_index; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct cx18*) ;
 int FUNC_2 (struct cx18*) ;
 int FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(struct file *VAR_1, void *VAR_2, unsigned int VAR_3)
{
 struct cx18_open_id *VAR_4 = VAR_2;
 struct cx18 *VAR_5 = VAR_4->cx;
 int VAR_6;

 VAR_6 = FUNC_5(&VAR_5->prio, VAR_4->prio);
 if (VAR_6)
  return VAR_6;

 if (VAR_3 >= VAR_5->nof_inputs)
  return -VAR_0;

 if (VAR_3 == VAR_5->active_input) {
  FUNC_0("Input unchanged\n");
  return 0;
 }

 FUNC_0("Changing input from %d to %d\n",
   VAR_5->active_input, VAR_3);

 VAR_5->active_input = VAR_3;

 VAR_5->audio_input = VAR_5->card->video_inputs[VAR_3].audio_index;



 FUNC_2(VAR_5);
 FUNC_4(VAR_5);
 FUNC_1(VAR_5);
 FUNC_3(VAR_5);
 return 0;
}
