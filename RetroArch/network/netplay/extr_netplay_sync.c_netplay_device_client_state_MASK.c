
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct delta_frame {scalar_t__ frame; int * simlated_input; int * real_input; } ;
struct TYPE_4__ {scalar_t__* read_frame_count; } ;
typedef TYPE_1__ netplay_t ;
typedef int * netplay_input_state_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int * FUNC_1 (int *,int,int,int,int) ;

netplay_input_state_t FUNC_2(netplay_t *VAR_0,
      struct delta_frame *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
   uint32_t VAR_4 =
      FUNC_0(VAR_0, 1 << VAR_2);
   netplay_input_state_t VAR_5 =
      FUNC_1(
         &VAR_1->real_input[VAR_2], VAR_3,
         VAR_4, 0, 1);

   if (!VAR_5)
   {
      if (VAR_0->read_frame_count[VAR_3] > VAR_1->frame)
         return ((void*)0);
      VAR_5 = FUNC_1(&VAR_1->simlated_input[VAR_2],
            VAR_3, VAR_4, 0, 1);
   }
   return VAR_5;
}
