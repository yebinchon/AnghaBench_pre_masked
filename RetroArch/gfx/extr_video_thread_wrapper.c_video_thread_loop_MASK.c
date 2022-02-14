
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct video_viewport {scalar_t__ full_height; scalar_t__ full_width; scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_7__ {int updated; int lock; scalar_t__* msg; int pitch; int count; int height; int width; int buffer; } ;
struct TYPE_8__ {scalar_t__ send_cmd; int alive; int focus; int has_windowed; int lock; int cond_cmd; struct video_viewport vp; TYPE_2__ frame; int driver_data; TYPE_1__* driver; int cmd_data; int cond_thread; } ;
typedef TYPE_3__ thread_video_t ;
typedef int thread_packet_t ;
struct TYPE_6__ {int (* frame ) (int ,int ,int ,int ,int ,int ,scalar_t__*,int *) ;int (* viewport_info ) (int ,struct video_viewport*) ;scalar_t__ (* has_windowed ) (int ) ;scalar_t__ (* focus ) (int ) ;scalar_t__ (* alive ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,struct video_viewport*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_12(void *VAR_1)
{
   thread_video_t *VAR_2 = (thread_video_t*)VAR_1;

   for (;;)
   {
      thread_packet_t VAR_3;
      bool VAR_4 = 0;

      FUNC_2(VAR_2->lock);
      while (VAR_2->send_cmd == VAR_0 && !VAR_2->frame.updated)
         FUNC_1(VAR_2->cond_thread, VAR_2->lock);
      if (VAR_2->frame.updated)
         VAR_4 = 1;



      VAR_3 = VAR_2->cmd_data;

      FUNC_3(VAR_2->lock);

      if (FUNC_11(VAR_2, &VAR_3))
         return;

      if (VAR_4)
      {
         struct video_viewport VAR_5;
         bool VAR_6 = 0;
         bool VAR_7 = 0;
         bool VAR_8 = 0;
         bool VAR_9 = 1;

         VAR_5.x = 0;
         VAR_5.y = 0;
         VAR_5.width = 0;
         VAR_5.height = 0;
         VAR_5.full_width = 0;
         VAR_5.full_height = 0;

         FUNC_2(VAR_2->frame.lock);

         FUNC_9(VAR_2);

         if (VAR_2->driver && VAR_2->driver->frame)
         {
            video_frame_info_t VAR_10;
            FUNC_10(&VAR_10);

            VAR_6 = VAR_2->driver->frame(VAR_2->driver_data,
                  VAR_2->frame.buffer, VAR_2->frame.width, VAR_2->frame.height,
                  VAR_2->frame.count,
                  VAR_2->frame.pitch, *VAR_2->frame.msg ? VAR_2->frame.msg : ((void*)0),
                  &VAR_10);
         }

         FUNC_3(VAR_2->frame.lock);

         if (VAR_2->driver && VAR_2->driver->alive)
            VAR_7 = VAR_6 && VAR_2->driver->alive(VAR_2->driver_data);

         if (VAR_2->driver && VAR_2->driver->focus)
            VAR_8 = VAR_6 && VAR_2->driver->focus(VAR_2->driver_data);

         if (VAR_2->driver && VAR_2->driver->has_windowed)
            VAR_9 = VAR_6 && VAR_2->driver->has_windowed(VAR_2->driver_data);

         if (VAR_2->driver && VAR_2->driver->viewport_info)
            VAR_2->driver->viewport_info(VAR_2->driver_data, &VAR_5);

         FUNC_2(VAR_2->lock);
         VAR_2->alive = VAR_7;
         VAR_2->focus = VAR_8;
         VAR_2->has_windowed = VAR_9;
         VAR_2->frame.updated = 0;
         VAR_2->vp = VAR_5;
         FUNC_0(VAR_2->cond_cmd);
         FUNC_3(VAR_2->lock);
      }
   }
}
