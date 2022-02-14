
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct netplay_connection {scalar_t__ mode; scalar_t__ stall_frame; int active; } ;
struct delta_frame {scalar_t__* real_input_state; scalar_t__* self_state; int * state; scalar_t__ have_remote; } ;
typedef scalar_t__ retro_time_t ;
struct TYPE_12__ {int size; int * data; int * data_const; } ;
typedef TYPE_1__ retro_ctx_serialize_info_t ;
struct TYPE_13__ {size_t run_ptr; scalar_t__ run_frame_count; scalar_t__ stall; scalar_t__ self_frame_count; scalar_t__ input_latency_frames; size_t self_ptr; int connected_players; scalar_t__ self_mode; scalar_t__ other_frame_count; size_t other_ptr; int catch_up; int force_reset; size_t replay_ptr; scalar_t__ replay_frame_count; int force_rewind; scalar_t__ unread_frame_count; int is_replay; int quirks; int frame_run_time_sum; size_t frame_run_time_ptr; int frame_run_time_avg; size_t unread_ptr; int* read_frame_count; int server_frame_count; scalar_t__ catch_up_time; int catch_up_behind; size_t connections_size; struct netplay_connection* connections; scalar_t__ is_server; scalar_t__* frame_run_time; struct delta_frame* buffer; int state_size; scalar_t__ have_updown_device; scalar_t__ desync; } ;
typedef TYPE_2__ netplay_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (TYPE_2__*,struct netplay_connection*,scalar_t__) ;
 scalar_t__ FUNC_16 (TYPE_2__*,struct delta_frame*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,struct delta_frame*,scalar_t__) ;
 int FUNC_18 (TYPE_2__*,struct delta_frame*) ;
 scalar_t__ FUNC_19 (TYPE_2__*,size_t,int) ;
 int FUNC_20 (TYPE_2__*) ;

