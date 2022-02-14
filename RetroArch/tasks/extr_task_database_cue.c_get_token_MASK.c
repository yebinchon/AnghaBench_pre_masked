
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int intfstream_t ;
typedef int int64_t ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int64_t FUNC_1(intfstream_t *VAR_1, char *VAR_2, uint64_t VAR_3)
{
   char *VAR_4 = VAR_2;
   int64_t VAR_5 = 0;
   int VAR_6 = 0;

   while (1)
   {
      int64_t VAR_7 = (int64_t)FUNC_0(VAR_1, VAR_4, 1);
      if (VAR_7 == 0)
         return 0;

      if (VAR_7 < 1)
      {
         switch (VAR_0)
         {
            case 128:
            case 129:
               continue;
            default:
               return -VAR_0;
         }
      }

      switch (*VAR_4)
      {
         case ' ':
         case '\t':
         case '\r':
         case '\n':
            if (VAR_4 == VAR_2)
               continue;

            if (!VAR_6)
            {
               *VAR_4 = '\0';
               return VAR_5;
            }
            break;
         case '\"':
            if (VAR_4 == VAR_2)
            {
               VAR_6 = 1;
               continue;
            }

            *VAR_4 = '\0';
            return VAR_5;
      }

      VAR_5++;
      VAR_4++;
      if (VAR_5 == (int64_t)VAR_3)
      {
         *VAR_4 = '\0';
         return VAR_5;
      }
   }
}
