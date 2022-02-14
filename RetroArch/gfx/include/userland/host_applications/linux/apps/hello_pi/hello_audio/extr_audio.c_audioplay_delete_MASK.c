
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_4__ {int sema; int client; int list; int audio_render; int user_buffer_list; } ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_1__ AUDIOPLAY_STATE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ,int *,int *) ;
 int FUNC_9 (int *) ;

int32_t FUNC_10(AUDIOPLAY_STATE_T *VAR_4)
{
   OMX_ERRORTYPE VAR_5;

   FUNC_5(VAR_4->audio_render, VAR_2);

   VAR_5 = FUNC_2(FUNC_0(VAR_4->audio_render), VAR_0, VAR_3, ((void*)0));
   FUNC_3(VAR_5 == VAR_1);

   FUNC_8(VAR_4->audio_render, 100, VAR_4->user_buffer_list, ((void*)0), ((void*)0));
   FUNC_5(VAR_4->audio_render, VAR_3);
   FUNC_6(VAR_4->list);

   VAR_5 = FUNC_1();
   FUNC_3(VAR_5 == VAR_1);

   FUNC_7(VAR_4->client);

   FUNC_9(&VAR_4->sema);
   FUNC_4(VAR_4);

   return 0;
}
