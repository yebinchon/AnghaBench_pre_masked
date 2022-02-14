
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; void* pts; void* dts; int offset; int length; int alloc_size; int data; scalar_t__ cmd; } ;
struct TYPE_5__ {int nFlags; int nTimeStamp; int nOffset; int nFilledLen; int nAllocLen; int pBuffer; } ;
typedef TYPE_1__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;

void FUNC_2(MMAL_BUFFER_HEADER_T *VAR_3, OMX_BUFFERHEADERTYPE *VAR_4)
{
   VAR_3->cmd = 0;
   VAR_3->data = VAR_4->pBuffer;
   VAR_3->alloc_size = VAR_4->nAllocLen;
   VAR_3->length = VAR_4->nFilledLen;
   VAR_3->offset = VAR_4->nOffset;
   if (VAR_4->nFlags & VAR_1)
   {
     VAR_3->dts = FUNC_1(VAR_4->nTimeStamp);
     VAR_3->pts = VAR_0;
   }
   else if (VAR_4->nFlags & VAR_2)
   {
     VAR_3->dts = VAR_0;
     VAR_3->pts = VAR_0;
   }
   else
   {
     VAR_3->dts = VAR_0;
     VAR_3->pts = FUNC_1(VAR_4->nTimeStamp);
   }
   VAR_3->flags = FUNC_0(VAR_4->nFlags);
}
