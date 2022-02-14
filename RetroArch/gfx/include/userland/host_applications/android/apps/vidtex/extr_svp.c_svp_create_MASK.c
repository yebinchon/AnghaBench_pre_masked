
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_32__ {int * input; TYPE_8__** output; int control; } ;
struct TYPE_31__ {int buffer_size; int buffer_num; int buffer_size_recommended; int buffer_num_recommended; TYPE_2__* format; } ;
struct TYPE_27__ {int den; int num; } ;
struct TYPE_26__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_30__ {TYPE_4__ frame_rate; int height; TYPE_3__ crop; int width; } ;
struct TYPE_29__ {int stop_cb; int video_frame_cb; } ;
struct TYPE_28__ {TYPE_8__* video_output; int queue; scalar_t__ out_pool; int * connection; TYPE_9__* camera; TYPE_9__* video_decode; TYPE_9__* reader; int created; int wd_timer; int timer; int mutex; int sema; TYPE_6__ callbacks; int opts; } ;
struct TYPE_25__ {scalar_t__ type; TYPE_1__* es; int encoding; } ;
struct TYPE_24__ {TYPE_7__ video; } ;
typedef TYPE_5__ SVP_T ;
typedef int SVP_OPTS_T ;
typedef TYPE_6__ SVP_CALLBACKS_T ;
typedef TYPE_7__ MMAL_VIDEO_FORMAT_T ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_8__ MMAL_PORT_T ;
typedef TYPE_9__ MMAL_COMPONENT_T ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_2 (int ,TYPE_9__**) ;
 scalar_t__ FUNC_3 (TYPE_9__*) ;
 scalar_t__ FUNC_4 (int **,TYPE_8__*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_8__*,int ,int ) ;
 int FUNC_8 () ;
 int VAR_20 ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_9__*,char const*,TYPE_8__**) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_12 (int ) ;
 TYPE_5__* FUNC_13 (int,int,char*) ;
 scalar_t__ FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 (int *,char*,int ) ;
 scalar_t__ FUNC_16 (int *,char*,int ,TYPE_5__*) ;

