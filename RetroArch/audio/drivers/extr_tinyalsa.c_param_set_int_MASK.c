
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {unsigned int min; unsigned int max; int integer; } ;


 scalar_t__ FUNC_0 (int) ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_hw_params *VAR_0, int VAR_1, unsigned int VAR_2)
{
    if (FUNC_0(VAR_1))
    {
        struct snd_interval *VAR_3 = FUNC_1(VAR_0, VAR_1);
        VAR_3->min = VAR_2;
        VAR_3->max = VAR_2;
        VAR_3->integer = 1;
    }
}
