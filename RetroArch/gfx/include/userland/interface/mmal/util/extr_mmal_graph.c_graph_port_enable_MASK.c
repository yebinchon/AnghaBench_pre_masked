
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* priv; } ;
struct TYPE_17__ {scalar_t__ (* pf_enable ) (TYPE_4__*,TYPE_2__*) ;} ;
struct TYPE_16__ {TYPE_4__ graph; } ;
struct TYPE_15__ {TYPE_7__* component; void* userdata; int buffer_size; int buffer_num; } ;
struct TYPE_14__ {TYPE_3__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef int MMAL_PORT_BH_CB_T ;
typedef TYPE_3__ MMAL_GRAPH_PRIVATE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_6(MMAL_PORT_T *VAR_4, MMAL_PORT_BH_CB_T VAR_5)
{
   MMAL_GRAPH_PRIVATE_T *VAR_6 = VAR_4->component->priv->module;
   MMAL_PORT_T *VAR_7;
   MMAL_STATUS_T VAR_8;
   FUNC_0(VAR_5);

   VAR_7 = FUNC_1(VAR_6, VAR_4);
   if (!VAR_7)
      return VAR_0;


   VAR_7->buffer_num = VAR_4->buffer_num;
   VAR_7->buffer_size = VAR_4->buffer_size;


   if (VAR_6->graph.pf_enable)
   {
      VAR_8 = VAR_6->graph.pf_enable(&VAR_6->graph, VAR_4);
      if (VAR_8 != VAR_1)
         return VAR_8;
   }


   VAR_7->userdata = (void *)VAR_6;
   VAR_8 = FUNC_4(VAR_7, VAR_3);
   if (VAR_8 != VAR_2)
      return VAR_8;


   VAR_8 = FUNC_2(VAR_6, VAR_7, 1);

   FUNC_3(VAR_4->component);
   return VAR_8;
}
