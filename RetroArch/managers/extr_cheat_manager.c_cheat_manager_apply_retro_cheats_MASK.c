
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int address_mask; scalar_t__ handler; unsigned int address; int cheat_type; unsigned int value; unsigned int repeat_count; unsigned int repeat_add_to_address; scalar_t__ repeat_add_to_value; int big_endian; int memory_search_size; int state; } ;
struct TYPE_3__ {unsigned int size; unsigned char* curr_memory_buf; unsigned int total_memory_size; TYPE_2__* cheats; int big_endian; int memory_initialized; } ;


 scalar_t__ VAR_0 ;







 int FUNC_0 (TYPE_2__*,unsigned int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,unsigned int*,unsigned int*,unsigned int*) ;
 TYPE_1__ VAR_1 ;
 unsigned int FUNC_3 (unsigned int,unsigned char**) ;

void FUNC_4(void)
{
   unsigned VAR_2;
   unsigned int VAR_3;
   unsigned int VAR_4 = 0;
   unsigned int VAR_5 = 1;
   unsigned int VAR_6 = 8;
   unsigned int VAR_7 = 0;
   bool VAR_8 = 1;

   if ((!VAR_1.cheats))
      return;

   for (VAR_2 = 0; VAR_2 < VAR_1.size; VAR_2++)
   {
      unsigned char *VAR_9 = ((void*)0);
      bool VAR_10 = 0;
      unsigned int VAR_11 = 0;
      unsigned int VAR_12 = 0;
      unsigned int VAR_13 = 0;
      unsigned int VAR_14 = VAR_1.cheats[VAR_2].address_mask;

      if (VAR_1.cheats[VAR_2].handler != VAR_0 || !VAR_1.cheats[VAR_2].state)
         continue;
      if (!VAR_1.memory_initialized)
         FUNC_1(((void*)0), 0);



      if (!VAR_1.memory_initialized)
         return;

      if (!VAR_8)
      {
         VAR_8 = 1;
         continue;
      }
      FUNC_2(VAR_1.cheats[VAR_2].memory_search_size, &VAR_5, &VAR_4, &VAR_6);

      VAR_9 = VAR_1.curr_memory_buf;
      VAR_11 = VAR_1.cheats[VAR_2].address;

      VAR_3 = FUNC_3(VAR_11, &VAR_9);

      switch (VAR_5)
      {
         case 2:
            VAR_7 = VAR_1.big_endian ?
               (*(VAR_9 + VAR_11 - VAR_3) * 256) + *(VAR_9 + VAR_11 + 1 - VAR_3) :
               *(VAR_9 + VAR_11 - VAR_3) + (*(VAR_9 + VAR_11 + 1 - VAR_3) * 256);
            break;
         case 4:
            VAR_7 = VAR_1.big_endian ?
               (*(VAR_9 + VAR_11 - VAR_3) * 256 * 256 * 256) + (*(VAR_9 + VAR_11 + 1 - VAR_3) * 256 * 256) + (*(VAR_9 + VAR_11 + 2 - VAR_3) * 256) + *(VAR_9 + VAR_11 + 3 - VAR_3) :
               *(VAR_9 + VAR_11 - VAR_3) + (*(VAR_9 + VAR_11 + 1 - VAR_3) * 256) + (*(VAR_9 + VAR_11 + 2 - VAR_3) * 256 * 256) + (*(VAR_9 + VAR_11 + 3 - VAR_3) * 256 * 256 * 256);
            break;
         case 1:
         default:
            VAR_7 = *(VAR_9 + VAR_11 - VAR_3);
            break;
      }

      FUNC_0(&VAR_1.cheats[VAR_2], VAR_7);

      switch (VAR_1.cheats[VAR_2].cheat_type)
      {
         case 128:
            VAR_10 = 1;
            VAR_12 = VAR_1.cheats[VAR_2].value;
            break;
         case 133:
            VAR_10 = 1;
            VAR_12 = VAR_7 + VAR_1.cheats[VAR_2].value;
            break;
         case 134:
            VAR_10 = 1;
            VAR_12 = VAR_7 - VAR_1.cheats[VAR_2].value;
            break;
         case 132:
            if (!(VAR_7 == VAR_1.cheats[VAR_2].value))
               VAR_8 = 0;
            break;
         case 129:
            if (!(VAR_7 != VAR_1.cheats[VAR_2].value))
               VAR_8 = 0;
            break;
         case 130:
            if (!(VAR_1.cheats[VAR_2].value < VAR_7))
               VAR_8 = 0;
            break;
         case 131:
            if (!(VAR_1.cheats[VAR_2].value > VAR_7))
               VAR_8 = 0;
            break;
      }

      if (VAR_10)
      {
         for (VAR_13 = 1; VAR_13 <= VAR_1.cheats[VAR_2].repeat_count; VAR_13++)
         {
            switch (VAR_5)
            {
               case 2:
                  if (VAR_1.cheats[VAR_2].big_endian)
                  {
                     *(VAR_9 + VAR_11 - VAR_3) = (VAR_12 >> 8) & 0xFF;
                     *(VAR_9 + VAR_11 + 1 - VAR_3) = VAR_12 & 0xFF;
                  }
                  else
                  {
                     *(VAR_9 + VAR_11 - VAR_3) = VAR_12 & 0xFF;
                     *(VAR_9 + VAR_11 + 1 - VAR_3) = (VAR_12 >> 8) & 0xFF;
                  }
                  break;
               case 4:
                  if (VAR_1.cheats[VAR_2].big_endian)
                  {
                     *(VAR_9 + VAR_11 - VAR_3) = (VAR_12 >> 24) & 0xFF;
                     *(VAR_9 + VAR_11 + 1 - VAR_3) = (VAR_12 >> 16) & 0xFF;
                     *(VAR_9 + VAR_11 + 2 - VAR_3) = (VAR_12 >> 8) & 0xFF;
                     *(VAR_9 + VAR_11 + 3 - VAR_3) = VAR_12 & 0xFF;
                  }
                  else
                  {
                     *(VAR_9 + VAR_11 - VAR_3) = VAR_12 & 0xFF;
                     *(VAR_9 + VAR_11 + 1 - VAR_3) = (VAR_12 >> 8) & 0xFF;
                     *(VAR_9 + VAR_11 + 2 - VAR_3) = (VAR_12 >> 16) & 0xFF;
                     *(VAR_9 + VAR_11 + 3 - VAR_3) = (VAR_12 >> 24) & 0xFF;
                  }
                  break;
               case 1:
                  if (VAR_6 < 8)
                  {
                     unsigned VAR_15;
                     unsigned char VAR_16 = *(VAR_9 + VAR_11 - VAR_3);

                     for (VAR_15 = 0; VAR_15 < 8; VAR_15++)
                     {
                        if ((VAR_14 >> VAR_15) & 0x01)
                        {
                           VAR_4 = (~(1 << VAR_15) & 0xFF);

                           VAR_16 = VAR_16 & VAR_4;

                           VAR_16 = VAR_16 | (((VAR_12 >> VAR_15) & 0x01) << VAR_15);
                        }
                     }

                     *(VAR_9 + VAR_11 - VAR_3) = VAR_16;
                  }
                  else
                     *(VAR_9 + VAR_11 - VAR_3) = VAR_12 & 0xFF;
                  break;
               default:
                  *(VAR_9 + VAR_11 - VAR_3) = VAR_12 & 0xFF;
                  break;
            }

            VAR_12 += VAR_1.cheats[VAR_2].repeat_add_to_value;

            if (VAR_4 != 0)
               VAR_12 = VAR_12 % VAR_4;

            if (VAR_6 < 8)
            {
               unsigned int VAR_17;
               for (VAR_17 = 0; VAR_17 < VAR_1.cheats[VAR_2].repeat_add_to_address; VAR_17++)
               {
                  VAR_14 = (VAR_14 << VAR_4) & 0xFF;

                  if (VAR_14 == 0)
                  {
                     VAR_14 = VAR_4;
                     VAR_11++;
                  }
               }
            }
            else
               VAR_11 += (VAR_1.cheats[VAR_2].repeat_add_to_address * VAR_5);

            VAR_11 = VAR_11 % VAR_1.total_memory_size;

            VAR_3 = FUNC_3(VAR_11, &VAR_9);
         }
      }
   }
}
