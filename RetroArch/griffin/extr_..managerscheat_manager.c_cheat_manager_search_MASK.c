
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int msg ;
typedef enum cheat_search_type { ____Placeholder_cheat_search_type } cheat_search_type ;
struct TYPE_2__ {unsigned char* curr_memory_buf; unsigned char* prev_memory_buf; unsigned int num_memory_buffers; unsigned int total_memory_size; unsigned int* matches; unsigned int search_exact_value; scalar_t__ num_matches; scalar_t__* memory_size_list; int * memory_buf_list; int search_eqminus_value; int search_eqplus_value; int big_endian; int search_bit_size; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,unsigned int*,unsigned int*,unsigned int*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (unsigned char*,int ,scalar_t__) ;
 int FUNC_2 (unsigned int*,int ,unsigned int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_7 (char*,int,char*,scalar_t__) ;
 unsigned int FUNC_8 (unsigned int,unsigned char**) ;

__attribute__((used)) static int FUNC_9(enum cheat_search_type VAR_7)
{
   char VAR_8[100];
   unsigned char *VAR_9 = VAR_6.curr_memory_buf;
   unsigned char *VAR_10 = VAR_6.prev_memory_buf;
   unsigned int VAR_11 = 0;
   unsigned int VAR_12 = 0;
   unsigned int VAR_13 = 0;
   unsigned int VAR_14 = 0;
   unsigned int VAR_15 = 1;
   unsigned int VAR_16 = 8;
   unsigned int VAR_17 = 0;
   unsigned int VAR_18 = 0;
   bool VAR_19 = 0;

   if (VAR_6.num_memory_buffers == 0)
   {
      FUNC_6(FUNC_5(VAR_4), 1, 180, 1, ((void*)0), VAR_2, VAR_1);
      return 0;
   }

   FUNC_0(VAR_6.search_bit_size, &VAR_15, &VAR_14, &VAR_16);


   for (VAR_11 = 0; VAR_11 < VAR_6.total_memory_size; VAR_11 = VAR_11 + VAR_15)
   {
      unsigned VAR_20;

      VAR_17 = FUNC_8(VAR_11, &VAR_9);

      switch (VAR_15)
      {
         case 2:
            VAR_12 = VAR_6.big_endian ?
               (*(VAR_9 + VAR_11 - VAR_17) * 256) + *(VAR_9 + VAR_11 + 1 - VAR_17) :
               *(VAR_9 + VAR_11 - VAR_17) + (*(VAR_9 + VAR_11 + 1 - VAR_17) * 256);
            VAR_13 = VAR_6.big_endian ?
               (*(VAR_10 + VAR_11) * 256) + *(VAR_10 + VAR_11 + 1) :
               *(VAR_10 + VAR_11) + (*(VAR_10 + VAR_11 + 1) * 256);
            break;
         case 4:
            VAR_12 = VAR_6.big_endian ?
               (*(VAR_9 + VAR_11 - VAR_17) * 256 * 256 * 256) + (*(VAR_9 + VAR_11 + 1 - VAR_17) * 256 * 256) + (*(VAR_9 + VAR_11 + 2 - VAR_17) * 256) + *(VAR_9 + VAR_11 + 3 - VAR_17) :
               *(VAR_9 + VAR_11 - VAR_17) + (*(VAR_9 + VAR_11 + 1 - VAR_17) * 256) + (*(VAR_9 + VAR_11 + 2 - VAR_17) * 256 * 256) + (*(VAR_9 + VAR_11 + 3 - VAR_17) * 256 * 256 * 256);
            VAR_13 = VAR_6.big_endian ?
               (*(VAR_10 + VAR_11) * 256 * 256 * 256) + (*(VAR_10 + VAR_11 + 1) * 256 * 256) + (*(VAR_10 + VAR_11 + 2) * 256) + *(VAR_10 + VAR_11 + 3) :
               *(VAR_10 + VAR_11) + (*(VAR_10 + VAR_11 + 1) * 256) + (*(VAR_10 + VAR_11 + 2) * 256 * 256) + (*(VAR_10 + VAR_11 + 3) * 256 * 256 * 256);
            break;
         case 1:
         default:
            VAR_12 = *(VAR_9 - VAR_17 + VAR_11);
            VAR_13 = *(VAR_10 + VAR_11);
            break;
      }

      for (VAR_20 = 0; VAR_20 < 8 / VAR_16; VAR_20++)
      {
         unsigned int VAR_21 = (VAR_12 >> (VAR_20 * VAR_16)) & VAR_14;
         unsigned int VAR_22 = (VAR_13 >> (VAR_20 * VAR_16)) & VAR_14;
         unsigned int VAR_23;

         if (VAR_16 < 8)
            VAR_23 = *(VAR_6.matches + VAR_11) & (VAR_14 << (VAR_20 * VAR_16));
         else
            VAR_23 = *(VAR_6.matches + VAR_11);

         if (VAR_23 > 0)
         {
            bool VAR_24 = 0;
            switch (VAR_7)
            {
               case 133:
                  VAR_24 = (VAR_21 == VAR_6.search_exact_value);
                  break;
               case 130:
                  VAR_24 = (VAR_21 < VAR_22);
                  break;
               case 132:
                  VAR_24 = (VAR_21 > VAR_22);
                  break;
               case 129:
                  VAR_24 = (VAR_21 <= VAR_22);
                  break;
               case 131:
                  VAR_24 = (VAR_21 >= VAR_22);
                  break;
               case 136:
                  VAR_24 = (VAR_21 == VAR_22);
                  break;
               case 128:
                  VAR_24 = (VAR_21 != VAR_22);
                  break;
               case 134:
                  VAR_24 = (VAR_21 == VAR_22 + VAR_6.search_eqplus_value);
                  break;
               case 135:
                  VAR_24 = (VAR_21 == VAR_22 - VAR_6.search_eqminus_value);
                  break;
            }

            if (!VAR_24)
            {
               if (VAR_16 < 8)
                  *(VAR_6.matches + VAR_11) = *(VAR_6.matches + VAR_11) &
                     ((~(VAR_14 << (VAR_20 * VAR_16))) & 0xFF);
               else
                  FUNC_2(VAR_6.matches + VAR_11, 0, VAR_15);
               if (VAR_6.num_matches > 0)
                  VAR_6.num_matches--;
            }
         }
      }
   }

   VAR_17 = 0;

   for (VAR_18 = 0; VAR_18 < VAR_6.num_memory_buffers; VAR_18++)
   {
      FUNC_1(VAR_6.prev_memory_buf + VAR_17, VAR_6.memory_buf_list[VAR_18], VAR_6.memory_size_list[VAR_18]);
      VAR_17 += VAR_6.memory_size_list[VAR_18];
   }

   FUNC_7(VAR_8, sizeof(VAR_8), FUNC_5(VAR_3), VAR_6.num_matches);
   VAR_8[sizeof(VAR_8) - 1] = 0;

   FUNC_6(VAR_8, 1, 180, 1, ((void*)0), VAR_2, VAR_1);





   return 0;
}
