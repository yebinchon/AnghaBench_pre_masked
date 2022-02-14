
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * queue; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_QUEUE_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_POOL_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_PORT_T *VAR_1, MMAL_POOL_T *VAR_2)
{
   MMAL_STATUS_T VAR_3 = VAR_0;
   MMAL_QUEUE_T *VAR_4;

   if (!VAR_2)
      return VAR_0;

   VAR_4 = VAR_2->queue;
   while (VAR_3 == VAR_0 && FUNC_0(VAR_4) > 0)
      VAR_3 = FUNC_1(VAR_1, VAR_4);

   return VAR_3;
}
