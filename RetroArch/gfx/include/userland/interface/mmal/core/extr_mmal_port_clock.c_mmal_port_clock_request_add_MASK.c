
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {TYPE_1__* clock; } ;
struct TYPE_5__ {int clock; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef scalar_t__ MMAL_PORT_CLOCK_REQUEST_CB ;
typedef int MMAL_CLOCK_VOID_FP ;


 int FUNC_0 (int ,int ,int ,void*,int ) ;
 int VAR_0 ;

MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_1, int64_t VAR_2,
      MMAL_PORT_CLOCK_REQUEST_CB VAR_3, void *VAR_4)
{
   return FUNC_0(VAR_1->priv->clock->clock, VAR_2,
                                 VAR_0, VAR_4, (MMAL_CLOCK_VOID_FP)VAR_3);
}
