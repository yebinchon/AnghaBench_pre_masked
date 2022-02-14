
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__** input; } ;
struct TYPE_9__ {TYPE_4__* component; TYPE_2__* priv; int format; } ;
struct TYPE_8__ {TYPE_1__* module; } ;
struct TYPE_7__ {scalar_t__ needs_configuring; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_2)
{
   MMAL_COMPONENT_T *VAR_3 = VAR_2->component;
   MMAL_PORT_T *VAR_4 = VAR_3->input[0];


   if (FUNC_1(VAR_2->format, VAR_4->format))
      return VAR_0;

   VAR_2->priv->module->needs_configuring = 0;
   FUNC_0(VAR_2->component);
   return VAR_1;
}
