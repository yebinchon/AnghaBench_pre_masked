
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; TYPE_1__* priv; } ;
struct TYPE_5__ {int (* pf_set_format ) (TYPE_2__*) ;} ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef int MMAL_PORT_BH_CB_T ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_2, MMAL_PORT_BH_CB_T VAR_3)
{
   FUNC_0(VAR_3);



   if (VAR_2->type == VAR_0)
      return VAR_2->priv->pf_set_format(VAR_2);

   return VAR_1;
}
