
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int VC_CONTAINER_SEEK_FLAGS_T ;
struct TYPE_18__ {int container; } ;
struct TYPE_17__ {unsigned int output_num; TYPE_4__** output; TYPE_1__* priv; } ;
struct TYPE_16__ {int flags; int offset; } ;
struct TYPE_15__ {TYPE_3__* priv; } ;
struct TYPE_14__ {TYPE_2__* module; } ;
struct TYPE_13__ {int flush; int eos; } ;
struct TYPE_12__ {TYPE_7__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_5__ MMAL_PARAMETER_SEEK_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;
typedef TYPE_7__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,int *,int ,int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_COMPONENT_T *VAR_7, const MMAL_PARAMETER_SEEK_T *VAR_8)
{
   MMAL_COMPONENT_MODULE_T *VAR_9 = VAR_7->priv->module;
   VC_CONTAINER_SEEK_FLAGS_T VAR_10 = 0;
   int64_t VAR_11 = VAR_8->offset;
   VC_CONTAINER_STATUS_T VAR_12;
   unsigned int VAR_13;

   if(VAR_8->flags & VAR_2)
      VAR_10 |= VAR_5;
   if(VAR_8->flags & VAR_1)
      VAR_10 |= VAR_4;

   FUNC_1(VAR_7);
   for(VAR_13 = 0; VAR_13 < VAR_7->output_num; VAR_13++)
   {
      VAR_7->output[VAR_13]->priv->module->eos = VAR_0;
      VAR_7->output[VAR_13]->priv->module->flush = VAR_3;
   }
   VAR_12 = FUNC_3( VAR_9->container, &VAR_11, VAR_6, VAR_10);
   FUNC_2(VAR_7);
   return FUNC_0(VAR_12);
}
