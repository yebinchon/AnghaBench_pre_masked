
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int snd_pcm_t ;
typedef int snd_pcm_hw_params_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static bool FUNC_2(snd_pcm_t *VAR_1,
      snd_pcm_hw_params_t *VAR_2)
{
   if (FUNC_1(VAR_1, VAR_2, VAR_0) == 0)
   {
      FUNC_0("ALSA: Using floating point format.\n");
      return 1;
   }
   FUNC_0("ALSA: Using signed 16-bit format.\n");
   return 0;
}
