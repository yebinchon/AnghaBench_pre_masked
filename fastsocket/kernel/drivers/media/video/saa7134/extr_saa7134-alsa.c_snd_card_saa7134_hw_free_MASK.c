
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_7__ {int dma; int pt; } ;
struct saa7134_dev {TYPE_2__ dmasound; TYPE_5__* pci; } ;
struct TYPE_8__ {struct saa7134_dev* dev; } ;
typedef TYPE_3__ snd_card_saa7134_t ;
struct TYPE_9__ {int dev; } ;
struct TYPE_6__ {int * dma_area; } ;


 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (TYPE_5__*,int *) ;
 TYPE_3__* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream * VAR_0)
{
 snd_card_saa7134_t *VAR_1 = FUNC_2(VAR_0);
 struct saa7134_dev *VAR_2;

 VAR_2 = VAR_1->dev;

 if (VAR_0->runtime->dma_area) {
  FUNC_1(VAR_2->pci, &VAR_2->dmasound.pt);
  FUNC_3(&VAR_2->pci->dev, &VAR_2->dmasound.dma);
  FUNC_0(VAR_2);
  VAR_0->runtime->dma_area = ((void*)0);
 }

 return 0;
}
