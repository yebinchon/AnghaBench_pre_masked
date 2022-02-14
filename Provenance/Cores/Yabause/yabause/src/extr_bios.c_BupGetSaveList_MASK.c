
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* filename; int* comment; int language; int datasize; scalar_t__ blocksize; scalar_t__ week; scalar_t__ minute; scalar_t__ hour; scalar_t__ day; scalar_t__ month; scalar_t__ year; } ;
typedef TYPE_1__ saveinfo_struct ;
typedef scalar_t__ s8 ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int*,int*,int*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

saveinfo_struct *FUNC_5(u32 VAR_0, int *VAR_1)
{
   u32 VAR_2;
   u32 VAR_3;
   u32 VAR_4;
   u32 VAR_5;
   saveinfo_struct *VAR_6;
   int VAR_7=0;
   u32 VAR_8, VAR_9;
   u32 VAR_10;

   VAR_2 = FUNC_2(VAR_0, &VAR_3, &VAR_4, &VAR_5);


   if (VAR_2 == 1 || FUNC_1(VAR_0) != 0)
   {
      *VAR_1 = 0;
      return ((void*)0);
   }

   for (VAR_8 = ((2 * VAR_5) << 1); VAR_8 < (VAR_3 << 1); VAR_8 += (VAR_5 << 1))
   {

      if (((s8)FUNC_3(VAR_4 + VAR_8 + 1)) < 0)
         VAR_7++;
   }

   if ((VAR_6 = (saveinfo_struct *)FUNC_4(VAR_7 * sizeof(saveinfo_struct))) == ((void*)0))
   {
      *VAR_1 = 0;
      return ((void*)0);
   }

   *VAR_1 = VAR_7;

   VAR_7 = 0;

   for (VAR_8 = ((2 * VAR_5) << 1); VAR_8 < (VAR_3 << 1); VAR_8 += (VAR_5 << 1))
   {

      if (((s8)FUNC_3(VAR_4 + VAR_8 + 1)) < 0)
      {
         VAR_10 = VAR_4 + VAR_8;


         for (VAR_9 = 0; VAR_9 < 11; VAR_9++)
            VAR_6[VAR_7].filename[VAR_9] = FUNC_3(VAR_10+0x9+(VAR_9 * 2));
         VAR_6[VAR_7].filename[11] = '\0';


         for (VAR_9 = 0; VAR_9 < 10; VAR_9++)
            VAR_6[VAR_7].comment[VAR_9] = FUNC_3(VAR_10+0x21+(VAR_9 * 2));
         VAR_6[VAR_7].comment[10] = '\0';


         VAR_6[VAR_7].language = FUNC_3(VAR_10+0x1F);


         VAR_6[VAR_7].year = 0;
         VAR_6[VAR_7].month = 0;
         VAR_6[VAR_7].day = 0;
         VAR_6[VAR_7].hour = 0;
         VAR_6[VAR_7].minute = 0;
         VAR_6[VAR_7].week = 0;


         VAR_6[VAR_7].datasize = (FUNC_3(VAR_10+0x3D) << 24) |
                                    (FUNC_3(VAR_10+0x3F) << 16) |
                                    (FUNC_3(VAR_10+0x41) << 8) |
                                    FUNC_3(VAR_10+0x43);


         VAR_6[VAR_7].blocksize = FUNC_0(VAR_10+0x45, VAR_5) + 1;
         VAR_7++;
      }
   }

   return VAR_6;
}
