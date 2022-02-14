
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct netplay_connection {int stall; scalar_t__ mode; scalar_t__ stall_time; scalar_t__ active; int stall_frame; } ;
struct TYPE_14__ {int netplay_input_latency_frames_min; int run_ahead_frames; int netplay_input_latency_frames_range; } ;
struct TYPE_13__ {scalar_t__ run_ahead_enabled; } ;
struct TYPE_15__ {TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
typedef scalar_t__ retro_time_t ;
struct TYPE_16__ {int can_poll; scalar_t__ self_mode; int connected_players; scalar_t__ unread_frame_count; scalar_t__ run_frame_count; int frame_run_time_avg; int input_latency_frames; int stall; scalar_t__ self_frame_count; size_t connections_size; scalar_t__ stall_time; scalar_t__* read_frame_count; struct netplay_connection* connections; scalar_t__ is_server; scalar_t__ remote_paused; scalar_t__ stateless_mode; scalar_t__ connected_slaves; int run_ptr; } ;
typedef TYPE_4__ netplay_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

 void* VAR_8 ;




 TYPE_3__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,struct netplay_connection*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static bool FUNC_8(netplay_t *VAR_9)
{
   int VAR_10;
   uint32_t VAR_11;
   size_t VAR_12;

   VAR_9->can_poll = 0;

   if (!FUNC_2(VAR_9))
      goto catastrophe;


   if (VAR_9->self_mode == VAR_3)
      return 1;



   FUNC_7(VAR_9);
   if (VAR_9->stateless_mode &&
       (VAR_9->connected_players>1) &&
       VAR_9->unread_frame_count <= VAR_9->run_frame_count)
      VAR_10 = FUNC_5(VAR_9, 1);
   else
      VAR_10 = FUNC_5(VAR_9, 0);
   if (VAR_10 == -1)
      goto catastrophe;


   FUNC_6(VAR_9, VAR_9->run_ptr, 0);


   if (VAR_9->is_server && VAR_9->connected_slaves)
      FUNC_3(VAR_9);

   FUNC_7(VAR_9);



   if (VAR_9->frame_run_time_avg || VAR_9->stateless_mode)
   {

      unsigned VAR_13 = VAR_9->frame_run_time_avg ?
         (16666 / VAR_9->frame_run_time_avg) :
         0;
      unsigned VAR_14 = (VAR_9->run_frame_count > VAR_9->unread_frame_count) ?
         (VAR_9->run_frame_count - VAR_9->unread_frame_count) :
         0;
      settings_t *VAR_15 = FUNC_0();
      int VAR_16 = VAR_15->uints.netplay_input_latency_frames_min -
            (VAR_15->bools.run_ahead_enabled ? VAR_15->uints.run_ahead_frames : 0);
      int VAR_17 = VAR_16 + VAR_15->uints.netplay_input_latency_frames_range;



      if (VAR_13 > 2)
         VAR_13 -= 2;
      else
         VAR_13 = 0;


      if (VAR_9->stateless_mode)
      {


         if (VAR_9->input_latency_frames < VAR_16 ||
               (VAR_9->unread_frame_count == VAR_9->run_frame_count + 1 &&
                VAR_9->input_latency_frames < VAR_17))
            VAR_9->input_latency_frames++;
         else if (VAR_9->input_latency_frames > VAR_17 ||
               (VAR_9->unread_frame_count > VAR_9->run_frame_count + 2 &&
                VAR_9->input_latency_frames > VAR_16))
            VAR_9->input_latency_frames--;
      }
      else if (VAR_9->input_latency_frames < VAR_16 ||
               (VAR_13 < VAR_14 &&
                VAR_9->input_latency_frames < VAR_17))
      {


         VAR_9->input_latency_frames++;
      }
      else if (VAR_9->input_latency_frames > VAR_17 ||
               (VAR_13 > VAR_14 + 2 &&
                VAR_9->input_latency_frames > VAR_16))
      {

         VAR_9->input_latency_frames--;
      }
   }


   switch (VAR_9->stall)
   {
      case 130:
         {
            if (VAR_9->unread_frame_count + VAR_7 - 2
                  > VAR_9->self_frame_count)
            {
               VAR_9->stall = VAR_8;
               for (VAR_12 = 0; VAR_12 < VAR_9->connections_size; VAR_12++)
               {
                  struct netplay_connection *VAR_18 = &VAR_9->connections[VAR_12];
                  if (VAR_18->active && VAR_18->stall)
                     VAR_18->stall = VAR_8;
               }
            }
            break;
         }

      case 128:
         if (VAR_9->self_mode == VAR_4 || VAR_9->unread_frame_count > VAR_9->self_frame_count)
            VAR_9->stall = VAR_8;
         break;

      case 132:

         VAR_9->stall = VAR_8;
         break;

      case 129:

         if (VAR_9->connections[0].stall_frame == 0)
         {

            VAR_9->connections[0].stall = VAR_8;
            VAR_9->stall = VAR_8;
         }
         else
            VAR_9->connections[0].stall_frame--;
         break;
      case 131:

         break;
      default:
         break;
   }


   if (!VAR_9->stall)
   {

      if (VAR_9->self_mode == VAR_4 &&
          VAR_9->connected_players &&
          VAR_9->run_frame_count + VAR_9->input_latency_frames > VAR_9->self_frame_count)
      {
         VAR_9->stall = 132;
         VAR_9->stall_time = 0;
      }


      if (VAR_9->unread_frame_count + VAR_7
            <= VAR_9->self_frame_count)
      {
         VAR_9->stall = 130;
         VAR_9->stall_time = FUNC_1();


         if (VAR_9->is_server)
         {
            for (VAR_11 = 1; VAR_11 < VAR_0; VAR_11++)
            {
               struct netplay_connection *VAR_19;
               if (!(VAR_9->connected_players & (1<<VAR_11)))
                  continue;
               if (VAR_9->read_frame_count[VAR_11] > VAR_9->unread_frame_count)
                  continue;
               VAR_19 = &VAR_9->connections[VAR_11-1];
               if (VAR_19->active &&
                   VAR_19->mode == VAR_4)
               {
                  VAR_19->stall = 130;
                  VAR_19->stall_time = VAR_9->stall_time;
               }
            }
         }

      }


      if (!VAR_9->is_server &&
          (VAR_9->self_mode == VAR_6 ||
           VAR_9->self_mode == VAR_5) &&
          VAR_9->unread_frame_count <= VAR_9->self_frame_count)
      {
         VAR_9->stall = 128;
         VAR_9->stall_time = FUNC_1();
      }
   }


   if (VAR_9->stall && VAR_9->stall_time)
   {
      retro_time_t VAR_20 = FUNC_1();


      if (VAR_9->remote_paused)
         VAR_9->stall_time = VAR_20;
      else if (VAR_20 - VAR_9->stall_time >=
               (VAR_9->is_server ? VAR_2 :
                                          VAR_1))
      {

         if (VAR_9->is_server)
         {
            bool VAR_21 = 0;
            for (VAR_12 = 0; VAR_12 < VAR_9->connections_size; VAR_12++)
            {
               struct netplay_connection *VAR_22 = &VAR_9->connections[VAR_12];
               if (VAR_22->active &&
                   VAR_22->mode == VAR_4 &&
                   VAR_22->stall)
               {
                  FUNC_4(VAR_9, VAR_22);
                  VAR_21 = 1;
               }
            }

            if (VAR_21)
            {

               VAR_9->stall = VAR_8;
               return 1;
            }
         }
         else
            goto catastrophe;
         return 0;
      }
   }

   return 1;

catastrophe:
   for (VAR_12 = 0; VAR_12 < VAR_9->connections_size; VAR_12++)
      FUNC_4(VAR_9, &VAR_9->connections[VAR_12]);
   return 0;
}
