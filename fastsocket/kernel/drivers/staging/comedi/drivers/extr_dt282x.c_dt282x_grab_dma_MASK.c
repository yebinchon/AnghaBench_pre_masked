
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comedi_device {int dummy; } ;
struct TYPE_4__ {int usedma; TYPE_1__* dma; int dma_maxsize; } ;
struct TYPE_3__ {int chan; void* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;

 VAR_6->usedma = 0;

 if (!VAR_8 && !VAR_9) {
  FUNC_1(" (no dma)");
  return 0;
 }

 if (VAR_8 == VAR_9 || VAR_8 < 5 || VAR_9 < 5 || VAR_8 > 7 || VAR_9 > 7)
  return -VAR_1;

 if (VAR_9 < VAR_8) {
  int VAR_11;
  VAR_11 = VAR_8;
  VAR_8 = VAR_9;
  VAR_9 = VAR_11;
 }

 VAR_10 = FUNC_2(VAR_8, "dt282x A");
 if (VAR_10)
  return -VAR_0;
 VAR_6->dma[0].chan = VAR_8;

 VAR_10 = FUNC_2(VAR_9, "dt282x B");
 if (VAR_10)
  return -VAR_0;
 VAR_6->dma[1].chan = VAR_9;

 VAR_6->dma_maxsize = VAR_5;
 VAR_6->dma[0].buf = (void *)FUNC_0(VAR_4 | VAR_3);
 VAR_6->dma[1].buf = (void *)FUNC_0(VAR_4 | VAR_3);
 if (!VAR_6->dma[0].buf || !VAR_6->dma[1].buf) {
  FUNC_1(" can't get DMA memory");
  return -VAR_2;
 }

 FUNC_1(" (dma=%d,%d)", VAR_8, VAR_9);

 VAR_6->usedma = 1;

 return 0;
}
