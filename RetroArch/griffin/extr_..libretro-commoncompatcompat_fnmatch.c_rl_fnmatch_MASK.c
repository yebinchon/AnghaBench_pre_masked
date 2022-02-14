
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int FUNC_0(const char *VAR_1, const char *VAR_2, int VAR_3)
{
   int VAR_4;
   const char *VAR_5 = ((void*)0);
   int VAR_6 = 0;

   for (VAR_5 = VAR_1; *VAR_5 != '\0'; VAR_5++)
   {

      if ((*VAR_5 != '*') && (*VAR_2 == '\0'))
         return VAR_0;

      switch (*VAR_5)
      {

         case '*':



            do {
               VAR_5++;
               if (*VAR_5 == '\0')
                  return 0;
            } while (*VAR_5 == '*');



            do {






               if (*VAR_2 == '\0')
                  return VAR_0;

               VAR_4 = FUNC_0(VAR_5, VAR_2, VAR_3);
               VAR_2++;
            } while (VAR_4 != 0);

            return 0;

         case '[':
            VAR_6 = 0;
            for (VAR_5++; *VAR_5 != ']'; VAR_5++)
            {

               if (*VAR_5 == '\0')
                  return VAR_0;


               if (VAR_6)
                  continue;

               if (*VAR_5 == *VAR_2)
                  VAR_6 = 1;
            }


            if (!VAR_6)
               return VAR_0;

            VAR_2++;
            break;

         case '?':
            VAR_2++;
            break;

         case '\\':
            VAR_5++;




            if (*VAR_5 == '\0')
               return VAR_0;
         default:
            if (*VAR_5 != *VAR_2)
               return VAR_0;
            VAR_2++;
      }
   }


   if (*VAR_2 == '\0')
      return 0;
   return VAR_0;
}
