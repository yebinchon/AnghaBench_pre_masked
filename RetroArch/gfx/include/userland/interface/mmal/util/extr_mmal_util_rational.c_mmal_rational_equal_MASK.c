
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int num; scalar_t__ den; } ;
typedef TYPE_1__ MMAL_RATIONAL_T ;
typedef int MMAL_BOOL_T ;


 int VAR_0 ;

MMAL_BOOL_T FUNC_0(MMAL_RATIONAL_T VAR_1, MMAL_RATIONAL_T VAR_2)
{
   if (VAR_1.num != VAR_2.num && VAR_1.num * (int64_t)VAR_2.num == 0)
      return VAR_0;
   return VAR_1.num * (int64_t)VAR_2.den == VAR_2.num * (int64_t)VAR_1.den;
}
