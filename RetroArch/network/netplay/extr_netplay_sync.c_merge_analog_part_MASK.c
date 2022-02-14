
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct delta_frame {TYPE_2__** real_input; } ;
struct TYPE_7__ {int* device_share_modes; } ;
typedef TYPE_1__ netplay_t ;
typedef TYPE_2__* netplay_input_state_t ;
typedef size_t int32_t ;
typedef size_t int16_t ;
struct TYPE_8__ {scalar_t__ size; int client_num; int* data; int used; struct TYPE_8__* next; } ;


 size_t VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (size_t) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,struct delta_frame*,size_t,size_t) ;

__attribute__((used)) static void FUNC_2(netplay_t *VAR_2,
      netplay_input_state_t VAR_3, struct delta_frame *VAR_4,
      uint32_t VAR_5, uint32_t VAR_6, uint32_t VAR_7, uint8_t VAR_8)
{
   netplay_input_state_t VAR_9;
   uint32_t VAR_10, VAR_11 = 0;
   uint8_t VAR_12 = VAR_2->device_share_modes[VAR_5]
      & VAR_1;
   int32_t VAR_13 = 0, VAR_14;


   for (VAR_9 = VAR_4->real_input[VAR_5]; VAR_9; VAR_9 = VAR_9->next)
   {
      if (!VAR_9->used || VAR_9->size != VAR_3->size)
         continue;
      VAR_6 |= 1<<VAR_9->client_num;
   }

   for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   {
      if (!(VAR_6 & (1<<VAR_10)))
         continue;
      VAR_9 = FUNC_1(
            VAR_2, VAR_4, VAR_5, VAR_10);
      if (!VAR_9)
         continue;
      VAR_11++;
      VAR_14 = (int16_t) ((VAR_9->data[VAR_7]>>VAR_8) & 0xFFFF);
      switch (VAR_12)
      {
         case 128:
            VAR_13 += (int32_t) VAR_14;
            break;
         default:
            if (FUNC_0(VAR_14) > FUNC_0(VAR_13) ||
                (FUNC_0(VAR_14) == FUNC_0(VAR_13) && VAR_14 > VAR_13))
               VAR_13 = VAR_14;
      }
   }

   if (VAR_12 == 128)
      if (VAR_11 > 0)
         VAR_13 /= VAR_11;

   VAR_3->data[VAR_7] |= ((uint32_t) (uint16_t) VAR_13) << VAR_8;
}
