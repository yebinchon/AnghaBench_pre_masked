
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_output {int index; int audioset; int std; int type; int name; } ;
struct ivtv_card_output {int name; } ;
struct ivtv {TYPE_1__* card; } ;
struct TYPE_2__ {int nof_outputs; struct ivtv_card_output* video_outputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;

int FUNC_1(struct ivtv *VAR_3, u16 VAR_4, struct v4l2_output *VAR_5)
{
 const struct ivtv_card_output *VAR_6 = VAR_3->card->video_outputs + VAR_4;

 if (VAR_4 >= VAR_3->card->nof_outputs)
  return -VAR_0;
 VAR_5->index = VAR_4;
 FUNC_0(VAR_5->name, VAR_6->name, sizeof(VAR_5->name));
 VAR_5->type = VAR_1;
 VAR_5->audioset = 1;
 VAR_5->std = VAR_2;
 return 0;
}
