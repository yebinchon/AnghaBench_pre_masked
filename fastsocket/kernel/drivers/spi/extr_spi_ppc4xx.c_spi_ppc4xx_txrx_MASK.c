
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {int len; int rx_buf; int * tx_buf; } ;
struct spi_device {int master; int dev; } ;
struct ppc4xx_spi {int count; int done; TYPE_1__* regs; int * tx; int len; int rx; } ;
struct TYPE_2__ {int cr; int txd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 struct ppc4xx_spi* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_1, struct spi_transfer *VAR_2)
{
 struct ppc4xx_spi *VAR_3;
 u8 VAR_4;

 FUNC_0(&VAR_1->dev, "txrx: tx %p, rx %p, len %d\n",
  VAR_2->tx_buf, VAR_2->rx_buf, VAR_2->len);

 VAR_3 = FUNC_2(VAR_1->master);

 VAR_3->tx = VAR_2->tx_buf;
 VAR_3->rx = VAR_2->rx_buf;
 VAR_3->len = VAR_2->len;
 VAR_3->count = 0;


 VAR_4 = VAR_3->tx ? VAR_3->tx[0] : 0;
 FUNC_1(&VAR_3->regs->txd, VAR_4);
 FUNC_1(&VAR_3->regs->cr, VAR_0);
 FUNC_3(&VAR_3->done);

 return VAR_3->count;
}
