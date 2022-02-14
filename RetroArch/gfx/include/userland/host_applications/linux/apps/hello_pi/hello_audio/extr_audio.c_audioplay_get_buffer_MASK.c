
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int sema; TYPE_1__* user_buffer_list; int audio_render; } ;
struct TYPE_5__ {int * pBuffer; struct TYPE_5__* pAppPrivate; } ;
typedef TYPE_1__ OMX_BUFFERHEADERTYPE ;
typedef TYPE_2__ AUDIOPLAY_STATE_T ;


 TYPE_1__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

uint8_t *FUNC_3(AUDIOPLAY_STATE_T *VAR_0)
{
   OMX_BUFFERHEADERTYPE *VAR_1 = ((void*)0);

   VAR_1 = FUNC_0(VAR_0->audio_render, 100, 0);

   if(VAR_1)
   {

      FUNC_2(&VAR_0->sema);

      VAR_1->pAppPrivate = VAR_0->user_buffer_list;
      VAR_0->user_buffer_list = VAR_1;

      FUNC_1(&VAR_0->sema);
   }

   return VAR_1 ? VAR_1->pBuffer : ((void*)0);
}
