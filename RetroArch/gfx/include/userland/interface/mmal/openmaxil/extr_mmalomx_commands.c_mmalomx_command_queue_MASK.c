
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int cmd_queue; TYPE_1__* cmd_pool; } ;
struct TYPE_10__ {void* offset; void* cmd; } ;
struct TYPE_9__ {int queue; } ;
typedef void* OMX_U32 ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;
typedef TYPE_3__ MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;

OMX_ERRORTYPE FUNC_5(
   MMALOMX_COMPONENT_T *VAR_2,
   OMX_U32 VAR_3, OMX_U32 VAR_4)
{
   MMAL_BUFFER_HEADER_T *VAR_5 = FUNC_1(VAR_2->cmd_pool->queue);

   if (!FUNC_4(VAR_5))
   {
      FUNC_0("command queue too small");
      return VAR_0;
   }

   VAR_5->cmd = VAR_3;
   VAR_5->offset = VAR_4;
   FUNC_2(VAR_2->cmd_queue, VAR_5);

   FUNC_3(VAR_2);

   return VAR_1;
}
