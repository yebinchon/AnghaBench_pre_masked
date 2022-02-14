
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {scalar_t__ flags; int queue; scalar_t__ user_data; } ;
struct TYPE_7__ {scalar_t__ module; } ;
typedef int MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(MMAL_CONNECTION_T *VAR_1)
{
   MMAL_COMPONENT_T *VAR_2 = (MMAL_COMPONENT_T *)VAR_1->user_data;
   MMAL_BUFFER_HEADER_T *VAR_3;

   if (VAR_1->flags == VAR_0 &&
       (VAR_3 = FUNC_2(VAR_1->queue)) != ((void*)0))
   {
      FUNC_0((MMAL_GRAPH_PRIVATE_T *)VAR_2->priv->module,
         VAR_1, VAR_3);
      return;
   }

   FUNC_1(VAR_2);
}
