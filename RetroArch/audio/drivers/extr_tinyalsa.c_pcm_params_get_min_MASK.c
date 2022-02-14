
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct pcm_params {int dummy; } ;
typedef enum pcm_param { ____Placeholder_pcm_param } pcm_param ;


 unsigned int FUNC_0 (struct snd_pcm_hw_params*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static unsigned int FUNC_2(const struct pcm_params *VAR_0,
      enum pcm_param VAR_1)
{
   struct snd_pcm_hw_params *VAR_2 = (struct snd_pcm_hw_params *)VAR_0;
   int VAR_3;

   if (!VAR_2)
      return 0;

   VAR_3 = FUNC_1(VAR_1);
   if (VAR_3 < 0)
      return 0;

   return FUNC_0(VAR_2, VAR_3);
}
