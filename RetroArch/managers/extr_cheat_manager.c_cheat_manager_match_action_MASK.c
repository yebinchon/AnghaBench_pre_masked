
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum cheat_match_action_type { ____Placeholder_cheat_match_action_type } cheat_match_action_type ;
struct TYPE_2__ {unsigned char* curr_memory_buf; unsigned char* prev_memory_buf; int num_matches; scalar_t__ num_memory_buffers; unsigned int total_memory_size; unsigned int* matches; int big_endian; int search_bit_size; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned int,int,int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int*,unsigned int*,unsigned int*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (unsigned int*,int ,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int,int,int *,int ,int ) ;
 unsigned int FUNC_5 (unsigned int,unsigned char**) ;

void FUNC_6(enum cheat_match_action_type VAR_6, unsigned int VAR_7, unsigned int *VAR_8, unsigned int *VAR_9,
      unsigned int *VAR_10, unsigned int *VAR_11)
{
   unsigned int VAR_12;
   unsigned int VAR_13;
   unsigned int VAR_14;
   unsigned int VAR_15 = 0;
   unsigned int VAR_16 = 1;
   unsigned int VAR_17 = 8;
   unsigned int VAR_18 = 0;
   unsigned int VAR_19 = 0;
   unsigned int VAR_20 = 0;
   unsigned char *VAR_21 = VAR_5.curr_memory_buf;
   unsigned char *VAR_22 = VAR_5.prev_memory_buf;
   unsigned int VAR_23 = 0;

   if (VAR_7 > VAR_5.num_matches - 1)
      return;

   if (VAR_5.num_memory_buffers == 0)
      return;

   FUNC_1(VAR_5.search_bit_size, &VAR_16, &VAR_15, &VAR_17);

   if (VAR_6 == 131)
      VAR_14 = *VAR_8;
   else
      VAR_14 = 0;

   for (VAR_13 = VAR_14; VAR_13 < VAR_5.total_memory_size; VAR_13 = VAR_13 + VAR_16)
   {
      VAR_20 = FUNC_5(VAR_13, &VAR_21);

      switch (VAR_16)
      {
      case 2:
         VAR_18 = VAR_5.big_endian ?
               (*(VAR_21 + VAR_13 - VAR_20) * 256) + *(VAR_21 + VAR_13 + 1 - VAR_20) :
               *(VAR_21 + VAR_13 - VAR_20) + (*(VAR_21 + VAR_13 + 1 - VAR_20) * 256);
         if (VAR_22)
            VAR_19 = VAR_5.big_endian ?
                  (*(VAR_22 + VAR_13) * 256) + *(VAR_22 + VAR_13 + 1) :
                  *(VAR_22 + VAR_13) + (*(VAR_22 + VAR_13 + 1) * 256);
         break;
      case 4:
         VAR_18 = VAR_5.big_endian ?
               (*(VAR_21 + VAR_13 - VAR_20) * 256 * 256 * 256) + (*(VAR_21 + VAR_13 + 1 - VAR_20) * 256 * 256) + (*(VAR_21 + VAR_13 + 2 - VAR_20) * 256) + *(VAR_21 + VAR_13 + 3 - VAR_20) :
               *(VAR_21 + VAR_13 - VAR_20) + (*(VAR_21 + VAR_13 + 1 - VAR_20) * 256) + (*(VAR_21 + VAR_13 + 2 - VAR_20) * 256 * 256) + (*(VAR_21 + VAR_13 + 3 - VAR_20) * 256 * 256 * 256);
         if (VAR_22)
            VAR_19 = VAR_5.big_endian ?
                  (*(VAR_22 + VAR_13) * 256 * 256 * 256) + (*(VAR_22 + VAR_13 + 1) * 256 * 256) + (*(VAR_22 + VAR_13 + 2) * 256) + *(VAR_22 + VAR_13 + 3) :
                  *(VAR_22 + VAR_13) + (*(VAR_22 + VAR_13 + 1) * 256) + (*(VAR_22 + VAR_13 + 2) * 256 * 256) + (*(VAR_22 + VAR_13 + 3) * 256 * 256 * 256);
         break;
      case 1:
      default:
         VAR_18 = *(VAR_21 + VAR_13 - VAR_20);
         if (VAR_22)
            VAR_19 = *(VAR_22 + VAR_13);
         break;
      }

      if (VAR_6 == 131)
      {
         *VAR_11 = VAR_18;
         *VAR_10 = VAR_19;
         return;
      }

      if (!VAR_22)
         return;

      for (VAR_12 = 0; VAR_12 < 8 / VAR_17; VAR_12++)
      {
         unsigned int VAR_24;

         if (VAR_17 < 8)
         {
            VAR_24 = *(VAR_5.matches + VAR_13) & (VAR_15 << (VAR_12 * VAR_17));
            if (VAR_24)
            {
               if (VAR_7 == VAR_23)
               {
                  switch (VAR_6)
                  {
                  case 131:
                     return;
                  case 128:
                     *VAR_8 = VAR_13;
                     *VAR_9 = (VAR_15 << (VAR_12 * VAR_17));
                     *VAR_11 = VAR_18;
                     *VAR_10 = VAR_19;
                     return;
                  case 130:
                     if (!FUNC_0(VAR_5.search_bit_size, VAR_13, (VAR_15 << (VAR_12 * VAR_17)),
                           VAR_5.big_endian, VAR_18))
                        FUNC_4(FUNC_3(VAR_2), 1, 180, 1, ((void*)0), VAR_1, VAR_0);
                     else
                        FUNC_4(FUNC_3(VAR_3), 1, 180, 1, ((void*)0), VAR_1, VAR_0);
                     return;
                  case 129:
                     if (VAR_17 < 8)
                        *(VAR_5.matches + VAR_13) = *(VAR_5.matches + VAR_13) &
                              ((~(VAR_15 << (VAR_12 * VAR_17))) & 0xFF);
                     else
                        FUNC_2(VAR_5.matches + VAR_13, 0, VAR_16);
                     if (VAR_5.num_matches > 0)
                        VAR_5.num_matches--;
                     FUNC_4(FUNC_3(VAR_4), 1, 180, 1, ((void*)0), VAR_1, VAR_0);
                     return;
                  }
                  return;
               }
               VAR_23++;
            }
         }
         else
         {
            VAR_24 = *(VAR_5.matches + VAR_13);
            if (VAR_24)
            {
               if (VAR_7 == VAR_23)
               {
                  switch (VAR_6)
                  {
                  case 131:
                     return;
                  case 128:
                     *VAR_8 = VAR_13;
                     *VAR_9 = 0xFF;
                     *VAR_11 = VAR_18;
                     *VAR_10 = VAR_19;
                     return;
                  case 130:
                     if (!FUNC_0(VAR_5.search_bit_size, VAR_13, 0xFF,
                           VAR_5.big_endian, VAR_18))
                        FUNC_4(FUNC_3(VAR_2), 1, 180, 1, ((void*)0), VAR_1, VAR_0);
                     else
                        FUNC_4(FUNC_3(VAR_3), 1, 180, 1, ((void*)0), VAR_1, VAR_0);
                     return;
                  case 129:
                     if (VAR_17 < 8)
                        *(VAR_5.matches + VAR_13) = *(VAR_5.matches + VAR_13) &
                              ((~(VAR_15 << (VAR_12 * VAR_17))) & 0xFF);
                     else
                        FUNC_2(VAR_5.matches + VAR_13, 0, VAR_16);
                     if (VAR_5.num_matches > 0)
                        VAR_5.num_matches--;
                     FUNC_4(FUNC_3(VAR_4), 1, 180, 1, ((void*)0), VAR_1, VAR_0);
                     return;
                  }
               }

               VAR_23++;
            }
         }
      }
   }

}
