
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* clock; } ;
struct TYPE_6__ {scalar_t__ is_reference; int clock; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MMAL_CLOCK_UPDATE_THRESHOLD_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int const*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int const*) ;

MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_1,
                                                   const MMAL_CLOCK_UPDATE_THRESHOLD_T *VAR_2)
{
   MMAL_STATUS_T VAR_3;

   VAR_3 = FUNC_0(VAR_1->priv->clock->clock, VAR_2);
   if (VAR_3 != VAR_0)
      return VAR_3;

   if (VAR_1->priv->clock->is_reference)
      VAR_3 = FUNC_1(VAR_1, VAR_2);

   return VAR_3;
}
