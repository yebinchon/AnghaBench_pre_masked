
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wint_t ;
typedef scalar_t__ wchar_t ;
typedef int ps ;
struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ mbstate_t ;


 int VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*,char const*,scalar_t__,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 char const* FUNC_2 (char const*,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6 (char* VAR_4, const char* VAR_5)
{
   bool VAR_6 = 0;
   int VAR_7 = 0;
   int VAR_8 = 0;
   wchar_t VAR_9;
   int VAR_10;
   mbstate_t VAR_11 = {0};
   int VAR_12 = 0;
   const char* VAR_13;
   int VAR_14;


   while (VAR_5[VAR_7] == '.')
   {
      VAR_7 ++;
      VAR_6 = 1;
   }


   while (VAR_8 < 8 && VAR_5[VAR_7] != '.' && VAR_5[VAR_7] != '\0')
   {
      VAR_12 = FUNC_0(&VAR_9, VAR_5 + VAR_7, VAR_3 - VAR_7, &VAR_11);
      if (VAR_12 < 0)
         return -1;

      VAR_10 = FUNC_5(FUNC_4((wint_t)VAR_9));


      if (FUNC_5((wint_t)VAR_9) != VAR_10)
         VAR_6 = 1;

      if (VAR_10 == ' ')
      {

         VAR_6 = 1;
         VAR_7 += VAR_12;
         continue;
      }

      if (VAR_10 == VAR_0)
      {
         VAR_10 = '_';
         VAR_6 = 1;
      }

      if (FUNC_2 (VAR_1, VAR_10) != ((void*)0))
      {

         VAR_10 = '_';
         VAR_6 = 1;
      }

      VAR_4[VAR_8] = (char)VAR_10;
      VAR_8++;
      VAR_7 += VAR_12;
   }


   if (VAR_5[VAR_7] != '.' && VAR_5[VAR_7] != '\0')
      VAR_6 = 1;


   VAR_13 = FUNC_3 (VAR_5, '.');

   if (VAR_13 != ((void*)0) && VAR_13 != FUNC_2 (VAR_5, '.'))
      VAR_6 = 1;

   if (VAR_13 != ((void*)0) && VAR_13[1] != '\0')
   {
      VAR_13++;
      VAR_4[VAR_8] = '.';
      VAR_8++;
      FUNC_1 (&VAR_11, 0, sizeof(VAR_11));
      for (VAR_14 = 0; VAR_14 < VAR_2 && *VAR_13 != '\0'; VAR_14++)
      {
         VAR_12 = FUNC_0(&VAR_9, VAR_13, VAR_3 - VAR_7, &VAR_11);
         if (VAR_12 < 0)
            return -1;
         VAR_10 = FUNC_5(FUNC_4((wint_t)VAR_9));


         if (FUNC_5((wint_t)VAR_9) != VAR_10)
            VAR_6 = 1;
         if (VAR_10 == ' ')
         {

            VAR_6 = 1;
            VAR_13 += VAR_12;
            continue;
         }
         if (VAR_10 == VAR_0)
         {
            VAR_10 = '_';
            VAR_6 = 1;
         }
         if (FUNC_2 (VAR_1, VAR_10) != ((void*)0))
         {

            VAR_10 = '_';
            VAR_6 = 1;
         }

         VAR_4[VAR_8] = (char)VAR_10;
         VAR_8++;
         VAR_13 += VAR_12;
      }

      if (*VAR_13 != '\0')
         VAR_6 = 1;
   }

   VAR_4[VAR_8] = '\0';
   if (VAR_6)
      return VAR_8;
   return 0;
}
