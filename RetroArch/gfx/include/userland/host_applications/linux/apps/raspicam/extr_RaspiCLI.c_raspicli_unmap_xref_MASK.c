
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const mmal_mode; char const* mode; } ;
typedef TYPE_1__ XREF_T ;



const char *FUNC_0(const int VAR_0, XREF_T *VAR_1, int VAR_2)
{
   int VAR_3;

   for (VAR_3=0; VAR_3<VAR_2; VAR_3++)
   {
      if (VAR_0 == VAR_1[VAR_3].mmal_mode)
      {
         return VAR_1[VAR_3].mode;
      }
   }
   return ((void*)0);
}
