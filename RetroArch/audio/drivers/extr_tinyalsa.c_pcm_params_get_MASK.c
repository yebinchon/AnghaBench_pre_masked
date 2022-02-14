
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct pcm_params {int dummy; } ;
typedef int fn ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_4 (int,int ,struct snd_pcm_hw_params*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (char*,int,char*,unsigned int,unsigned int,char) ;
 int VAR_5 ;

__attribute__((used)) static struct pcm_params *FUNC_8(unsigned int VAR_6, unsigned int VAR_7,
      unsigned int VAR_8)
{
   struct snd_pcm_hw_params *VAR_9;
   char VAR_10[256];
   int VAR_11;

   FUNC_7(VAR_10, sizeof(VAR_10), "/dev/snd/pcmC%uD%u%c", VAR_6, VAR_7,
         VAR_8 & VAR_2 ? 'c' : 'p');

   VAR_11 = FUNC_5(VAR_10, VAR_1|VAR_0);
   if (VAR_11 < 0)
   {
      FUNC_2(VAR_5, "cannot open device '%s'\n", VAR_10);
      goto err_open;
   }

   VAR_9 = (struct snd_pcm_hw_params*)
      FUNC_0(1, sizeof(struct snd_pcm_hw_params));

   if (!VAR_9)
      goto err_calloc;

   FUNC_6(VAR_9);
   if (FUNC_4(VAR_11, VAR_3, VAR_9))
   {
      FUNC_2(VAR_5, "SNDRV_PCM_IOCTL_HW_REFINE error (%d)\n", VAR_4);
      goto err_hw_refine;
   }

   FUNC_1(VAR_11);

   return (struct pcm_params *)VAR_9;

err_hw_refine:
   FUNC_3(VAR_9);
err_calloc:
   FUNC_1(VAR_11);
err_open:
   return ((void*)0);
}
