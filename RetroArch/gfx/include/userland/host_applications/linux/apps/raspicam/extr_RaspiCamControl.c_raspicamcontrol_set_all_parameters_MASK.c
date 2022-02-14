
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_32__ {int control; } ;
struct TYPE_29__ {int member_1; int member_0; } ;
struct TYPE_31__ {int member_2; int hdr; int member_1; TYPE_1__ member_0; } ;
struct TYPE_30__ {scalar_t__ settings; int digital_gain; int analog_gain; int annotate_y; int annotate_x; int annotate_justify; int annotate_bg_colour; int annotate_text_colour; int annotate_text_size; int annotate_string; int enable_annotate; int stats_pass; int drc_level; int shutter_speed; int roi; int vflip; int hflip; int rotation; int colourEffects; int imageEffect; int awb_gains_b; int awb_gains_r; int awbMode; int exposureMeterMode; int flickerAvoidMode; int exposureMode; int exposureCompensation; int videoStabilisation; int ISO; int brightness; int contrast; int sharpness; int saturation; } ;
typedef TYPE_2__ RASPICAM_CAMERA_PARAMETERS ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PARAMETER_CHANGE_EVENT_REQUEST_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_14 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_15 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_16 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_17 (TYPE_4__*,int ) ;
 int FUNC_18 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_19 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_20 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_21 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_22 (TYPE_4__*,int ) ;
 int FUNC_23 (char*) ;

int FUNC_24(MMAL_COMPONENT_T *VAR_3, const RASPICAM_CAMERA_PARAMETERS *VAR_4)
{
   int VAR_5;

   VAR_5 = FUNC_18(VAR_3, VAR_4->saturation);
   VAR_5 += FUNC_19(VAR_3, VAR_4->sharpness);
   VAR_5 += FUNC_9(VAR_3, VAR_4->contrast);
   VAR_5 += FUNC_7(VAR_3, VAR_4->brightness);
   VAR_5 += FUNC_2(VAR_3, VAR_4->ISO);
   VAR_5 += FUNC_22(VAR_3, VAR_4->videoStabilisation);
   VAR_5 += FUNC_10(VAR_3, VAR_4->exposureCompensation);
   VAR_5 += FUNC_11(VAR_3, VAR_4->exposureMode);
   VAR_5 += FUNC_12(VAR_3, VAR_4->flickerAvoidMode);
   VAR_5 += FUNC_16(VAR_3, VAR_4->exposureMeterMode);
   VAR_5 += FUNC_6(VAR_3, VAR_4->awbMode);
   VAR_5 += FUNC_5(VAR_3, VAR_4->awb_gains_r, VAR_4->awb_gains_b);
   VAR_5 += FUNC_15(VAR_3, VAR_4->imageEffect);
   VAR_5 += FUNC_8(VAR_3, &VAR_4->colourEffects);

   VAR_5 += FUNC_17(VAR_3, VAR_4->rotation);
   VAR_5 += FUNC_13(VAR_3, VAR_4->hflip, VAR_4->vflip);
   VAR_5 += FUNC_3(VAR_3, VAR_4->roi);
   VAR_5 += FUNC_20(VAR_3, VAR_4->shutter_speed);
   VAR_5 += FUNC_1(VAR_3, VAR_4->drc_level);
   VAR_5 += FUNC_21(VAR_3, VAR_4->stats_pass);
   VAR_5 += FUNC_4(VAR_3, VAR_4->enable_annotate, VAR_4->annotate_string,
                                          VAR_4->annotate_text_size,
                                          VAR_4->annotate_text_colour,
                                          VAR_4->annotate_bg_colour,
                                          VAR_4->annotate_justify,
                                          VAR_4->annotate_x,
                                          VAR_4->annotate_y);
   VAR_5 += FUNC_14(VAR_3, VAR_4->analog_gain, VAR_4->digital_gain);

   if (VAR_4->settings)
   {
      MMAL_PARAMETER_CHANGE_EVENT_REQUEST_T VAR_6 =
      {
         {VAR_1, sizeof(MMAL_PARAMETER_CHANGE_EVENT_REQUEST_T)},
         VAR_0, 1
      };

      MMAL_STATUS_T VAR_7 = FUNC_0(VAR_3->control, &VAR_6.hdr);
      if ( VAR_7 != VAR_2 )
      {
         FUNC_23("No camera settings events");
      }

      VAR_5 += VAR_7;
   }

   return VAR_5;
}
