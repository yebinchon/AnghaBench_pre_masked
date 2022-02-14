
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int* bits; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_hw_params *VAR_1, int VAR_2, unsigned int VAR_3)
{
    if (VAR_3 >= VAR_0)
        return;
    if (FUNC_0(VAR_2))
    {
        struct snd_mask *VAR_4 = FUNC_1(VAR_1, VAR_2);
        VAR_4->bits[0] = 0;
        VAR_4->bits[1] = 0;
        VAR_4->bits[VAR_3 >> 5] |= (1 << (VAR_3 & 31));
    }
}
