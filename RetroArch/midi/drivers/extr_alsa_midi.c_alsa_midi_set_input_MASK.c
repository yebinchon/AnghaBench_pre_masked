
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int snd_seq_port_subscribe_t ;
struct TYPE_4__ {int port; int client; } ;
struct TYPE_3__ {int seq; TYPE_2__ in_dest; int in; } ;
typedef TYPE_1__ alsa_midi_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char const*,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static bool FUNC_9(void *VAR_5, const char *VAR_6)
{
   int VAR_7;
   snd_seq_port_subscribe_t *VAR_8;
   alsa_midi_t *VAR_9 = (alsa_midi_t*)VAR_5;

   if (!VAR_6)
   {
      if (VAR_9->in_dest.port >= 0)
      {
         FUNC_4(VAR_9->seq, VAR_9->in_dest.port);
         VAR_9->in_dest.port = -1;
      }

      return 1;
   }

   if (!FUNC_1(VAR_9->seq, VAR_6, VAR_0 |
         VAR_1, &VAR_9->in))
      return 0;

   VAR_7 = FUNC_3(VAR_9->seq, "in", VAR_3 |
         VAR_2, VAR_4);
   if (VAR_7 < 0)
   {
      FUNC_0("[MIDI]: snd_seq_create_simple_port failed with error %d.\n", VAR_7);
      return 0;
   }

   VAR_9->in_dest.client = FUNC_2(VAR_9->seq);
   VAR_9->in_dest.port = VAR_7;

   FUNC_5(&VAR_8);
   FUNC_7(VAR_8, &VAR_9->in);
   FUNC_6(VAR_8, &VAR_9->in_dest);
   VAR_7 = FUNC_8(VAR_9->seq, VAR_8);
   if (VAR_7 < 0)
      FUNC_0("[MIDI]: snd_seq_subscribe_port failed with error %d.\n", VAR_7);

   return VAR_7 >= 0;
}