SVP_T *FUNC_17(const char *VAR_23, SVP_CALLBACKS_T *VAR_24, const SVP_OPTS_T *VAR_25)
{
   SVP_T *VAR_26;
   MMAL_STATUS_T VAR_27;
   VCOS_STATUS_T VAR_28;
   MMAL_PORT_T *VAR_29 = ((void*)0);
   MMAL_COMPONENT_T *VAR_30 = ((void*)0);
   MMAL_PORT_T *VAR_31 = ((void*)0);

   FUNC_1("Creating player for %s", (VAR_23 ? VAR_23 : "camera preview"));

   FUNC_12(VAR_24->video_frame_cb);
   FUNC_12(VAR_24->stop_cb);

   VAR_26 = FUNC_13(1, sizeof(*VAR_26), "svp");
   FUNC_0((VAR_26 ? VAR_10 : VAR_6), "Failed to allocate context");

   VAR_26->opts = *VAR_25;
   VAR_26->callbacks = *VAR_24;


   VAR_28 = FUNC_15(&VAR_26->sema, "svp-sem", 0);
   FUNC_0((VAR_28 == VAR_19 ? VAR_10 : VAR_6), "Failed to create semaphore");
   VAR_26->created |= VAR_16;

   VAR_28 = FUNC_14(&VAR_26->mutex, "svp-mutex");
   FUNC_0((VAR_28 == VAR_19 ? VAR_10 : VAR_6), "Failed to create mutex");
   VAR_26->created |= VAR_15;

   VAR_28 = FUNC_16(&VAR_26->timer, "svp-timer", VAR_21, VAR_26);
   FUNC_0((VAR_28 == VAR_19 ? VAR_10 : VAR_6), "Failed to create timer");
   VAR_26->created |= VAR_17;

   VAR_28 = FUNC_16(&VAR_26->wd_timer, "svp-wd-timer", VAR_22, VAR_26);
   FUNC_0((VAR_28 == VAR_19 ? VAR_10 : VAR_6), "Failed to create timer");
   VAR_26->created |= VAR_18;


   VAR_26->reader = ((void*)0);
   VAR_26->video_decode = ((void*)0);
   VAR_26->camera = ((void*)0);
   VAR_26->connection = ((void*)0);

   if (VAR_23)
   {



      VAR_27 = FUNC_2(VAR_1, &VAR_26->reader);
      FUNC_0(VAR_27, "Failed to create container reader");

      VAR_27 = FUNC_11(VAR_26->reader, VAR_23, &VAR_29);
      if (VAR_27 != VAR_10)
         goto error;

      VAR_27 = FUNC_3(VAR_26->reader);
      FUNC_0(VAR_27, "Failed to enable container reader");

      VAR_27 = FUNC_10(VAR_26, VAR_26->reader->control, VAR_20);
      FUNC_0(VAR_27, "Failed to enable container reader control port");


      VAR_27 = FUNC_2(VAR_2, &VAR_26->video_decode);
      FUNC_0(VAR_27, "Failed to create video decoder");

      VAR_30 = VAR_26->video_decode;
      VAR_31 = VAR_30->output[0];

      VAR_27 = FUNC_3(VAR_30);
      FUNC_0(VAR_27, "Failed to enable video decoder");

      VAR_27 = FUNC_10(VAR_26, VAR_30->control, VAR_20);
      FUNC_0(VAR_27, "Failed to enable video decoder control port");
   }
   else
   {

      VAR_27 = FUNC_2(VAR_0, &VAR_26->camera);
      FUNC_0(VAR_27, "Failed to create camera");

      VAR_27 = FUNC_3(VAR_26->camera);
      FUNC_0(VAR_27, "Failed to enable camera");

      VAR_27 = FUNC_10(VAR_26, VAR_26->camera->control, VAR_20);
      FUNC_0(VAR_27, "Failed to enable camera control port");

      VAR_31 = VAR_26->camera->output[0];
   }

   VAR_27 = FUNC_6(VAR_31, VAR_9, VAR_11);
   FUNC_0((VAR_27 == VAR_7 ? VAR_10 : VAR_27), "Failed to enable zero copy");

   if (VAR_23)
   {

      VAR_27 = FUNC_4(&VAR_26->connection, VAR_29, VAR_30->input[0],
                                  VAR_3);
      FUNC_0(VAR_27, "Failed to create connection");
   }



   VAR_31->format->encoding = VAR_5;

   if (!VAR_23)
   {

      MMAL_VIDEO_FORMAT_T *VAR_32 = &VAR_31->format->es->video;

      FUNC_0((VAR_31->format->type == VAR_8) ? VAR_10 : VAR_4,
                   "Output port isn't video format");

      VAR_32->width = VAR_14;
      VAR_32->height = VAR_13;
      VAR_32->crop.x = 0;
      VAR_32->crop.y = 0;
      VAR_32->crop.width = VAR_32->width;
      VAR_32->crop.height = VAR_32->height;
      VAR_32->frame_rate.num = VAR_12;
      VAR_32->frame_rate.den = 1;
   }

   VAR_27 = FUNC_5(VAR_31);
   FUNC_0(VAR_27, "Failed to set output port format");




   VAR_31->buffer_num = VAR_31->buffer_num_recommended;
   VAR_31->buffer_size = VAR_31->buffer_size_recommended;


   VAR_26->out_pool = FUNC_7(VAR_31, VAR_31->buffer_num,
                                         VAR_31->buffer_size);
   FUNC_0((VAR_26->out_pool ? VAR_10 : VAR_6), "Error allocating pool");
   VAR_26->queue = FUNC_8();
   FUNC_0((VAR_26 ? VAR_10 : VAR_6), "Error allocating queue");

   VAR_26->video_output = VAR_31;

   return VAR_26;

error:
   FUNC_9(VAR_26);
   return ((void*)0);
}
