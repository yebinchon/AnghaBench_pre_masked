
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_26__ {int (* FillBufferDone ) (int ,int ,TYPE_2__*) ;int (* EmptyBufferDone ) (int ,int ,TYPE_2__*) ;} ;
struct TYPE_30__ {int callbacks_data; int omx; TYPE_1__ callbacks; } ;
struct TYPE_29__ {scalar_t__ direction; int actions; int buffers_in_transit; int index; TYPE_5__* component; } ;
struct TYPE_28__ {scalar_t__ data; scalar_t__ cmd; scalar_t__ user_data; } ;
struct TYPE_27__ {scalar_t__ pBuffer; int nFlags; } ;
typedef int OMX_HANDLETYPE ;
typedef int OMX_ERRORTYPE ;
typedef TYPE_2__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;
typedef TYPE_4__ MMALOMX_PORT_T ;
typedef TYPE_5__ MMALOMX_COMPONENT_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_5__*,int ,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_5__*,int ,int ,int,int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*,TYPE_2__*) ;
 int FUNC_9 (int ,int ,TYPE_2__*) ;
 int FUNC_10 (int ,int ,TYPE_2__*) ;
 int FUNC_11 (int) ;

OMX_ERRORTYPE FUNC_12(
   MMALOMX_PORT_T *VAR_7,
   MMAL_BUFFER_HEADER_T *VAR_8)
{
   MMALOMX_COMPONENT_T *VAR_9 = VAR_7->component;
   OMX_BUFFERHEADERTYPE *VAR_10 = (OMX_BUFFERHEADERTYPE *)VAR_8->user_data;
   MMAL_BOOL_T VAR_11;

   if (VAR_8->cmd)
   {
      FUNC_5(VAR_7, VAR_8);
      FUNC_3(VAR_8);
      return VAR_5;
   }

   if (VAR_0)
      FUNC_0("hComponent %p, port %i, pBuffer %p", VAR_9,
                VAR_7->index, VAR_10);

   FUNC_11(VAR_10->pBuffer == VAR_8->data);
   FUNC_4(VAR_10, VAR_8);
   FUNC_3(VAR_8);

   if ((VAR_10->nFlags & VAR_2) && VAR_7->direction == VAR_4)
   {
      FUNC_6(VAR_9, VAR_6,
                                     VAR_7->index, VAR_10->nFlags, ((void*)0));
   }

   FUNC_8(VAR_9, VAR_7, VAR_10);

   if (VAR_7->direction == VAR_3)
      VAR_9->callbacks.EmptyBufferDone((OMX_HANDLETYPE)&VAR_9->omx,
         VAR_9->callbacks_data, VAR_10 );
   else
      VAR_9->callbacks.FillBufferDone((OMX_HANDLETYPE)&VAR_9->omx,
         VAR_9->callbacks_data, VAR_10 );

   FUNC_1(VAR_9, VAR_7);
   VAR_11 = VAR_7->actions & VAR_1;
   VAR_7->buffers_in_transit--;
   FUNC_2(VAR_9, VAR_7);

   if (VAR_11)
      FUNC_7(VAR_9);

   return VAR_5;
}
