
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int buffer_size_min; int buffer_size; TYPE_1__* priv; int buffer_num_min; int buffer_num; TYPE_2__* format; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int pf_parameter_get; int pf_parameter_set; int pf_disable; int pf_enable; } ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MMAL_ES_SPECIFIC_FORMAT_T ;
typedef int MMAL_ES_FORMAT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(MMAL_PORT_T *VAR_6)
{
   VAR_6->format->type = VAR_1;
   VAR_6->buffer_num_min = VAR_0;
   VAR_6->buffer_num = VAR_6->buffer_num_min;
   VAR_6->buffer_size_min = sizeof(MMAL_ES_FORMAT_T) + sizeof(MMAL_ES_SPECIFIC_FORMAT_T);
   VAR_6->buffer_size = VAR_6->buffer_size_min;


   VAR_6->priv->pf_enable = VAR_3;
   VAR_6->priv->pf_disable = VAR_2;
   VAR_6->priv->pf_parameter_set = VAR_5;
   VAR_6->priv->pf_parameter_get = VAR_4;


}
