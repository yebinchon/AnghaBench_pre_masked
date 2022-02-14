
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* module; } ;
struct TYPE_6__ {int queue; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_BUFFER_HEADER_T *VAR_2, MMAL_PORT_T *VAR_3)
{
   MMAL_BUFFER_HEADER_T *VAR_4;
   MMAL_STATUS_T VAR_5;


   VAR_4 = FUNC_2(VAR_3->priv->module->queue);
   if (!VAR_4)
      return VAR_0;


   VAR_5 = FUNC_0(VAR_4, VAR_2);
   if (VAR_5 != VAR_1)
      goto error;


   FUNC_1(VAR_3, VAR_4);
   return VAR_1;

 error:
   FUNC_3(VAR_3->priv->module->queue, VAR_4);
   return VAR_5;
}
