
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ run_frame_count; scalar_t__ self_frame_count; scalar_t__ unread_frame_count; int connected_players; scalar_t__* read_frame_count; scalar_t__ server_frame_count; scalar_t__ other_frame_count; int run_ptr; int other_ptr; int server_ptr; int * read_ptr; int self_ptr; } ;
typedef TYPE_1__ netplay_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(netplay_t *VAR_1)
{

   VAR_1->run_ptr = VAR_1->self_ptr;
   VAR_1->run_frame_count = VAR_1->self_frame_count;



   FUNC_0(VAR_1);

   if (VAR_1->unread_frame_count < VAR_1->run_frame_count)
   {
      uint32_t VAR_2;
      for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
      {
         if (!(VAR_1->connected_players & (1<<VAR_2)))
            continue;

         if (VAR_1->read_frame_count[VAR_2] < VAR_1->run_frame_count)
         {
            VAR_1->read_ptr[VAR_2] = VAR_1->run_ptr;
            VAR_1->read_frame_count[VAR_2] = VAR_1->run_frame_count;
         }
      }
      if (VAR_1->server_frame_count < VAR_1->run_frame_count)
      {
         VAR_1->server_ptr = VAR_1->run_ptr;
         VAR_1->server_frame_count = VAR_1->run_frame_count;
      }
      FUNC_0(VAR_1);
   }
   if (VAR_1->other_frame_count < VAR_1->run_frame_count)
   {
      VAR_1->other_ptr = VAR_1->run_ptr;
      VAR_1->other_frame_count = VAR_1->run_frame_count;
   }
}
