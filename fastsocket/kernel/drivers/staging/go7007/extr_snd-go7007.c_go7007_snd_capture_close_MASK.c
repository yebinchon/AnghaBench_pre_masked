
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct go7007_snd {int * substream; } ;
struct go7007 {struct go7007_snd* snd_context; } ;


 struct go7007* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct go7007 *VAR_1 = FUNC_0(VAR_0);
 struct go7007_snd *VAR_2 = VAR_1->snd_context;

 VAR_2->substream = ((void*)0);
 return 0;
}
