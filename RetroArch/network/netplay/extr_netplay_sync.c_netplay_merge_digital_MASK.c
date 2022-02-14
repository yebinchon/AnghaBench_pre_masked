
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct vote_count {size_t* votes; } ;
struct delta_frame {TYPE_2__** real_input; } ;
struct TYPE_7__ {int* device_share_modes; } ;
typedef TYPE_1__ netplay_t ;
typedef TYPE_2__* netplay_input_state_t ;
struct TYPE_8__ {size_t size; int client_num; int* data; int used; struct TYPE_8__* next; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 TYPE_2__* FUNC_0 (TYPE_1__*,struct delta_frame*,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(netplay_t *VAR_3,
      netplay_input_state_t VAR_4, struct delta_frame *VAR_5,
      uint32_t VAR_6, uint32_t VAR_7, const uint32_t *VAR_8)
{
   netplay_input_state_t VAR_9;
   uint32_t VAR_10, VAR_11, VAR_12;
   uint8_t VAR_13 = VAR_3->device_share_modes[VAR_6]
      & VAR_1;


   for (VAR_9 = VAR_5->real_input[VAR_6];
         VAR_9; VAR_9 = VAR_9->next)
   {
      if (!VAR_9->used || VAR_9->size != VAR_4->size)
         continue;
      VAR_7 |= 1<<VAR_9->client_num;
   }

   if (VAR_13 == VAR_2)
   {
      unsigned VAR_14, VAR_15;


      struct vote_count VAR_16[3];

      uint32_t VAR_17 = 0;

      for (VAR_14 = 0; VAR_14 < 3; VAR_14++)
         for (VAR_15 = 0; VAR_15 < 32; VAR_15++)
            VAR_16[VAR_14].votes[VAR_15] = 0;

      for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
      {
         if (!(VAR_7 & (1<<VAR_12)))
            continue;

         VAR_9 = FUNC_0(
               VAR_3, VAR_5, VAR_6, VAR_12);

         if (!VAR_9)
            continue;
         VAR_17++;

         for (VAR_10 = 0; VAR_10 < VAR_4->size; VAR_10++)
         {
            if (!VAR_8[VAR_10])
               continue;
            for (VAR_11 = 0; VAR_11 < 32; VAR_11++)
            {
               if (!(VAR_8[VAR_10] & (1<<VAR_11)))
                  continue;
               if (VAR_9->data[VAR_10] & (1<<VAR_11))
                  VAR_16[VAR_10].votes[VAR_11]++;
            }
         }
      }


      VAR_17 /= 2;
      for (VAR_10 = 0; VAR_10 < VAR_4->size; VAR_10++)
      {
         for (VAR_11 = 0; VAR_11 < 32; VAR_11++)
         {
            if (VAR_16[VAR_10].votes[VAR_11] > VAR_17)
               VAR_4->data[VAR_10] |= (1<<VAR_11);
         }
      }
   }
   else
   {
      for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
      {
         if (!(VAR_7 & (1<<VAR_12)))
            continue;
         VAR_9 = FUNC_0(
               VAR_3, VAR_5, VAR_6, VAR_12);

         if (!VAR_9)
            continue;
         for (VAR_10 = 0; VAR_10 < VAR_4->size; VAR_10++)
         {
            uint32_t VAR_18;
            if (!VAR_8[VAR_10])
               continue;
            VAR_18 = VAR_9->data[VAR_10];

            if (VAR_8[VAR_10] == (uint32_t) -1)
            {

               switch (VAR_13)
               {
                  case 128:
                     VAR_4->data[VAR_10] ^= VAR_18;
                     break;
                  default:
                     VAR_4->data[VAR_10] |= VAR_18;
               }

            }
            else
            {
               for (VAR_11 = 0; VAR_11 < 32; VAR_11++)
               {
                  if (!(VAR_8[VAR_10] & (1<<VAR_11)))
                     continue;
                  switch (VAR_13)
                  {
                     case 128:
                        VAR_4->data[VAR_10] ^= VAR_18 & (1<<VAR_11);
                        break;
                     default:
                        VAR_4->data[VAR_10] |= VAR_18 & (1<<VAR_11);
                  }
               }
            }
         }
      }

   }
}
