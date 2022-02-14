
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cmd_queue; } ;
struct TYPE_6__ {int offset; int cmd; } ;
typedef int OMX_U32 ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_1__ MMAL_BUFFER_HEADER_T ;
typedef TYPE_2__ MMALOMX_COMPONENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;

OMX_ERRORTYPE FUNC_2(
   MMALOMX_COMPONENT_T *VAR_2,
   OMX_U32 *VAR_3, OMX_U32 *VAR_4)
{
   MMAL_BUFFER_HEADER_T *VAR_5 = FUNC_1(VAR_2->cmd_queue);
   if (!VAR_5)
      return VAR_0;

   *VAR_3 = VAR_5->cmd;
   *VAR_4 = VAR_5->offset;
   FUNC_0(VAR_5);
   return VAR_1;
}
