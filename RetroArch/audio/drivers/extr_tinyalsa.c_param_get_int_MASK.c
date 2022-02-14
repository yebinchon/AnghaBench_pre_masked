
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {unsigned int max; scalar_t__ integer; } ;


 scalar_t__ FUNC_0 (int) ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct snd_pcm_hw_params *VAR_0, int VAR_1)
{
    if (FUNC_0(VAR_1))
    {
        struct snd_interval *VAR_2 = FUNC_1(VAR_0, VAR_1);
        if (VAR_2->integer)
            return VAR_2->max;
    }
    return 0;
}
