
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_hw_params *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 int VAR_5;

 FUNC_0("Setting capture parameters\n");

 VAR_5 = FUNC_5(VAR_0,
    FUNC_1(VAR_1));
 VAR_4 = FUNC_3(VAR_1);
 VAR_3 = FUNC_4(VAR_1);
 VAR_2 = FUNC_2(VAR_1);




 return 0;
}
