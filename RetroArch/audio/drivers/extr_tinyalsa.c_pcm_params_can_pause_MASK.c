
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int info; } ;
struct pcm_params {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct pcm_params *VAR_1)
{
   const struct snd_pcm_hw_params *VAR_2 = (const struct snd_pcm_hw_params *)VAR_1;

   if (!VAR_2)
      return 0;

   return (VAR_2->info & VAR_0) ? 1 : 0;
}