void FUNC_21(netplay_t *VAR_8, bool VAR_9)
{
   uint32_t VAR_10, VAR_11;


   if (!VAR_9)
   {
      VAR_8->run_ptr = FUNC_0(VAR_8->run_ptr);
      VAR_8->run_frame_count++;
   }


   if ((!VAR_9 || VAR_8->stall == VAR_7) &&
       VAR_8->self_frame_count <
       VAR_8->run_frame_count + VAR_8->input_latency_frames)
   {
      VAR_8->self_ptr = FUNC_0(VAR_8->self_ptr);
      VAR_8->self_frame_count++;
   }


   if ((VAR_8->is_server && (VAR_8->connected_players<=1)) ||
       (VAR_8->self_mode < VAR_2) ||
       (VAR_8->desync))
   {
      VAR_8->other_frame_count = VAR_8->self_frame_count;
      VAR_8->other_ptr = VAR_8->self_ptr;


      if (VAR_8->catch_up)
      {
         VAR_8->catch_up = 0;
         FUNC_13();
         FUNC_11();
      }
      return;
   }


   if (VAR_8->force_reset)
   {
      FUNC_6();
      VAR_8->force_reset = 0;
   }

   VAR_8->replay_ptr = VAR_8->other_ptr;
   VAR_8->replay_frame_count = VAR_8->other_frame_count;


   if (!VAR_8->force_rewind)
   {
      bool VAR_12 = 1;



      while (VAR_8->other_frame_count < VAR_8->unread_frame_count &&
             VAR_8->other_frame_count < VAR_8->run_frame_count)
      {
         struct delta_frame *VAR_13 = &VAR_8->buffer[VAR_8->other_ptr];


         if (FUNC_19(VAR_8, VAR_8->other_ptr, 1))
         {
            VAR_12 = 0;
            break;
         }

         FUNC_18(VAR_8, VAR_13);
         VAR_8->other_ptr = FUNC_0(VAR_8->other_ptr);
         VAR_8->other_frame_count++;
      }
      VAR_8->replay_ptr = VAR_8->other_ptr;
      VAR_8->replay_frame_count = VAR_8->other_frame_count;

      if (VAR_12)
      {
         while (VAR_8->replay_frame_count < VAR_8->run_frame_count)
         {
            if (FUNC_19(VAR_8, VAR_8->replay_ptr, 1))
               break;
            VAR_8->replay_ptr = FUNC_0(VAR_8->replay_ptr);
            VAR_8->replay_frame_count++;
         }
      }
   }



   if (VAR_8->force_rewind ||
       VAR_8->replay_frame_count < VAR_8->run_frame_count)
   {
      retro_ctx_serialize_info_t VAR_14;


      VAR_8->is_replay = 1;




      if (VAR_8->have_updown_device)
      {
         VAR_8->replay_ptr = FUNC_1(VAR_8->replay_ptr);
         VAR_8->replay_frame_count--;



         FUNC_7();



         VAR_8->replay_ptr = FUNC_0(VAR_8->replay_ptr);
         VAR_8->replay_frame_count++;
      }

      if (VAR_8->quirks & VAR_6)

         FUNC_20(VAR_8);

      VAR_14.data = ((void*)0);
      VAR_14.data_const = VAR_8->buffer[VAR_8->replay_ptr].state;
      VAR_14.size = VAR_8->state_size;

      if (!FUNC_9(&VAR_14))
      {
         FUNC_2("Netplay savestate loading failed: Prepare for desync!\n");
      }

      while (VAR_8->replay_frame_count < VAR_8->run_frame_count)
      {
         retro_time_t VAR_15, VAR_16;
         struct delta_frame *VAR_17 = &VAR_8->buffer[VAR_8->replay_ptr];

         VAR_14.data = VAR_17->state;
         VAR_14.size = VAR_8->state_size;
         VAR_14.data_const = ((void*)0);

         VAR_15 = FUNC_10();


         FUNC_14(VAR_14.data, 0, VAR_14.size);
         FUNC_8(&VAR_14);
         if (VAR_8->replay_frame_count < VAR_8->unread_frame_count)
            FUNC_18(VAR_8, VAR_17);


         FUNC_19(VAR_8, VAR_8->replay_ptr, 1);




         FUNC_7();



         VAR_8->replay_ptr = FUNC_0(VAR_8->replay_ptr);
         VAR_8->replay_frame_count++;
         VAR_16 = FUNC_10() - VAR_15;
         VAR_8->frame_run_time_sum -= VAR_8->frame_run_time[VAR_8->frame_run_time_ptr];
         VAR_8->frame_run_time[VAR_8->frame_run_time_ptr] = VAR_16;
         VAR_8->frame_run_time_sum += VAR_16;
         VAR_8->frame_run_time_ptr++;
         if (VAR_8->frame_run_time_ptr >= VAR_4)
            VAR_8->frame_run_time_ptr = 0;
      }


      VAR_8->frame_run_time_avg = VAR_8->frame_run_time_sum / VAR_4;

      if (VAR_8->unread_frame_count < VAR_8->run_frame_count)
      {
         VAR_8->other_ptr = VAR_8->unread_ptr;
         VAR_8->other_frame_count = VAR_8->unread_frame_count;
      }
      else
      {
         VAR_8->other_ptr = VAR_8->run_ptr;
         VAR_8->other_frame_count = VAR_8->run_frame_count;
      }
      VAR_8->is_replay = 0;
      VAR_8->force_rewind = 0;
   }

   if (VAR_8->is_server)
   {
      uint32_t VAR_18;

      VAR_10 = VAR_11 = VAR_8->unread_frame_count;


      for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
      {
         if (!(VAR_8->connected_players & (1<<VAR_18)))
            continue;
         if (VAR_8->read_frame_count[VAR_18] > VAR_11)
            VAR_11 = VAR_8->read_frame_count[VAR_18];
      }
   }
   else
      VAR_10 = VAR_11 = VAR_8->server_frame_count;


   if (VAR_8->catch_up)
   {

      if (VAR_8->self_frame_count + 1 >= VAR_10)
      {
         VAR_8->catch_up = 0;
         FUNC_13();
         FUNC_11();
      }

   }
   else if (!VAR_9)
   {
      if (VAR_8->self_frame_count + 3 < VAR_10)
      {
         retro_time_t VAR_19 = FUNC_10();
         uint32_t VAR_20 = VAR_10 - VAR_8->self_frame_count;



         if (VAR_8->catch_up_time == 0)
         {

            VAR_8->catch_up_time = VAR_19;
            VAR_8->catch_up_behind = VAR_20;

         }
         else if (VAR_19 - VAR_8->catch_up_time > VAR_0)
         {

            if (VAR_8->catch_up_behind <= VAR_20)
            {

               VAR_8->catch_up = 1;
               VAR_8->catch_up_time = 0;
               FUNC_12();
               FUNC_11();
            }
            else
            {

               VAR_8->catch_up_time = VAR_19;
               VAR_8->catch_up_behind = VAR_20;
            }
         }

      }
      else if (VAR_8->self_frame_count + 3 < VAR_11)
      {
         size_t VAR_21;
         VAR_8->catch_up_time = 0;



         for (VAR_21 = 0; VAR_21 < VAR_8->connections_size; VAR_21++)
         {
            uint32_t VAR_22;
            struct netplay_connection *VAR_23 = &VAR_8->connections[VAR_21];

            if (!VAR_23->active ||
                VAR_23->mode != VAR_3)
               continue;

            VAR_22 = (uint32_t)(VAR_21 + 1);


            if (VAR_8->self_frame_count + 3 < VAR_8->read_frame_count[VAR_22])
            {

               if (VAR_23->stall_frame + VAR_5 <
                     VAR_8->self_frame_count)
               {
                  VAR_23->stall_frame = VAR_8->self_frame_count;
                  FUNC_15(VAR_8, VAR_23,
                     VAR_8->read_frame_count[VAR_22] -
                     VAR_8->self_frame_count + 1);
               }
            }
         }
      }
      else
         VAR_8->catch_up_time = 0;
   }
   else
      VAR_8->catch_up_time = 0;
}
