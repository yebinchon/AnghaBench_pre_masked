
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* clock; } ;
struct TYPE_6__ {scalar_t__ buffer_info_reporting; } ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MMAL_CLOCK_BUFFER_INFO_T ;


 int FUNC_0 (TYPE_3__*,int const*) ;

void FUNC_1(MMAL_PORT_T *VAR_0, const MMAL_CLOCK_BUFFER_INFO_T *VAR_1)
{
   if (VAR_0->priv->clock->buffer_info_reporting)
      FUNC_0(VAR_0, VAR_1);
}
