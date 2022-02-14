
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ivtv_card_audio_input {scalar_t__ audio_input; scalar_t__ muxer_input; } ;
struct ivtv {size_t audio_input; TYPE_1__* card; int sd_muxer; int i_flags; } ;
struct TYPE_2__ {int hw_muxer; int hw_audio; struct ivtv_card_audio_input* audio_inputs; struct ivtv_card_audio_input radio_input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ivtv*,int,int ,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,scalar_t__,int ) ;

void FUNC_4(struct ivtv *VAR_7)
{
 const struct ivtv_card_audio_input *VAR_8;
 u32 VAR_9, VAR_10 = 0;


 if (FUNC_2(VAR_0, &VAR_7->i_flags))
  VAR_8 = &VAR_7->card->radio_input;
 else
  VAR_8 = &VAR_7->card->audio_inputs[VAR_7->audio_input];


 VAR_9 = VAR_8->muxer_input;
 if (VAR_7->card->hw_muxer & VAR_1)
  VAR_10 = VAR_3;
 FUNC_3(VAR_7->sd_muxer, VAR_5, VAR_6,
   VAR_9, VAR_10, 0);

 VAR_9 = VAR_8->audio_input;
 VAR_10 = 0;
 if (VAR_7->card->hw_audio & VAR_2)
  VAR_10 = FUNC_0(VAR_4);
 FUNC_1(VAR_7, VAR_7->card->hw_audio, VAR_5, VAR_6,
   VAR_9, VAR_10, 0);
}
