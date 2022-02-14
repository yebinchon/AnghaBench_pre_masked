
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_3__ {int den; scalar_t__ num; } ;
typedef TYPE_1__ MMAL_RATIONAL_T ;


 int VAR_0 ;
 int VAR_1 ;

int32_t FUNC_0(MMAL_RATIONAL_T VAR_2)
{
   int64_t VAR_3 = (int64_t)VAR_2.num << 16;
   if (VAR_2.den)
      VAR_3 /= VAR_2.den;

   if (VAR_3 > VAR_0)
      VAR_3 = VAR_0;
   else if (VAR_3 < VAR_1)
      VAR_3 = VAR_1;

   return (int32_t)VAR_3;
}
