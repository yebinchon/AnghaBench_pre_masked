
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_audio {int index; int capability; int name; } ;
struct ivtv_card_audio_input {int audio_type; } ;
struct ivtv {int nof_audio_inputs; TYPE_1__* card; } ;
struct TYPE_2__ {struct ivtv_card_audio_input* audio_inputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_audio*,int ,int) ;
 int FUNC_1 (int ,char const* const,int) ;

int FUNC_2(struct ivtv *VAR_2, u16 VAR_3, struct v4l2_audio *VAR_4)
{
 const struct ivtv_card_audio_input *VAR_5 = VAR_2->card->audio_inputs + VAR_3;
 static const char * const VAR_6[] = {
  "Tuner 1",
  "Line In 1",
  "Line In 2"
 };

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 if (VAR_3 >= VAR_2->nof_audio_inputs)
  return -VAR_0;
 FUNC_1(VAR_4->name, VAR_6[VAR_5->audio_type - 1],
   sizeof(VAR_4->name));
 VAR_4->index = VAR_3;
 VAR_4->capability = VAR_1;
 return 0;
}
