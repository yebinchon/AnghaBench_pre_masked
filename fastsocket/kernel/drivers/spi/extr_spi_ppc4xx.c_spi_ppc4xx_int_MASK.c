
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ppc4xx_spi {unsigned int count; int* rx; unsigned int len; int* tx; int done; TYPE_1__* regs; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int cr; int txd; int rxd; int sr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct ppc4xx_spi *VAR_6;
 u8 VAR_7;
 u8 VAR_8;
 unsigned int VAR_9;

 VAR_6 = (struct ppc4xx_spi *)VAR_5;

 VAR_7 = FUNC_3(&VAR_6->regs->sr);
 if (!VAR_7)
  return VAR_1;







 if (FUNC_6(VAR_7 & VAR_3)) {
  u8 VAR_10;
  int VAR_11 = 0;

  FUNC_1(VAR_6->dev, "got interrupt but spi still busy?\n");
  do {
   FUNC_4(10);
   VAR_10 = FUNC_3(&VAR_6->regs->sr);
  } while (++VAR_11 < 100 && VAR_10 & VAR_3);

  if (VAR_11 >= 100) {
   FUNC_2(VAR_6->dev, "busywait: too many loops!\n");
   FUNC_0(&VAR_6->done);
   return VAR_0;
  } else {

   VAR_7 = FUNC_3(&VAR_6->regs->sr);
   FUNC_1(VAR_6->dev, "loops %d status %x\n", VAR_11, VAR_7);
  }
 }

 VAR_9 = VAR_6->count;
 VAR_6->count++;


 VAR_8 = FUNC_3(&VAR_6->regs->rxd);
 if (VAR_6->rx)
  VAR_6->rx[VAR_9] = VAR_8;

 VAR_9++;

 if (VAR_9 < VAR_6->len) {
  VAR_8 = VAR_6->tx ? VAR_6->tx[VAR_9] : 0;
  FUNC_5(&VAR_6->regs->txd, VAR_8);
  FUNC_5(&VAR_6->regs->cr, VAR_2);
 } else {
  FUNC_0(&VAR_6->done);
 }

 return VAR_0;
}
