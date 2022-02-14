
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bufsize; scalar_t__ blksize; scalar_t__ blocks; int dma; } ;
struct saa7134_dev {TYPE_1__ dmasound; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct saa7134_dev *VAR_0)
{
 FUNC_0(!VAR_0->dmasound.blksize);

 FUNC_1(&VAR_0->dmasound.dma);

 VAR_0->dmasound.blocks = 0;
 VAR_0->dmasound.blksize = 0;
 VAR_0->dmasound.bufsize = 0;

 return 0;
}
