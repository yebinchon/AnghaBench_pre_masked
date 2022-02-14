
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* core; } ;
struct TYPE_6__ {int * pool_for_connection; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_1, MMAL_PORT_T *VAR_2)
{
   MMAL_POOL_T *VAR_3 = VAR_1->priv->core->pool_for_connection ?
      VAR_1->priv->core->pool_for_connection : VAR_2->priv->core->pool_for_connection;

   FUNC_0(VAR_3);
   VAR_1->priv->core->pool_for_connection =
      VAR_2->priv->core->pool_for_connection = ((void*)0);
   return VAR_0;
}
