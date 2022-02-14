
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cond; int * buffer; int * ports; } ;
typedef TYPE_1__ jack_t ;
typedef int jack_nframes_t ;
typedef float jack_default_audio_sample_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(jack_nframes_t VAR_0, void *VAR_1)
{
   int VAR_2;
   jack_nframes_t VAR_3[2], VAR_4;
   jack_t *VAR_5 = (jack_t*)VAR_1;

   if (VAR_0 <= 0)
   {



      return 0;
   }

   VAR_3[0] = FUNC_2(VAR_5->buffer[0]);
   VAR_3[1] = FUNC_2(VAR_5->buffer[1]);
   VAR_4 = ((VAR_3[0] < VAR_3[1]) ? VAR_3[0] : VAR_3[1]) / sizeof(jack_default_audio_sample_t);

   if (VAR_4 > VAR_0)
      VAR_4 = VAR_0;

   for (VAR_2 = 0; VAR_2 < 2; VAR_2++)
   {
      jack_nframes_t VAR_6;
      jack_default_audio_sample_t *VAR_7 = (jack_default_audio_sample_t*)FUNC_0(VAR_5->ports[VAR_2], VAR_0);

      FUNC_1(VAR_5->buffer[VAR_2], (char*)VAR_7, VAR_4 * sizeof(jack_default_audio_sample_t));

      for (VAR_6 = VAR_4; VAR_6 < VAR_0; VAR_6++)
         VAR_7[VAR_6] = 0.0f;
   }



   return 0;
}
