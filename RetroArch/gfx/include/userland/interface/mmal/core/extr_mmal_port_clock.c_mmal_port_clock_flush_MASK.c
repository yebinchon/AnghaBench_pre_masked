
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* clock; } ;
struct TYPE_6__ {int queue; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_1)
{
   MMAL_BUFFER_HEADER_T *VAR_2;


   VAR_2 = FUNC_1(VAR_1->priv->clock->queue);
   while (VAR_2)
   {
      FUNC_0(VAR_1, VAR_2);
      VAR_2 = FUNC_1(VAR_1->priv->clock->queue);
   }

   return VAR_0;
}
