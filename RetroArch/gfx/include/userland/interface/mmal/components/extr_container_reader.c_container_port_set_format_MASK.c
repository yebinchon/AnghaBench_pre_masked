
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int writer; } ;
struct TYPE_12__ {TYPE_1__* priv; } ;
struct TYPE_11__ {int buffer_size_recommended; int buffer_size_min; int buffer_num_recommended; int buffer_num_min; int format; TYPE_3__* priv; TYPE_5__* component; } ;
struct TYPE_10__ {TYPE_2__* module; } ;
struct TYPE_9__ {int format; } ;
struct TYPE_8__ {TYPE_6__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_COMPONENT_T ;
typedef TYPE_6__ MMAL_COMPONENT_MODULE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_6)
{
   MMAL_COMPONENT_T *VAR_7 = VAR_6->component;
   MMAL_COMPONENT_MODULE_T *VAR_8 = VAR_7->priv->module;
   MMAL_STATUS_T VAR_9;

   if(!VAR_8->writer)
      return VAR_0;


   VAR_9 = FUNC_0(VAR_6->priv->module->format, VAR_6->format);
   if (VAR_9 != VAR_1)
      return VAR_9;

   VAR_6->buffer_num_min = VAR_2;
   VAR_6->buffer_num_recommended = VAR_4;
   VAR_6->buffer_size_min = VAR_3;
   VAR_6->buffer_size_recommended = VAR_5;
   return VAR_1;
}
