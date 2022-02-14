
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int time_setup; int time_enable; int time_disable; int name; } ;
struct TYPE_9__ {unsigned int connection_num; double decoded_frames; double time_playback; unsigned int component_num; TYPE_1__* component; int event; TYPE_4__** connection; int uri; } ;
struct TYPE_8__ {int time_cleanup; int time_setup; int name; int comp; } ;
typedef TYPE_2__ MMALPLAY_T ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 void* FUNC_6 () ;
 int FUNC_7 (int *) ;

void FUNC_8(MMALPLAY_T *VAR_0)
{
   unsigned int VAR_1;

   FUNC_1("%p, %s", VAR_0, VAR_0->uri);


   for (VAR_1 = VAR_0->connection_num; VAR_1; VAR_1--)
      FUNC_5(VAR_0->connection[VAR_1-1]);

   FUNC_0("--- statistics ---");
   FUNC_0("decoded %i frames in %.2fs (%.2ffps)", (int)VAR_0->decoded_frames,
            VAR_0->time_playback / 1000000.0, VAR_0->decoded_frames * 1000000.0 / VAR_0->time_playback);

   for (VAR_1 = 0; VAR_1 < VAR_0->connection_num; VAR_1++)
   {
      FUNC_0("%s", VAR_0->connection[VAR_1]->name);
      FUNC_0("- setup time: %ims",
               (int)(VAR_0->connection[VAR_1]->time_setup / 1000));
      FUNC_0("- enable time: %ims, disable time: %ims",
               (int)(VAR_0->connection[VAR_1]->time_enable / 1000),
               (int)(VAR_0->connection[VAR_1]->time_disable / 1000));
   }


   for (VAR_1 = VAR_0->connection_num; VAR_1; VAR_1--)
      FUNC_4(VAR_0->connection[VAR_1-1]);


   for (VAR_1 = VAR_0->component_num; VAR_1; VAR_1--)
   {
      VAR_0->component[VAR_1-1].time_cleanup = FUNC_6();
      FUNC_3(VAR_0->component[VAR_1-1].comp);
      VAR_0->component[VAR_1-1].time_cleanup = FUNC_6() - VAR_0->component[VAR_1-1].time_cleanup;
   }

   FUNC_7(&VAR_0->event);

   for (VAR_1 = 0; VAR_1 < VAR_0->component_num; VAR_1++)
   {
      FUNC_0("%s:", VAR_0->component[VAR_1].name);
      FUNC_0("- setup time: %ims, cleanup time: %ims",
               (int)(VAR_0->component[VAR_1].time_setup / 1000),
               (int)(VAR_0->component[VAR_1].time_cleanup / 1000));
   }
   FUNC_0("-----------------");

   FUNC_2(VAR_0);
}
