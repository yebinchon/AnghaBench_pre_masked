
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct spi_transfer {int len; int cs_change; int rx_dma; int tx_dma; int rx_buf; int tx_buf; } ;
struct scratch {void** status; } ;
struct TYPE_8__ {int is_dma_mapped; } ;
struct mmc_spi_host {TYPE_2__* spi; int data_dma; scalar_t__ dma_dev; TYPE_3__ m; struct spi_transfer t; struct scratch* data; } ;
struct mmc_request {TYPE_1__* data; } ;
struct mmc_command {int arg; int opcode; int flags; int error; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void**,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (scalar_t__,int ,int,int ) ;
 int FUNC_3 (scalar_t__,int ,int,int ) ;
 int FUNC_4 (struct mmc_command*) ;
 int FUNC_5 (struct spi_transfer*,int,int) ;
 int FUNC_6 (struct mmc_spi_host*,struct mmc_command*,int) ;
 int FUNC_7 (struct spi_transfer*,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_10(struct mmc_spi_host *VAR_5,
  struct mmc_request *VAR_6,
  struct mmc_command *VAR_7, int VAR_8)
{
 struct scratch *VAR_9 = VAR_5->data;
 u8 *VAR_10 = VAR_9->status;
 u32 VAR_11 = VAR_7->arg;
 int VAR_12;
 struct spi_transfer *VAR_13;
 FUNC_5(VAR_10++, 0xff, sizeof(VAR_9->status));

 *VAR_10++ = 0x40 | VAR_7->opcode;
 *VAR_10++ = (u8)(VAR_11 >> 24);
 *VAR_10++ = (u8)(VAR_11 >> 16);
 *VAR_10++ = (u8)(VAR_11 >> 8);
 *VAR_10++ = (u8)VAR_11;
 *VAR_10++ = (FUNC_0(0, &VAR_9->status[1], 5) << 1) | 0x01;
 if (VAR_8 && (VAR_6->data->flags & VAR_1)) {
  VAR_10 += 2;

 } else {
  VAR_10 += 10;
  if (VAR_7->flags & VAR_4)
   VAR_10++;
  else if (VAR_7->flags & VAR_3)
   VAR_10 += 4;
  else if (VAR_7->flags & VAR_2)
   VAR_10 = VAR_9->status + sizeof(VAR_9->status);

 }

 FUNC_1(&VAR_5->spi->dev, "  mmc_spi: CMD%d, resp %s\n",
  VAR_7->opcode, FUNC_4(VAR_7));


 FUNC_8(&VAR_5->m);

 VAR_13 = &VAR_5->t;
 FUNC_5(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->tx_buf = VAR_13->rx_buf = VAR_9->status;
 VAR_13->tx_dma = VAR_13->rx_dma = VAR_5->data_dma;
 VAR_13->len = VAR_10 - VAR_9->status;
 VAR_13->cs_change = 1;
 FUNC_7(VAR_13, &VAR_5->m);

 if (VAR_5->dma_dev) {
  VAR_5->m.is_dma_mapped = 1;
  FUNC_3(VAR_5->dma_dev,
    VAR_5->data_dma, sizeof(*VAR_5->data),
    VAR_0);
 }
 VAR_12 = FUNC_9(VAR_5->spi, &VAR_5->m);

 if (VAR_5->dma_dev)
  FUNC_2(VAR_5->dma_dev,
    VAR_5->data_dma, sizeof(*VAR_5->data),
    VAR_0);
 if (VAR_12 < 0) {
  FUNC_1(&VAR_5->spi->dev, "  ... write returned %d\n", VAR_12);
  VAR_7->error = VAR_12;
  return VAR_12;
 }


 return FUNC_6(VAR_5, VAR_7, VAR_8);
}
