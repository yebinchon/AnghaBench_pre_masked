
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct spi_device {int dev; } ;
struct s3c24xx_spi {int count; int done; scalar_t__ regs; int len; int rx; int tx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (struct s3c24xx_spi*,int ) ;
 int FUNC_2 (int *) ;
 struct s3c24xx_spi* FUNC_3 (struct spi_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_1, struct spi_transfer *VAR_2)
{
 struct s3c24xx_spi *VAR_3 = FUNC_3(VAR_1);

 FUNC_0(&VAR_1->dev, "txrx: tx %p, rx %p, len %d\n",
  VAR_2->tx_buf, VAR_2->rx_buf, VAR_2->len);

 VAR_3->tx = VAR_2->tx_buf;
 VAR_3->rx = VAR_2->rx_buf;
 VAR_3->len = VAR_2->len;
 VAR_3->count = 0;

 FUNC_2(&VAR_3->done);


 FUNC_5(FUNC_1(VAR_3, 0), VAR_3->regs + VAR_0);

 FUNC_4(&VAR_3->done);

 return VAR_3->count;
}
