
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {unsigned int nof_inputs; unsigned int active_input; TYPE_2__* card; int audio_input; int capturing; } ;
struct file {int dummy; } ;
struct TYPE_4__ {TYPE_1__* video_inputs; } ;
struct TYPE_3__ {int audio_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ivtv*) ;
 int FUNC_3 (struct ivtv*) ;
 int FUNC_4 (struct ivtv*) ;
 int FUNC_5 (struct ivtv*) ;

int FUNC_6(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct ivtv *VAR_5 = ((struct ivtv_open_id *)VAR_3)->itv;

 if (VAR_4 < 0 || VAR_4 >= VAR_5->nof_inputs)
  return -VAR_1;

 if (VAR_4 == VAR_5->active_input) {
  FUNC_0("Input unchanged\n");
  return 0;
 }

 if (FUNC_1(&VAR_5->capturing) > 0) {
  return -VAR_0;
 }

 FUNC_0("Changing input from %d to %d\n",
   VAR_5->active_input, VAR_4);

 VAR_5->active_input = VAR_4;


 VAR_5->audio_input = VAR_5->card->video_inputs[VAR_4].audio_index;



 FUNC_3(VAR_5);
 FUNC_5(VAR_5);
 FUNC_2(VAR_5);
 FUNC_4(VAR_5);

 return 0;
}
