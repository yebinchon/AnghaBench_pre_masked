
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nonblock; int cond_lock; int cond; int * buffer; scalar_t__ shutdown; } ;
typedef TYPE_1__ jack_t ;
typedef float jack_default_audio_sample_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int ,char const*,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static size_t FUNC_6(jack_t *VAR_2, const float *VAR_3, size_t VAR_4)
{
   int VAR_5;
   size_t VAR_6, VAR_7 = 0;
   jack_default_audio_sample_t VAR_8[2][VAR_0 * VAR_1];
   size_t VAR_9 = FUNC_0(VAR_4);


   if (VAR_9 > VAR_0 * VAR_1)
      VAR_9 = VAR_0 * VAR_1;

   for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
      for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++)
         VAR_8[VAR_5][VAR_6] = VAR_3[VAR_6 * 2 + VAR_5];

   while (VAR_7 < VAR_9)
   {
      size_t VAR_10[2], VAR_11, VAR_12;
      if (VAR_2->shutdown)
         return 0;

      VAR_10[0] = FUNC_2(VAR_2->buffer[0]);
      VAR_10[1] = FUNC_2(VAR_2->buffer[1]);

      VAR_11 = VAR_10[0] < VAR_10[1] ? VAR_10[0] : VAR_10[1];
      VAR_11 /= sizeof(float);

      VAR_12 = VAR_9 - VAR_7 > VAR_11 ? VAR_11 : VAR_9 - VAR_7;

      if (VAR_12 > 0)
      {
         for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
         {
            FUNC_1(VAR_2->buffer[VAR_5], (const char*)&VAR_8[VAR_5][VAR_7],
                  VAR_12 * sizeof(jack_default_audio_sample_t));
         }
         VAR_7 += VAR_12;
      }
      if (VAR_2->nonblock)
         break;
   }

   return VAR_7 * sizeof(float) * 2;
}
