
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ivtv_open_id {struct ivtv* itv; } ;
struct ivtv {unsigned int active_output; TYPE_2__* card; } ;
struct file {int dummy; } ;
struct TYPE_4__ {unsigned int nof_outputs; TYPE_1__* video_outputs; } ;
struct TYPE_3__ {int video_output; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ivtv*,int ,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6, unsigned int VAR_7)
{
 struct ivtv *VAR_8 = ((struct ivtv_open_id *)VAR_6)->itv;

 if (VAR_7 >= VAR_8->card->nof_outputs)
  return -VAR_0;

 if (VAR_7 == VAR_8->active_output) {
  FUNC_0("Output unchanged\n");
  return 0;
 }
 FUNC_0("Changing output from %d to %d\n",
     VAR_8->active_output, VAR_7);

 VAR_8->active_output = VAR_7;
 FUNC_1(VAR_8, VAR_1, VAR_4, VAR_3,
   VAR_2,
   VAR_8->card->video_outputs[VAR_7].video_output, 0);

 return 0;
}
