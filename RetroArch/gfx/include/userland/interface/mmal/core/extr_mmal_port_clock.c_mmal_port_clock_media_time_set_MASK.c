
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* clock; } ;
struct TYPE_6__ {scalar_t__ is_reference; int clock; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;

MMAL_STATUS_T FUNC_3(MMAL_PORT_T *VAR_1, int64_t VAR_2)
{
   MMAL_STATUS_T VAR_3;

   VAR_3 = FUNC_1(VAR_1->priv->clock->clock, VAR_2);
   if (VAR_3 != VAR_0)
   {
      FUNC_0("clock media-time update ignored");
      return VAR_3;
   }

   if (VAR_1->priv->clock->is_reference)
      VAR_3 = FUNC_2(VAR_1, VAR_2);

   return VAR_3;
}
