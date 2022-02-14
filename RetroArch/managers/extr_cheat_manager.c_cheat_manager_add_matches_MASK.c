
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int msg ;
struct TYPE_2__ {unsigned char* curr_memory_buf; int num_matches; int size; unsigned int total_memory_size; unsigned int* matches; int big_endian; int search_bit_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,unsigned int,int,int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int*,unsigned int*,unsigned int*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_6 (char*,int,char*,int) ;
 unsigned int FUNC_7 (unsigned int,unsigned char**) ;

int FUNC_8(const char *VAR_8,
      const char *VAR_9, unsigned VAR_10, size_t VAR_11, size_t VAR_12)
{
   char VAR_13[100];
   bool VAR_14 = 0;
   unsigned VAR_15 = 0;
   unsigned int VAR_16 = 0;
   unsigned int VAR_17 = 0;
   unsigned int VAR_18 = 1;
   unsigned int VAR_19 = 8;
   unsigned int VAR_20 = 0;
   unsigned int VAR_21 = 0;
   unsigned int VAR_22 = 0;
   unsigned char *VAR_23 = VAR_7.curr_memory_buf;

   if (VAR_7.num_matches + VAR_7.size > 100)
   {
      FUNC_5(FUNC_4(VAR_5), 1, 180, 1, ((void*)0), VAR_2, VAR_1);
      return 0;
   }
   FUNC_1(VAR_7.search_bit_size, &VAR_18, &VAR_17, &VAR_19);

   for (VAR_16 = 0; VAR_16 < VAR_7.total_memory_size; VAR_16 = VAR_16 + VAR_18)
   {
      VAR_22 = FUNC_7(VAR_16, &VAR_23);

      switch (VAR_18)
      {
      case 2:
         VAR_20 = VAR_7.big_endian ?
               (*(VAR_23 + VAR_16 - VAR_22) * 256) + *(VAR_23 + VAR_16 + 1 - VAR_22) :
               *(VAR_23 + VAR_16 - VAR_22) + (*(VAR_23 + VAR_16 + 1 - VAR_22) * 256);
         break;
      case 4:
         VAR_20 = VAR_7.big_endian ?
               (*(VAR_23 + VAR_16 - VAR_22) * 256 * 256 * 256) + (*(VAR_23 + VAR_16 + 1 - VAR_22) * 256 * 256) + (*(VAR_23 + VAR_16 + 2 - VAR_22) * 256) + *(VAR_23 + VAR_16 + 3 - VAR_22) :
               *(VAR_23 + VAR_16 - VAR_22) + (*(VAR_23 + VAR_16 + 1 - VAR_22) * 256) + (*(VAR_23 + VAR_16 + 2 - VAR_22) * 256 * 256) + (*(VAR_23 + VAR_16 + 3 - VAR_22) * 256 * 256 * 256);
         break;
      case 1:
      default:
         VAR_20 = *(VAR_23 - VAR_22 + VAR_16);
         break;
      }
      for (VAR_15 = 0; VAR_15 < 8 / VAR_19; VAR_15++)
      {
         unsigned int VAR_24;

         if (VAR_19 < 8)
         {
            VAR_24 = *(VAR_7.matches + VAR_16) & (VAR_17 << (VAR_15 * VAR_19));
            if (VAR_24)
            {
               if (!FUNC_0(VAR_7.search_bit_size, VAR_16, (VAR_17 << (VAR_15 * VAR_19)),
                     VAR_7.big_endian, VAR_20))
               {
                  FUNC_5(FUNC_4(VAR_3), 1, 180, 1, ((void*)0), VAR_2, VAR_1);
                  return 0;
               }
               VAR_21++;
            }
         }
         else
         {
            VAR_24 = *(VAR_7.matches + VAR_16);
            if (VAR_24)
            {
               if (!FUNC_0(VAR_7.search_bit_size, VAR_16, 0xFF,
                     VAR_7.big_endian, VAR_20))
               {
                  FUNC_5(FUNC_4(VAR_3), 1, 180, 1, ((void*)0), VAR_2, VAR_1);
                  return 0;
               }
               VAR_21++;
            }
         }

      }
   }

   FUNC_6(VAR_13, sizeof(VAR_13), FUNC_4(VAR_4), VAR_7.num_matches);
   VAR_13[sizeof(VAR_13) - 1] = 0;

   FUNC_5(VAR_13, 1, 180, 1, ((void*)0), VAR_2, VAR_1);






   return 0;
}
