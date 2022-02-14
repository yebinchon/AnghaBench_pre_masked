
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {unsigned int rmask; unsigned int info; scalar_t__ cmask; } ;
struct snd_mask {int * bits; } ;
struct snd_interval {int max; scalar_t__ min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*,int ,int) ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int) ;
 struct snd_mask* FUNC_2 (struct snd_pcm_hw_params*,int) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_hw_params *VAR_4)
{
   int VAR_5;

   FUNC_0(VAR_4, 0, sizeof(*VAR_4));
   for (VAR_5 = VAR_1;
         VAR_5 <= VAR_3; VAR_5++)
   {
      struct snd_mask *VAR_6 = FUNC_2(VAR_4, VAR_5);
      VAR_6->bits[0] = ~0;
      VAR_6->bits[1] = ~0;
   }
   for (VAR_5 = VAR_0;
         VAR_5 <= VAR_2; VAR_5++)
   {
      struct snd_interval *VAR_7 = FUNC_1(VAR_4, VAR_5);
      VAR_7->min = 0;
      VAR_7->max = ~0;
   }
   VAR_4->rmask = ~0U;
   VAR_4->cmask = 0;
   VAR_4->info = ~0U;
}
