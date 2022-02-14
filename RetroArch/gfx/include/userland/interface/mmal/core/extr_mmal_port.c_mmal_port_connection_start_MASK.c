
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; TYPE_2__* priv; } ;
struct TYPE_10__ {TYPE_1__* core; } ;
struct TYPE_9__ {int * pool_for_connection; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_3, MMAL_PORT_T *VAR_4)
{
   MMAL_PORT_T *VAR_5 = VAR_3->type == VAR_2 ? VAR_3 : VAR_4;
   MMAL_PORT_T *VAR_6 = VAR_4->type == VAR_1 ? VAR_4 : VAR_3;
   MMAL_POOL_T *VAR_7 = VAR_3->priv->core->pool_for_connection ?
      VAR_3->priv->core->pool_for_connection : VAR_4->priv->core->pool_for_connection;
   MMAL_STATUS_T VAR_8;

   if (VAR_5->type == VAR_0 && VAR_6->type == VAR_0)
   {


      VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);
   }
   else
   {

      VAR_8 = FUNC_1(VAR_5, VAR_7);
   }

   return VAR_8;
}
