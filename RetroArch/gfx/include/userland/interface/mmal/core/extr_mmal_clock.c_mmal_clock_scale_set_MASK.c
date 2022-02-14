
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef long long int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_9__ {int den; int num; } ;
struct TYPE_10__ {scalar_t__ scale_inv; scalar_t__ scale; TYPE_1__ scale_rational; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_RATIONAL_T ;
typedef int MMAL_CLOCK_T ;
typedef TYPE_2__ MMAL_CLOCK_PRIVATE_T ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__) ;

MMAL_STATUS_T FUNC_6(MMAL_CLOCK_T *VAR_2, MMAL_RATIONAL_T VAR_3)
{
   MMAL_CLOCK_PRIVATE_T *VAR_4 = (MMAL_CLOCK_PRIVATE_T*)VAR_2;

   FUNC_1("new scale %d/%d", VAR_3.num, VAR_3.den);

   FUNC_0(VAR_4);

   FUNC_3(VAR_4);

   VAR_4->scale_rational = VAR_3;
   VAR_4->scale = FUNC_5(VAR_3);

   if (VAR_4->scale)
      VAR_4->scale_inv = (int32_t)((1LL << 32) / (int64_t)VAR_4->scale);
   else
      VAR_4->scale_inv = VAR_1;

   FUNC_2(VAR_4);

   FUNC_4(VAR_4);

   return VAR_0;
}
