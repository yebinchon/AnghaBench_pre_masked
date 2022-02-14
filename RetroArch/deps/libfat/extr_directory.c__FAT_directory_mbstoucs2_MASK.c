
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef char ucs2_t ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ mbstate_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,char const*,int ,TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_1 (ucs2_t* VAR_1, const char* VAR_2, size_t VAR_3)
{
   mbstate_t VAR_4 = {0};
   wchar_t VAR_5;
   int VAR_6;
   size_t VAR_7 = 0;

   while (VAR_7 < VAR_3-1 && *VAR_2 != '\0')
   {
      VAR_6 = FUNC_0 (&VAR_5, VAR_2, VAR_0, &VAR_4);
      if (VAR_6 > 0)
      {
         *VAR_1 = (ucs2_t)VAR_5;
         VAR_2 += VAR_6;
         VAR_1++;
         VAR_7++;
      }
      else if (VAR_6 == 0)
         break;
      else
         return -1;
   }
   *VAR_1 = '\0';

   return VAR_7;
}
