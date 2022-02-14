
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int string; } ;
typedef TYPE_1__ string_pair_t ;
typedef int MMAL_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(int *VAR_2, string_pair_t *VAR_3, size_t VAR_4, const char *VAR_5)
{
   size_t VAR_6;
   for (VAR_6=0; VAR_6<VAR_4; VAR_6++)
   {
      if (FUNC_0(VAR_5, VAR_3[VAR_6].string) == 0)
      {
         *VAR_2 = VAR_3[VAR_6].value;
         return VAR_1;
      }
   }
   return VAR_0;
}
