
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct delta_frame {TYPE_2__** resolved_input; } ;
struct TYPE_4__ {size_t replay_ptr; size_t run_ptr; unsigned int* config_devices; struct delta_frame* buffer; scalar_t__ is_replay; } ;
typedef TYPE_1__ netplay_t ;
typedef TYPE_2__* netplay_input_state_t ;
typedef int const int16_t ;
struct TYPE_5__ {scalar_t__ size; int* data; int used; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

 unsigned int VAR_2 ;
 unsigned int VAR_3 ;



 unsigned int VAR_4 ;

 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static int16_t FUNC_1(netplay_t *VAR_5,
      unsigned VAR_6, unsigned VAR_7,
      unsigned VAR_8, unsigned VAR_9)
{
   size_t VAR_10 = VAR_5->is_replay ?
      VAR_5->replay_ptr : VAR_5->run_ptr;
   struct delta_frame *VAR_11;
   netplay_input_state_t VAR_12;

   const uint32_t *VAR_13 = ((void*)0);

   if (VAR_6 >= VAR_0)
      return 0;




   if (VAR_7 != 131 &&
       (VAR_5->config_devices[VAR_6]&VAR_4) != VAR_7)
   {
      for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
      {
         if ((VAR_5->config_devices[VAR_6]&VAR_4) == VAR_7)
            break;
      }
      if (VAR_6 == VAR_0)
         return 0;
   }

   VAR_11 = &VAR_5->buffer[VAR_10];
   VAR_12 = VAR_11->resolved_input[VAR_6];
   if (!VAR_12 || !VAR_12->used)
      return 0;

   if (VAR_12->size == 0)
      return 0;
   VAR_13 = VAR_12->data;

   switch (VAR_7)
   {
      case 131:
         if (VAR_9 == VAR_2)
            return VAR_13[0];
         return ((1 << VAR_9) & VAR_13[0]) ? 1 : 0;

      case 132:
         {
            uint32_t VAR_14;
            if (VAR_12->size != 3)
               return 0;
            VAR_14 = VAR_13[1 + VAR_8];
            return (int16_t)(uint16_t)(VAR_14 >> (VAR_9 * 16));
         }

      case 128:
      case 129:
         if (VAR_12->size != 2)
            return 0;
         if (VAR_9 <= VAR_3)
            return (int16_t)(uint16_t)(VAR_13[1] >> (VAR_9 * 16));
         return ((1 << VAR_9) & VAR_13[0]) ? 1 : 0;
      case 130:
         {
            unsigned VAR_15, VAR_16;
            unsigned VAR_17 = FUNC_0(VAR_9);
            if (VAR_17 == VAR_1)
               return 0;
            VAR_15 = VAR_17 / 32;
            VAR_16 = VAR_17 % 32;
            if (VAR_15 <= VAR_12->size)
               return ((1U<<VAR_16) & VAR_13[VAR_15]) ? 1 : 0;
            return 0;
         }
      default:
         return 0;
   }
}
