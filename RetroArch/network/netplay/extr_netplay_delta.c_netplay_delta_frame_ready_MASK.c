
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct delta_frame {int used; scalar_t__ frame; int have_local; int* have_real; int * simlated_input; int * real_input; int * resolved_input; scalar_t__ crc; } ;
struct TYPE_3__ {scalar_t__ other_frame_count; } ;
typedef TYPE_1__ netplay_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

bool FUNC_1(netplay_t *VAR_2, struct delta_frame *VAR_3,
   uint32_t VAR_4)
{
   size_t VAR_5;
   if (VAR_3->used)
   {
      if (VAR_3->frame == VAR_4)
         return 1;


      if (VAR_2->other_frame_count <= VAR_3->frame)
         return 0;
   }

   VAR_3->used = 1;
   VAR_3->frame = VAR_4;
   VAR_3->crc = 0;

   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   {
      FUNC_0(VAR_3->resolved_input[VAR_5]);
      FUNC_0(VAR_3->real_input[VAR_5]);
      FUNC_0(VAR_3->simlated_input[VAR_5]);
   }
   VAR_3->have_local = 0;
   for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
      VAR_3->have_real[VAR_5] = 0;
   return 1;
}
