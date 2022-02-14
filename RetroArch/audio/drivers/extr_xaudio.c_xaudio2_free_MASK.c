
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; scalar_t__ hEvent; scalar_t__ pXAudio2; scalar_t__ pMasterVoice; scalar_t__ pSourceVoice; } ;
typedef TYPE_1__ xaudio2_t ;
typedef int delete ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(xaudio2_t *VAR_1)
{
   if (!VAR_1)
      return;

   if (VAR_1->pSourceVoice)
   {
      FUNC_3(VAR_1->pSourceVoice,
            0, VAR_0);
      FUNC_2(VAR_1->pSourceVoice);
   }

   if (VAR_1->pMasterVoice)
   {
      FUNC_1(VAR_1->pMasterVoice);
   }

   if (VAR_1->pXAudio2)
   {
      FUNC_4(VAR_1->pXAudio2);
   }

   if (VAR_1->hEvent)
      FUNC_0(VAR_1->hEvent);

   FUNC_5(VAR_1->buf);




   FUNC_5(VAR_1);

}
