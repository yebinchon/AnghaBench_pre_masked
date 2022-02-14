
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,int) ;

char *FUNC_2(char* VAR_0, const char *VAR_1, int VAR_2, bool VAR_3, unsigned VAR_4)
{
   unsigned VAR_5 = 0;
   unsigned VAR_6 = (unsigned)FUNC_0(VAR_1);
   unsigned VAR_7 = 1;

   while (VAR_5 < VAR_6)
   {
      unsigned VAR_8;
      int VAR_9 = (int)(&VAR_0[VAR_5] - VAR_0);


      for (VAR_8 = 1; VAR_8 <= (unsigned)VAR_2; VAR_8++)
      {
         const char *VAR_10;
         unsigned VAR_11;
         unsigned VAR_12 = VAR_5;


         if (VAR_5 == VAR_6)
         {
            VAR_0[VAR_5] = 0;
            return VAR_0;
         }

         VAR_10 = FUNC_1(&VAR_1[VAR_5], 1);
         VAR_11 = (unsigned)(VAR_10 - &VAR_1[VAR_5]);

         if (!VAR_3)
            VAR_8 += VAR_11 - 1;

         do
         {
            VAR_0[VAR_5] = VAR_1[VAR_5];
            VAR_11--;
            VAR_5++;
         } while(VAR_11);



         if (VAR_0[VAR_12] == '\n')
         {
            VAR_7++;
            VAR_8 = 1;
         }
      }


      if (VAR_1[VAR_5] == ' ')
      {
         if ((VAR_4 == 0 || VAR_7 < VAR_4))
         {
            VAR_0[VAR_5] = '\n';
            VAR_5++;
            VAR_7++;
         }
      }
      else
      {
         int VAR_13;


         for (VAR_13 = VAR_5; VAR_13 > 0; VAR_13--)
         {
            if (VAR_1[VAR_13] != ' ' || (VAR_4 != 0 && VAR_7 >= VAR_4))
               continue;

            VAR_0[VAR_13] = '\n';

            VAR_5 = VAR_13 + 1;
            VAR_7++;
            break;
         }

         if (&VAR_0[VAR_5] - VAR_0 == VAR_9)
            return VAR_0;
      }
   }

   VAR_0[VAR_5] = 0;

   return VAR_0;
}
