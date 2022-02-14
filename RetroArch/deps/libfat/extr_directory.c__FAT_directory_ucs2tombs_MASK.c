
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char ucs2_t ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ mbstate_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const,TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_1 (char* VAR_1, const ucs2_t* VAR_2, size_t VAR_3)
{
   mbstate_t VAR_4 = {0};
   size_t VAR_5 = 0;
   int VAR_6;
   char VAR_7[VAR_0];
   int VAR_8;

   while (VAR_5 < VAR_3 - 1 && *VAR_2 != '\0')
   {
      VAR_6 = FUNC_0 (VAR_7, *VAR_2, &VAR_4);
      if (VAR_6 < 0)
         return -1;
      if (VAR_5 + VAR_6 < VAR_3 && VAR_6 > 0)
      {
         for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
            *VAR_1++ = VAR_7[VAR_8];
         VAR_2++;
         VAR_5 += VAR_6;
      }
      else
         break;
   }
   *VAR_1 = L'\0';

   return VAR_5;
}
