
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_16__ {scalar_t__ (* pf_payload_alloc ) (TYPE_5__*,TYPE_3__*,int ,int **) ;} ;
struct TYPE_15__ {TYPE_5__ graph; } ;
struct TYPE_14__ {TYPE_2__* component; } ;
struct TYPE_13__ {TYPE_1__* priv; } ;
struct TYPE_12__ {TYPE_4__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_GRAPH_PRIVATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int * FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_3__*,int ,int **) ;

__attribute__((used)) static uint8_t *FUNC_3(MMAL_PORT_T *VAR_2, uint32_t VAR_3)
{
   MMAL_GRAPH_PRIVATE_T *VAR_4 = VAR_2->component->priv->module;
   MMAL_STATUS_T VAR_5;
   MMAL_PORT_T *VAR_6;
   uint8_t *VAR_7;

   VAR_6 = FUNC_0(VAR_2->component->priv->module, VAR_2);
   if (!VAR_6)
      return 0;


   if (VAR_4->graph.pf_payload_alloc)
   {
      VAR_5 = VAR_4->graph.pf_payload_alloc(&VAR_4->graph, VAR_2,
         VAR_3, &VAR_7);
      if (VAR_5 != VAR_0)
         return VAR_5 == VAR_1 ? VAR_7 : ((void*)0);
   }


   return FUNC_1(VAR_6, VAR_3);
}
