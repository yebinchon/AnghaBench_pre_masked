
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pts; scalar_t__ dts; int flags; int offset; int length; int alloc_size; int data; } ;
struct TYPE_5__ {int nFlags; void* nTimeStamp; int nOffset; int nFilledLen; int nAllocLen; int pBuffer; } ;
typedef TYPE_1__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_2__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;

void FUNC_2(OMX_BUFFERHEADERTYPE *VAR_3, MMAL_BUFFER_HEADER_T *VAR_4)
{
   VAR_3->pBuffer = VAR_4->data;
   VAR_3->nAllocLen = VAR_4->alloc_size;
   VAR_3->nFilledLen = VAR_4->length;
   VAR_3->nOffset = VAR_4->offset;
   VAR_3->nFlags = FUNC_0(VAR_4->flags);
   VAR_3->nTimeStamp = FUNC_1(VAR_4->pts);
   if (VAR_4->pts == VAR_0)
   {
      if (VAR_4->dts == VAR_0)
      {
         VAR_3->nTimeStamp = FUNC_1(0);
         VAR_3->nFlags |= VAR_2;
      }
      else
      {
        VAR_3->nTimeStamp = FUNC_1(VAR_4->dts);
        VAR_3->nFlags |= VAR_1;
      }
   }
}
