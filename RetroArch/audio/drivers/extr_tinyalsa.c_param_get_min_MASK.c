
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {unsigned int min; } ;


 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params const*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned int FUNC_2(const struct snd_pcm_hw_params *VAR_0, int VAR_1)
{
    if (FUNC_1(VAR_1))
    {
        const struct snd_interval *VAR_2 = FUNC_0(VAR_0, VAR_1);
        return VAR_2->min;
    }
    return 0;
}
