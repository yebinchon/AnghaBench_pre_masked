
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int client; int * ports; } ;
typedef TYPE_1__ jack_t ;
struct TYPE_6__ {int max; } ;
typedef TYPE_2__ jack_latency_range_t ;
typedef int jack_default_audio_sample_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static size_t FUNC_3(jack_t *VAR_1, int VAR_2, unsigned VAR_3)
{
   jack_latency_range_t VAR_4;
   int VAR_5, VAR_6, VAR_7;
   int VAR_8 = 0;
   int VAR_9 = VAR_2 * VAR_3 / 1000;

   for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
   {
      FUNC_2(VAR_1->ports[VAR_5], VAR_0, &VAR_4);
      if ((int)VAR_4.max > VAR_8)
         VAR_8 = VAR_4.max;
   }

   FUNC_0("[JACK]: Jack latency is %d frames.\n", VAR_8);

   VAR_6 = VAR_9 - VAR_8;
   VAR_7 = FUNC_1(VAR_1->client) * 2;

   FUNC_0("[JACK]: Minimum buffer size is %d frames.\n", VAR_7);

   if (VAR_6 < VAR_7)
      VAR_6 = VAR_7;

   return VAR_6 * sizeof(jack_default_audio_sample_t);
}
