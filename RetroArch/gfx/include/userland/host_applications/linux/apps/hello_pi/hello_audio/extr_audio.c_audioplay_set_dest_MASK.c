
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
typedef int ar_dest ;
struct TYPE_9__ {int audio_render; } ;
struct TYPE_7__ {int nVersion; } ;
struct TYPE_8__ {int nSize; scalar_t__ sName; TYPE_1__ nVersion; } ;
typedef scalar_t__ OMX_ERRORTYPE ;
typedef TYPE_2__ OMX_CONFIG_BRCMAUDIODESTINATIONTYPE ;
typedef TYPE_3__ AUDIOPLAY_STATE_T ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

int32_t FUNC_6(AUDIOPLAY_STATE_T *VAR_3, const char *VAR_4)
{
   int32_t VAR_5 = -1;
   OMX_CONFIG_BRCMAUDIODESTINATIONTYPE VAR_6;

   if (VAR_4 && FUNC_5(VAR_4) < sizeof(VAR_6.sName))
   {
      OMX_ERRORTYPE VAR_7;
      FUNC_3(&VAR_6, 0, sizeof(VAR_6));
      VAR_6.nSize = sizeof(OMX_CONFIG_BRCMAUDIODESTINATIONTYPE);
      VAR_6.nVersion.nVersion = VAR_2;
      FUNC_4((char *)VAR_6.sName, VAR_4);

      VAR_7 = FUNC_1(FUNC_0(VAR_3->audio_render), VAR_1, &VAR_6);
      FUNC_2(VAR_7 == VAR_0);
      VAR_5 = 0;
   }

   return VAR_5;
}
