
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_6__ {int bytes_per_sample; int audio_render; int sema; TYPE_1__* user_buffer_list; } ;
struct TYPE_5__ {int nAllocLen; int nFilledLen; scalar_t__ nOffset; struct TYPE_5__* pAppPrivate; int * pBuffer; } ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_1__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_2__ AUDIOPLAY_STATE_T ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int32_t FUNC_5(AUDIOPLAY_STATE_T *VAR_1,
                              uint8_t *VAR_2,
                              uint32_t VAR_3)
{
   OMX_BUFFERHEADERTYPE *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
   int32_t VAR_6 = -1;

   if(VAR_3 % VAR_1->bytes_per_sample)
      return VAR_6;

   FUNC_4(&VAR_1->sema);


   VAR_4 = VAR_1->user_buffer_list;
   while(VAR_4 != ((void*)0) && VAR_4->pBuffer != VAR_2 && VAR_4->nAllocLen < VAR_3)
   {
      VAR_5 = VAR_4;
      VAR_4 = VAR_4->pAppPrivate;
   }

   if(VAR_4)
   {
      VAR_6 = 0;
      if(VAR_5)
         VAR_5->pAppPrivate = VAR_4->pAppPrivate;
      else
         VAR_1->user_buffer_list = VAR_4->pAppPrivate;
   }

   FUNC_3(&VAR_1->sema);

   if(VAR_4)
   {
      OMX_ERRORTYPE VAR_7;

      VAR_4->pAppPrivate = ((void*)0);
      VAR_4->nOffset = 0;
      VAR_4->nFilledLen = VAR_3;

      VAR_7 = FUNC_1(FUNC_0(VAR_1->audio_render), VAR_4);
      FUNC_2(VAR_7 == VAR_0);
   }

   return VAR_6;
}
