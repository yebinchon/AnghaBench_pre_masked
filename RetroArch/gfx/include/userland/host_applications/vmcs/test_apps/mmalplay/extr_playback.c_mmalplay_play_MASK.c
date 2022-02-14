
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ stepping; } ;
struct TYPE_17__ {void* time_playback; scalar_t__ status; unsigned int connection_num; scalar_t__ video_out_port; scalar_t__ is_still_image; TYPE_1__ options; int decoded_frames; TYPE_3__** connection; scalar_t__ stop; int event; scalar_t__ audio_clock; scalar_t__ video_clock; int uri; } ;
struct TYPE_16__ {scalar_t__ length; scalar_t__ cmd; } ;
struct TYPE_15__ {int flags; scalar_t__ out; scalar_t__ in; TYPE_2__* pool; int queue; } ;
struct TYPE_14__ {int queue; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_CONNECTION_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;
typedef TYPE_5__ MMALPLAY_T ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,TYPE_5__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__,TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,scalar_t__,TYPE_4__*) ;
 void* FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

MMAL_STATUS_T FUNC_11(MMALPLAY_T *VAR_5)
{
   MMAL_STATUS_T VAR_6 = VAR_3;
   unsigned int VAR_7;

   FUNC_1("%p, %s", VAR_5, VAR_5->uri);

   VAR_5->time_playback = FUNC_8();


   if (VAR_5->video_clock)
      FUNC_3(VAR_5->video_clock, VAR_2, VAR_4);
   if (VAR_5->audio_clock)
      FUNC_3(VAR_5->audio_clock, VAR_2, VAR_4);

   while(1)
   {
      MMAL_BUFFER_HEADER_T *VAR_8;

      FUNC_9(&VAR_5->event);
      if (VAR_5->stop || VAR_5->status != VAR_3)
      {
         VAR_6 = VAR_5->status;
         break;
      }


      for (VAR_7 = 0; VAR_7 < VAR_5->connection_num; VAR_7++)
      {
         MMAL_CONNECTION_T *VAR_9 = VAR_5->connection[VAR_7];

         if (VAR_9->flags & VAR_1)
            continue;


         VAR_8 = FUNC_5(VAR_9->queue);
         while (VAR_8)
         {
            if (VAR_8->cmd)
            {
               VAR_6 = FUNC_7(VAR_9, VAR_9->out, VAR_8);
               if (VAR_6 != VAR_3)
                  goto error;
               VAR_8 = FUNC_5(VAR_9->queue);
               continue;
            }


            if (VAR_9->out == VAR_5->video_out_port)
            {
               if (VAR_8->length)
                  VAR_5->decoded_frames++;

               if (VAR_5->options.stepping)
                  FUNC_2();
            }

            VAR_6 = FUNC_4(VAR_9->in, VAR_8);
            if (VAR_6 != VAR_3)
            {
               FUNC_0("mmal_port_send_buffer failed (%i)", VAR_6);
               FUNC_6(VAR_9->queue, VAR_8);
               goto error;
            }
            VAR_8 = FUNC_5(VAR_9->queue);
         }


         VAR_8 = VAR_9->pool ? FUNC_5(VAR_9->pool->queue) : ((void*)0);
         while (VAR_8)
         {
            VAR_6 = FUNC_4(VAR_9->out, VAR_8);
            if (VAR_6 != VAR_3)
            {
               FUNC_0("mmal_port_send_buffer failed (%i)", VAR_6);
               FUNC_6(VAR_9->pool->queue, VAR_8);
               goto error;
            }
            VAR_8 = FUNC_5(VAR_9->pool->queue);
         }
      }
   }

 error:
   VAR_5->time_playback = FUNC_8() - VAR_5->time_playback;


   if (VAR_5->is_still_image && VAR_6 == VAR_3)
      FUNC_10(VAR_0);

   return VAR_6;
}
