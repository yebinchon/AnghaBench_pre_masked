
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int port; int client; } ;
struct TYPE_4__ {int port; int client; } ;
struct TYPE_5__ {int out_queue; int seq; TYPE_3__ out; TYPE_1__ out_src; } ;
typedef TYPE_2__ alsa_midi_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char const*,int,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 (int ,char*,int,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int,int *) ;
 int FUNC_9 (int ,int,int *) ;

__attribute__((used)) static bool FUNC_10(void *VAR_5, const char *VAR_6)
{
   int VAR_7;
   alsa_midi_t *VAR_8 = (alsa_midi_t*)VAR_5;

   if (!VAR_6)
   {
      if (VAR_8->out_queue >= 0)
      {
         FUNC_9(VAR_8->seq, VAR_8->out_queue, ((void*)0));
         FUNC_7(VAR_8->seq, VAR_8->out_queue);
         VAR_8->out_queue = -1;
      }
      if (VAR_8->out_src.port >= 0)
      {
         FUNC_6(VAR_8->seq, VAR_8->out_src.port);
         VAR_8->out_src.port = -1;
      }

      return 1;
   }

   if (!FUNC_1(VAR_8->seq, VAR_6, VAR_3 |
         VAR_2, &VAR_8->out))
      return 0;

   VAR_7 = FUNC_5(VAR_8->seq, "out", VAR_0 |
         VAR_1, VAR_4);
   if (VAR_7 < 0)
   {
      FUNC_0("[MIDI]: snd_seq_create_simple_port failed with error %d.\n", VAR_7);
      return 0;
   }

   VAR_8->out_src.client = FUNC_3(VAR_8->seq);
   VAR_8->out_src.port = VAR_7;

   VAR_7 = FUNC_4(VAR_8->seq, VAR_8->out_src.port, VAR_8->out.client, VAR_8->out.port);
   if (VAR_7 < 0)
   {
      FUNC_0("[MIDI]: snd_seq_connect_to failed with error %d.\n", VAR_7);
      return 0;
   }

   VAR_8->out_queue = FUNC_2(VAR_8->seq);
   if (VAR_8->out_queue < 0)
   {
      FUNC_0("[MIDI]: snd_seq_alloc_queue failed with error %d.\n", VAR_8->out_queue);
      return 0;
   }

   VAR_7 = FUNC_8(VAR_8->seq, VAR_8->out_queue, ((void*)0));
   if (VAR_7 < 0)
   {
       FUNC_0("[MIDI]: snd_seq_start_queue failed with error %d.\n", VAR_7);
       return 0;
   }

   return 1;
}
