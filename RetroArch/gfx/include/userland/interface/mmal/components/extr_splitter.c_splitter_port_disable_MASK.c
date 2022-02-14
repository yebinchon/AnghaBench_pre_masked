
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; int index; TYPE_3__* component; } ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {TYPE_1__* module; } ;
struct TYPE_7__ {int enabled_flags; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_1)
{
   if (VAR_1->type == VAR_0)
      VAR_1->component->priv->module->enabled_flags &= ~(1<<VAR_1->index);


   return FUNC_0(VAR_1);
}
