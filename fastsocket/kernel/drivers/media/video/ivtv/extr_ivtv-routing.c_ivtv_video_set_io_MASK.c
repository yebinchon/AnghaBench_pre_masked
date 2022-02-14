
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ivtv {int active_input; TYPE_2__* card; int sd_video; } ;
struct TYPE_4__ {int hw_video; scalar_t__ gr_config; scalar_t__ type; TYPE_1__* video_inputs; } ;
struct TYPE_3__ {scalar_t__ video_type; int video_input; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct ivtv*,int,int ,int ,scalar_t__,int ,int ) ;
 int VAR_13 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int VAR_14 ;

void FUNC_2(struct ivtv *VAR_15)
{
 int VAR_16 = VAR_15->active_input;
 u32 VAR_17;
 u32 VAR_18;

 FUNC_1(VAR_15->sd_video, VAR_14, VAR_13,
  VAR_15->card->video_inputs[VAR_16].video_input, 0, 0);

 VAR_18 = VAR_15->card->video_inputs[VAR_16].video_type;

 if (VAR_18 == VAR_2) {
  VAR_17 = 0;
 } else if (VAR_18 < VAR_1) {
  VAR_17 = 2;
 } else {
  VAR_17 = 1;
 }

 if (VAR_15->card->hw_video & VAR_3)
  FUNC_0(VAR_15, VAR_3, VAR_14, VAR_13,
    VAR_17, 0, 0);

 if (VAR_15->card->hw_video & VAR_4) {
  if (VAR_18 == VAR_2 ||
      VAR_18 >= VAR_1) {

   VAR_17 = VAR_9 | VAR_6;
  } else {

   VAR_17 = VAR_8 | VAR_7;
  }
  VAR_17 |= VAR_15->card->gr_config;

  FUNC_0(VAR_15, VAR_4, VAR_14, VAR_13,
    VAR_17, 0, 0);
 }

 if (VAR_15->card->hw_video & VAR_5) {
  VAR_17 = VAR_12;
  if (VAR_18 > VAR_2 &&
      VAR_18 < VAR_1) {


   VAR_17 |= VAR_11;
  }
  else if (VAR_15->card->hw_video & VAR_4) {


   if (VAR_18 == VAR_2 ||
       VAR_15->card->type == VAR_0) {
    VAR_17 |= VAR_10;
   }
  }
  FUNC_0(VAR_15, VAR_5, VAR_14, VAR_13,
    VAR_17, 0, 0);
 }
}
