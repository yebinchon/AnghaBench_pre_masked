
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int queue; } ;
struct TYPE_12__ {int name; TYPE_1__* priv; } ;
struct TYPE_11__ {int pf_send; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_POOL_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,TYPE_2__*,int ,TYPE_2__*,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_PORT_T* VAR_2, MMAL_PORT_T* VAR_3, MMAL_POOL_T* VAR_4)
{
   MMAL_STATUS_T VAR_5 = VAR_1;
   MMAL_BUFFER_HEADER_T *VAR_6;

   if (!VAR_2->priv->pf_send || !VAR_3->priv->pf_send)
      return VAR_0;

   FUNC_1("output %s %p, input %s %p, pool: %p", VAR_2->name, VAR_2, VAR_3->name, VAR_3, VAR_4);

   VAR_6 = FUNC_4(VAR_4->queue);
   while (VAR_6)
   {
      VAR_5 = FUNC_3(VAR_2, VAR_6);
      if (VAR_5 != VAR_1)
      {
         FUNC_0("failed to send buffer to clock port %s", VAR_2->name);
         FUNC_2(VAR_6);
         break;
      }

      VAR_6 = FUNC_4(VAR_4->queue);
      if (VAR_6)
      {
         VAR_5 = FUNC_3(VAR_3, VAR_6);
         if (VAR_5 != VAR_1)
         {
            FUNC_0("failed to send buffer to clock port %s", VAR_2->name);
            FUNC_2(VAR_6);
            break;
         }
         VAR_6 = FUNC_4(VAR_4->queue);
      }
   }

   return VAR_5;
}
