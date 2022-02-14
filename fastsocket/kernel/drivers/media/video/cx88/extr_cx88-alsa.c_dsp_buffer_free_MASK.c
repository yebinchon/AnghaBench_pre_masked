
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dma_size; int * dma_risc; TYPE_2__* buf; TYPE_4__* pci; } ;
typedef TYPE_1__ snd_cx88_card_t ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int risc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(snd_cx88_card_t *VAR_0)
{
 FUNC_0(!VAR_0->dma_size);

 FUNC_2(2,"Freeing buffer\n");
 FUNC_5(&VAR_0->pci->dev, VAR_0->dma_risc);
 FUNC_4(VAR_0->dma_risc);
 FUNC_1(VAR_0->pci,&VAR_0->buf->risc);
 FUNC_3(VAR_0->buf);

 VAR_0->dma_risc = ((void*)0);
 VAR_0->dma_size = 0;

 return 0;
}
