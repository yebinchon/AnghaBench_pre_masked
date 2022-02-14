
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_blk; scalar_t__ dma_running; } ;
struct saa7134_dev {TYPE_1__ dmasound; } ;


 int FUNC_0 (struct saa7134_dev*) ;

__attribute__((used)) static void FUNC_1(struct saa7134_dev *VAR_0)
{
 VAR_0->dmasound.dma_blk = -1;
 VAR_0->dmasound.dma_running = 0;
 FUNC_0(VAR_0);
}
