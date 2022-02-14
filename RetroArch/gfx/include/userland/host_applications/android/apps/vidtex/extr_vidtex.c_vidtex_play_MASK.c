
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ num_swaps; int stop_reason; int sem_drawn; scalar_t__ video_frame; int sem_decoded; int opts; } ;
typedef TYPE_1__ VIDTEX_T ;
struct TYPE_15__ {char* uri; int duration_ms; int opts; } ;
typedef TYPE_2__ VIDTEX_PARAMS_T ;
struct TYPE_18__ {int stop_cb; int video_frame_cb; TYPE_1__* ctx; } ;
struct TYPE_17__ {int duration_ms; } ;
struct TYPE_16__ {scalar_t__ video_frame_count; } ;
typedef int SVP_T ;
typedef TYPE_3__ SVP_STATS_T ;
typedef TYPE_4__ SVP_OPTS_T ;
typedef TYPE_5__ SVP_CALLBACKS_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (char const*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_12(VIDTEX_T *VAR_4, const VIDTEX_PARAMS_T *VAR_5)
{
   const char *VAR_6;
   SVP_CALLBACKS_T VAR_7;
   SVP_T *VAR_8;
   SVP_OPTS_T VAR_9;
   SVP_STATS_T VAR_10;
   int VAR_11 = -1;

   VAR_6 = (VAR_5->uri[0] == '\0') ? ((void*)0) : VAR_5->uri;
   VAR_4->opts = VAR_5->opts;
   VAR_7.ctx = VAR_4;
   VAR_7.video_frame_cb = VAR_3;
   VAR_7.stop_cb = VAR_2;
   VAR_9.duration_ms = VAR_5->duration_ms;

   VAR_8 = FUNC_1(VAR_6, &VAR_7, &VAR_9);
   if (VAR_8)
   {

      VAR_4->num_swaps = 0;


      if (FUNC_4(VAR_8) == 0)
      {
         while (!FUNC_11(VAR_4, 0))
         {
            FUNC_8(&VAR_4->sem_decoded);

            if (VAR_4->video_frame)
            {
               FUNC_9(VAR_4, VAR_4->video_frame);
               FUNC_7(&VAR_4->sem_drawn);
            }
         }

         FUNC_7(&VAR_4->sem_drawn);


         FUNC_3(VAR_8, &VAR_10);
         FUNC_6("video frames decoded: %6u", VAR_10.video_frame_count);
         FUNC_6("EGL buffer swaps:     %6u", VAR_4->num_swaps);


         if (VAR_4->stop_reason & VAR_0)
         {
            FUNC_5("vidtex exiting on error");
         }
         else if (VAR_4->num_swaps == 0)
         {
            FUNC_5("vidtex completed with no EGL buffer swaps");
         }
         else if (FUNC_0((int)VAR_4->num_swaps - (int)VAR_10.video_frame_count) > VAR_1)
         {
            FUNC_5("vidtex completed with %u EGL buffer swaps, but %u video frames",
                           VAR_4->num_swaps, (int)VAR_10.video_frame_count);
         }
         else
         {
            VAR_11 = 0;
         }
      }

      FUNC_2(VAR_8);
   }

   FUNC_10(VAR_4);

   return VAR_11;
}
