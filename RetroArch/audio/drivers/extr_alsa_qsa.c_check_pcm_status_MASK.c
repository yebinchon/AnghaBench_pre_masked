
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int status ;
struct TYPE_5__ {int channel; scalar_t__ status; } ;
typedef TYPE_1__ snd_pcm_channel_status_t ;
struct TYPE_6__ {int pcm; } ;
typedef TYPE_2__ alsa_qsa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void *VAR_8, int VAR_9)
{
   snd_pcm_channel_status_t VAR_10;
   alsa_qsa_t *VAR_11 = (alsa_qsa_t*)VAR_8;
   int VAR_12 = VAR_1;

   FUNC_2(&VAR_10, 0, sizeof (VAR_10));
   VAR_10.channel = VAR_9;

   if ((VAR_12 = FUNC_4(VAR_11->pcm, &VAR_10)) == 0)
   {
      if (VAR_10.status == VAR_7)
      {
         FUNC_0("check_pcm_status got SND_PCM_STATUS_UNSECURE, aborting playback\n");
         VAR_12 = -VAR_2;
      }
      else if (VAR_10.status == VAR_6)
      {
         FUNC_1("check_pcm_status: SNDP_CM_STATUS_UNDERRUN.\n");
         if ((VAR_12 = FUNC_3(VAR_11->pcm, VAR_9)) < 0)
         {
            FUNC_0("Invalid state detected for underrun on snd_pcm_channel_prepare: %s\n",
                  FUNC_5(VAR_12));
            VAR_12 = -VAR_2;
         }
      }
      else if (VAR_10.status == VAR_5)
      {
         FUNC_1("check_pcm_status: SNDP_CM_STATUS_OVERRUN.\n");
         if ((VAR_12 = FUNC_3(VAR_11->pcm, VAR_9)) < 0)
         {
            FUNC_0("Invalid state detected for overrun on snd_pcm_channel_prepare: %s\n",
                  FUNC_5(VAR_12));
            VAR_12 = -VAR_2;
         }
      }
      else if (VAR_10.status == VAR_4)
      {
         FUNC_1("check_pcm_status: SNDP_CM_STATUS_CHANGE.\n");
         if ((VAR_12 = FUNC_3(VAR_11->pcm, VAR_9)) < 0)
         {
            FUNC_0("Invalid state detected for change on snd_pcm_channel_prepare: %s\n",
                  FUNC_5(VAR_12));
            VAR_12 = -VAR_2;
         }
      }
   }
   else
   {
      FUNC_0("check_pcm_status failed: %s\n", FUNC_5(VAR_12));
      if (VAR_12 == -VAR_3)
         VAR_12 = -VAR_0;
   }

   return VAR_12;
}
