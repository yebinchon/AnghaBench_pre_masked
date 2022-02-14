
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_13__ {int * vaddr; int sglen; int sglist; } ;
struct TYPE_10__ {unsigned int blocks; unsigned int blksize; unsigned int bufsize; TYPE_4__ dma; int pt; } ;
struct saa7134_dev {TYPE_1__ dmasound; TYPE_7__* pci; } ;
struct TYPE_12__ {struct saa7134_dev* dev; } ;
typedef TYPE_3__ snd_card_saa7134_t ;
struct TYPE_14__ {int dev; } ;
struct TYPE_11__ {unsigned int dma_bytes; scalar_t__ dma_addr; int * dma_area; } ;


 int VAR_0 ;
 int FUNC_0 (struct saa7134_dev*) ;
 int FUNC_1 (struct saa7134_dev*) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (TYPE_7__*,int *) ;
 int FUNC_5 (TYPE_7__*,int *,int ,int ,int ) ;
 int FUNC_6 (TYPE_7__*,int *) ;
 TYPE_3__* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream * VAR_1,
          struct snd_pcm_hw_params * VAR_2)
{
 snd_card_saa7134_t *VAR_3 = FUNC_7(VAR_1);
 struct saa7134_dev *VAR_4;
 unsigned int VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_2);
 VAR_6 = FUNC_3(VAR_2);

 if (VAR_5 < 0x100 || VAR_5 > 0x10000)
  return -VAR_0;
 if (VAR_6 < 4)
  return -VAR_0;
 if (VAR_5 * VAR_6 > 1024 * 1024)
  return -VAR_0;

 VAR_4 = VAR_3->dev;

 if (VAR_4->dmasound.blocks == VAR_6 &&
     VAR_4->dmasound.blksize == VAR_5)
  return 0;


 if (VAR_1->runtime->dma_area) {
  FUNC_6(VAR_4->pci, &VAR_4->dmasound.pt);
  FUNC_9(&VAR_4->pci->dev, &VAR_4->dmasound.dma);
  FUNC_0(VAR_4);
  VAR_1->runtime->dma_area = ((void*)0);
 }
 VAR_4->dmasound.blocks = VAR_6;
 VAR_4->dmasound.blksize = VAR_5;
 VAR_4->dmasound.bufsize = VAR_5 * VAR_6;

 VAR_7 = FUNC_1(VAR_4);
 if (0 != VAR_7) {
  VAR_4->dmasound.blocks = 0;
  VAR_4->dmasound.blksize = 0;
  VAR_4->dmasound.bufsize = 0;
  return VAR_7;
 }

 if (0 != (VAR_7 = FUNC_8(&VAR_4->pci->dev, &VAR_4->dmasound.dma))) {
  FUNC_0(VAR_4);
  return VAR_7;
 }
 if (0 != (VAR_7 = FUNC_4(VAR_4->pci,&VAR_4->dmasound.pt))) {
  FUNC_9(&VAR_4->pci->dev, &VAR_4->dmasound.dma);
  FUNC_0(VAR_4);
  return VAR_7;
 }
 if (0 != (VAR_7 = FUNC_5(VAR_4->pci,&VAR_4->dmasound.pt,
      VAR_4->dmasound.dma.sglist,
      VAR_4->dmasound.dma.sglen,
      0))) {
  FUNC_6(VAR_4->pci, &VAR_4->dmasound.pt);
  FUNC_9(&VAR_4->pci->dev, &VAR_4->dmasound.dma);
  FUNC_0(VAR_4);
  return VAR_7;
 }





 VAR_1->runtime->dma_area = VAR_4->dmasound.dma.vaddr;
 VAR_1->runtime->dma_bytes = VAR_4->dmasound.bufsize;
 VAR_1->runtime->dma_addr = 0;

 return 0;

}
