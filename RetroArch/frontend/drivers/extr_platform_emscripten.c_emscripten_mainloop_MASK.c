
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int context_data; int (* cb_swap_buffers ) (int ,TYPE_1__*) ;int runloop_is_paused; int runloop_is_slowmotion; int input_driver_nonblock_state; scalar_t__ black_frame_insertion; } ;
typedef TYPE_1__ video_frame_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(void)
{
   int VAR_4;
   video_frame_info_t VAR_5;

   FUNC_0();

   VAR_2++;

   FUNC_8(&VAR_5);



   if (
         VAR_5.black_frame_insertion
         && !VAR_5.input_driver_nonblock_state
         && !VAR_5.runloop_is_slowmotion
         && !VAR_5.runloop_is_paused)
   {
      if ((VAR_2 & 1) == 0)
      {
         FUNC_3(VAR_1);
         VAR_5.cb_swap_buffers(VAR_5.context_data, &VAR_5);
         return;
      }
   }

   if (VAR_3 != 0)
   {
      if (--VAR_3 == 0)
         FUNC_1(VAR_0, ((void*)0));
   }

   VAR_4 = FUNC_5();

   FUNC_7();

   if (VAR_4 != -1)
      return;

   FUNC_4(((void*)0));
   FUNC_2(0);
}
