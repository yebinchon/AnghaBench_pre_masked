
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_10__ {unsigned int duration_ms; } ;
struct TYPE_9__ {scalar_t__ video_frame_count; } ;
struct TYPE_11__ {int wd_timer; int timer; TYPE_2__ opts; scalar_t__ camera; int created; int thread; TYPE_1__ stats; int video_output; scalar_t__ connection; } ;
typedef TYPE_3__ SVP_T ;
typedef int MMAL_STATUS_T ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int *,char*,int *,int ,TYPE_3__*) ;
 int FUNC_6 (int *,unsigned int) ;

int FUNC_7(SVP_T *VAR_8)
{
   MMAL_STATUS_T VAR_9;
   VCOS_STATUS_T VAR_10;


   FUNC_4(VAR_8);


   FUNC_3(VAR_8);

   if (VAR_8->connection)
   {

      VAR_9 = FUNC_1(VAR_8->connection);
      FUNC_0(VAR_9, "Failed to create connection");
   }


   VAR_9 = FUNC_2(VAR_8, VAR_8->video_output, VAR_6);
   FUNC_0(VAR_9, "Failed to enable output port");


   VAR_8->stats.video_frame_count = 0;


   VAR_10 = FUNC_5(&VAR_8->thread, "svp-worker", ((void*)0), VAR_7, VAR_8);
   FUNC_0((VAR_10 == VAR_5 ? VAR_1 : VAR_0), "Failed to create connection");

   VAR_8->created |= VAR_3;


   if (VAR_8->camera)
   {
      unsigned VAR_11 = VAR_8->opts.duration_ms;
      FUNC_6(&VAR_8->timer, ((VAR_11 == 0) ? VAR_2 : VAR_11));
   }


   FUNC_6(&VAR_8->wd_timer, VAR_4);

   return 0;

error:
   return -1;
}
