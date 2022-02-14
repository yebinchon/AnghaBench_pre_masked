
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {int queue; } ;
struct TYPE_10__ {scalar_t__ buffer_num; int name; TYPE_1__* priv; } ;
struct TYPE_9__ {int pf_send; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_POOL_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,TYPE_2__*,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_PORT_T* VAR_3, MMAL_POOL_T* VAR_4)
{
   MMAL_STATUS_T VAR_5 = VAR_2;
   uint32_t VAR_6;
   MMAL_BUFFER_HEADER_T *VAR_7;

   if (!VAR_3->priv->pf_send)
      return VAR_1;

   FUNC_1("%s port %p, pool: %p", VAR_3->name, VAR_3, VAR_4);


   for (VAR_6 = 0; VAR_6 < VAR_3->buffer_num; VAR_6++)
   {
      VAR_7 = FUNC_4(VAR_4->queue);
      if (!VAR_7)
      {
         FUNC_0("too few buffers in the pool");
         VAR_5 = VAR_0;
         break;
      }

      VAR_5 = FUNC_3(VAR_3, VAR_7);
      if (VAR_5 != VAR_2)
      {
         FUNC_0("failed to send buffer to port");
         FUNC_2(VAR_7);
         break;
      }
   }

   return VAR_5;
}
