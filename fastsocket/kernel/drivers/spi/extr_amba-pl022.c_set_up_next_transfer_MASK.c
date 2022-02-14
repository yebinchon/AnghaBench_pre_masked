
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_transfer {scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct pl022 {TYPE_3__* cur_chip; void* rx; int read; void* tx; int write; TYPE_2__* cur_transfer; void* rx_end; void* tx_end; TYPE_1__* adev; } ;
struct TYPE_6__ {int n_bytes; int read; int write; } ;
struct TYPE_5__ {int len; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct pl022 *VAR_3,
    struct spi_transfer *VAR_4)
{
 int VAR_5;


 VAR_5 = VAR_3->cur_transfer->len % VAR_3->cur_chip->n_bytes;
 if (FUNC_1(VAR_5 != 0)) {
  FUNC_0(&VAR_3->adev->dev,
   "message of %u bytes to transmit but the current "
   "chip bus has a data width of %u bytes!\n",
   VAR_3->cur_transfer->len,
   VAR_3->cur_chip->n_bytes);
  FUNC_0(&VAR_3->adev->dev, "skipping this message\n");
  return -VAR_0;
 }
 VAR_3->tx = (void *)VAR_4->tx_buf;
 VAR_3->tx_end = VAR_3->tx + VAR_3->cur_transfer->len;
 VAR_3->rx = (void *)VAR_4->rx_buf;
 VAR_3->rx_end = VAR_3->rx + VAR_3->cur_transfer->len;
 VAR_3->write =
     VAR_3->tx ? VAR_3->cur_chip->write : VAR_2;
 VAR_3->read = VAR_3->rx ? VAR_3->cur_chip->read : VAR_1;
 return 0;
}
