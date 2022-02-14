
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int den; int num; } ;
typedef TYPE_1__ MMAL_RATIONAL_T ;


 int FUNC_0 (int,int) ;

MMAL_RATIONAL_T FUNC_1(MMAL_RATIONAL_T VAR_0, MMAL_RATIONAL_T VAR_1)
{
   MMAL_RATIONAL_T VAR_2;
   int32_t VAR_3 = FUNC_0(VAR_0.den, VAR_1.den);
   VAR_0.den /= VAR_3;
   VAR_0.num = VAR_0.num * (VAR_1.den / VAR_3) + VAR_1.num * VAR_0.den;
   VAR_3 = FUNC_0(VAR_0.num, VAR_3);
   VAR_0.num /= VAR_3;
   VAR_0.den *= VAR_1.den / VAR_3;

   VAR_2.num = VAR_0.num;
   VAR_2.den = VAR_0.den;
   return VAR_2;
}
