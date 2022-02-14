
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u16 ;
struct spi_transfer {unsigned int rx_dma; int len; unsigned int* rx_buf; } ;
struct spi_device {int dev; } ;
struct scratch {int* status; int crc_val; } ;
struct mmc_spi_host {unsigned int data_dma; scalar_t__ dma_dev; TYPE_1__* mmc; int m; struct scratch* data; struct spi_device* spi; } ;
struct TYPE_2__ {scalar_t__ use_spi_crc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned int*,unsigned int) ;
 int FUNC_2 (int *,char*,int,int,...) ;
 int FUNC_3 (scalar_t__,unsigned int,int,int ) ;
 int FUNC_4 (scalar_t__,unsigned int,int,int ) ;
 int FUNC_5 (struct mmc_spi_host*,int) ;
 int FUNC_6 (struct mmc_spi_host*,unsigned long) ;
 int FUNC_7 (struct spi_device*,int *) ;

__attribute__((used)) static int
FUNC_8(struct mmc_spi_host *VAR_3, struct spi_transfer *VAR_4,
 unsigned long VAR_5)
{
 struct spi_device *VAR_6 = VAR_3->spi;
 int VAR_7;
 struct scratch *VAR_8 = VAR_3->data;
 unsigned int VAR_9;
 u8 VAR_10;




 VAR_7 = FUNC_5(VAR_3, 1);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = VAR_8->status[0];
 if (VAR_7 == 0xff || VAR_7 == 0)
  VAR_7 = FUNC_6(VAR_3, VAR_5);

 if (VAR_7 < 0) {
  FUNC_2(&VAR_6->dev, "read error %02x (%d)\n", VAR_7, VAR_7);
  return VAR_7;
 }




 VAR_9 = 7;
 while (VAR_7 & 0x80) {
  VAR_7 <<= 1;
  VAR_9--;
 }
 VAR_10 = VAR_7 << 1;

 if (VAR_3->dma_dev) {
  FUNC_4(VAR_3->dma_dev,
    VAR_3->data_dma, sizeof(*VAR_8),
    VAR_0);
  FUNC_4(VAR_3->dma_dev,
    VAR_4->rx_dma, VAR_4->len,
    VAR_1);
 }

 VAR_7 = FUNC_7(VAR_6, &VAR_3->m);

 if (VAR_3->dma_dev) {
  FUNC_3(VAR_3->dma_dev,
    VAR_3->data_dma, sizeof(*VAR_8),
    VAR_0);
  FUNC_3(VAR_3->dma_dev,
    VAR_4->rx_dma, VAR_4->len,
    VAR_1);
 }

 if (VAR_9) {



  u8 *VAR_11 = VAR_4->rx_buf;
  unsigned int VAR_12;
  unsigned int VAR_13 = 8 - VAR_9;
  u8 VAR_14;
  for (VAR_12 = VAR_4->len; VAR_12; VAR_12--) {
   VAR_14 = *VAR_11;
   *VAR_11++ = VAR_10 | (VAR_14 >> VAR_9);
   VAR_10 = VAR_14 << VAR_13;
  }
  VAR_11 = (u8 *) &VAR_8->crc_val;
  VAR_14 = *VAR_11;
  *VAR_11++ = VAR_10 | (VAR_14 >> VAR_9);
  VAR_10 = VAR_14 << VAR_13;
  VAR_14 = *VAR_11;
  *VAR_11 = VAR_10 | (VAR_14 >> VAR_9);
 }

 if (VAR_3->mmc->use_spi_crc) {
  u16 VAR_15 = FUNC_1(0, VAR_4->rx_buf, VAR_4->len);

  FUNC_0(&VAR_8->crc_val);
  if (VAR_8->crc_val != VAR_15) {
   FUNC_2(&VAR_6->dev, "read - crc error: crc_val=0x%04x, "
     "computed=0x%04x len=%d\n",
     VAR_8->crc_val, VAR_15, VAR_4->len);
   return -VAR_2;
  }
 }

 VAR_4->rx_buf += VAR_4->len;
 if (VAR_3->dma_dev)
  VAR_4->rx_dma += VAR_4->len;

 return 0;
}
