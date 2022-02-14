
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {int speed_hz; unsigned int len; void* rx_buf; void* tx_buf; void* rx_dma; void* tx_dma; } ;
struct spi_device {int max_speed_hz; int dev; } ;
struct scratch {scalar_t__* status; } ;
struct scatterlist {unsigned int length; scalar_t__ offset; } ;
struct TYPE_4__ {int transfers; } ;
struct TYPE_3__ {unsigned int len; int rx_dma; int tx_dma; int rx_buf; int tx_buf; int transfer_list; } ;
struct mmc_spi_host {int data_dma; struct device* dma_dev; TYPE_2__ m; TYPE_1__ early_status; struct scratch* data; struct spi_device* spi; struct spi_transfer t; } ;
struct mmc_data {int blocks; int flags; int timeout_ns; int timeout_clks; unsigned int sg_len; unsigned int bytes_xfered; int error; struct scatterlist* sg; } ;
struct mmc_command {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,char*,...) ;
 void* FUNC_2 (struct device*,int ,int ,unsigned int,int) ;
 int FUNC_3 (struct device*,int ,int,int) ;
 int FUNC_4 (struct device*,int ,int,int) ;
 int FUNC_5 (struct device*,void*,unsigned int,int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (scalar_t__*,int,unsigned int const) ;
 unsigned int FUNC_11 (unsigned int,int) ;
 int FUNC_12 (struct mmc_spi_host*,struct spi_transfer*,unsigned long) ;
 int FUNC_13 (struct mmc_spi_host*,int,int) ;
 int FUNC_14 (struct mmc_spi_host*,unsigned long) ;
 int FUNC_15 (struct mmc_spi_host*,struct spi_transfer*,unsigned long) ;
 int FUNC_16 (struct scatterlist*) ;
 int FUNC_17 (struct spi_device*,TYPE_2__*) ;
 int FUNC_18 (unsigned int) ;

__attribute__((used)) static void
FUNC_19(struct mmc_spi_host *VAR_6, struct mmc_command *VAR_7,
  struct mmc_data *VAR_8, u32 VAR_9)
{
 struct spi_device *VAR_10 = VAR_6->spi;
 struct device *VAR_11 = VAR_6->dma_dev;
 struct spi_transfer *VAR_12;
 enum dma_data_direction VAR_13;
 struct scatterlist *VAR_14;
 unsigned VAR_15;
 int VAR_16 = (VAR_8->blocks > 1);
 u32 VAR_17;
 unsigned long VAR_18;

 if (VAR_8->flags & VAR_3)
  VAR_13 = VAR_1;
 else
  VAR_13 = VAR_2;
 FUNC_13(VAR_6, VAR_16, VAR_13);
 VAR_12 = &VAR_6->t;

 if (VAR_12->speed_hz)
  VAR_17 = VAR_12->speed_hz;
 else
  VAR_17 = VAR_10->max_speed_hz;

 VAR_18 = VAR_8->timeout_ns +
    VAR_8->timeout_clks * 1000000 / VAR_17;
 VAR_18 = FUNC_18((unsigned int)(VAR_18 / 1000)) + 1;




 for (VAR_14 = VAR_8->sg, VAR_15 = VAR_8->sg_len; VAR_15; VAR_15--, VAR_14++) {
  int VAR_19 = 0;
  dma_addr_t VAR_20 = 0;
  void *VAR_21;
  unsigned VAR_22 = VAR_14->length;
  enum dma_data_direction VAR_23 = VAR_13;




  if (VAR_11) {

   if ((VAR_14->offset != 0 || VAR_22 != VAR_4)
     && VAR_23 == VAR_1)
    VAR_23 = VAR_0;

   VAR_20 = FUNC_2(VAR_11, FUNC_16(VAR_14), 0,
      VAR_4, VAR_23);
   if (VAR_13 == VAR_2)
    VAR_12->tx_dma = VAR_20 + VAR_14->offset;
   else
    VAR_12->rx_dma = VAR_20 + VAR_14->offset;
  }


  VAR_21 = FUNC_7(FUNC_16(VAR_14));
  if (VAR_13 == VAR_2)
   VAR_12->tx_buf = VAR_21 + VAR_14->offset;
  else
   VAR_12->rx_buf = VAR_21 + VAR_14->offset;


  while (VAR_22) {
   VAR_12->len = FUNC_11(VAR_22, VAR_9);

   FUNC_1(&VAR_6->spi->dev,
    "    mmc_spi: %s block, %d bytes\n",
    (VAR_13 == VAR_2)
    ? "write"
    : "read",
    VAR_12->len);

   if (VAR_13 == VAR_2)
    VAR_19 = FUNC_15(VAR_6, VAR_12, VAR_18);
   else
    VAR_19 = FUNC_12(VAR_6, VAR_12, VAR_18);
   if (VAR_19 < 0)
    break;

   VAR_8->bytes_xfered += VAR_12->len;
   VAR_22 -= VAR_12->len;

   if (!VAR_16)
    break;
  }


  if (VAR_13 == VAR_1)
   FUNC_6(FUNC_16(VAR_14));
  FUNC_8(FUNC_16(VAR_14));
  if (VAR_11)
   FUNC_5(VAR_11, VAR_20, VAR_4, VAR_23);

  if (VAR_19 < 0) {
   VAR_8->error = VAR_19;
   FUNC_1(&VAR_10->dev, "%s status %d\n",
    (VAR_13 == VAR_2)
     ? "write" : "read",
    VAR_19);
   break;
  }
 }







 if (VAR_13 == VAR_2 && VAR_16) {
  struct scratch *VAR_24 = VAR_6->data;
  int VAR_25;
  const unsigned VAR_26 = sizeof(VAR_24->status);

  FUNC_1(&VAR_10->dev, "    mmc_spi: STOP_TRAN\n");






  FUNC_0(&VAR_6->m.transfers);
  FUNC_9(&VAR_6->early_status.transfer_list,
    &VAR_6->m.transfers);

  FUNC_10(VAR_24->status, 0xff, VAR_26);
  VAR_24->status[0] = VAR_5;

  VAR_6->early_status.tx_buf = VAR_6->early_status.rx_buf;
  VAR_6->early_status.tx_dma = VAR_6->early_status.rx_dma;
  VAR_6->early_status.len = VAR_26;

  if (VAR_6->dma_dev)
   FUNC_4(VAR_6->dma_dev,
     VAR_6->data_dma, sizeof(*VAR_24),
     VAR_0);

  VAR_25 = FUNC_17(VAR_10, &VAR_6->m);

  if (VAR_6->dma_dev)
   FUNC_3(VAR_6->dma_dev,
     VAR_6->data_dma, sizeof(*VAR_24),
     VAR_0);

  if (VAR_25 < 0) {
   if (!VAR_8->error)
    VAR_8->error = VAR_25;
   return;
  }





  for (VAR_25 = 2; VAR_25 < VAR_26; VAR_25++) {
   if (VAR_24->status[VAR_25] != 0)
    return;
  }
  VAR_25 = FUNC_14(VAR_6, VAR_18);
  if (VAR_25 < 0 && !VAR_8->error)
   VAR_8->error = VAR_25;
 }
}
