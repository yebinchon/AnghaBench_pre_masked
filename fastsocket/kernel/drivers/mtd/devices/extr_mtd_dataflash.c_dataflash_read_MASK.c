
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef int u_char ;
struct spi_transfer {unsigned int* tx_buf; int len; int * rx_buf; int tx_dma; } ;
struct spi_message {int actual_length; } ;
struct mtd_info {scalar_t__ size; scalar_t__ priv; } ;
struct dataflash {unsigned int page_size; unsigned int page_offset; unsigned int* command; TYPE_1__* spi; int lock; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned int,unsigned int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_5 (struct spi_message*) ;
 int FUNC_6 (TYPE_1__*,struct spi_message*) ;

__attribute__((used)) static int FUNC_7(struct mtd_info *VAR_5, loff_t VAR_6, size_t VAR_7,
          size_t *VAR_8, u_char *VAR_9)
{
 struct dataflash *VAR_10 = (struct dataflash *)VAR_5->priv;
 struct spi_transfer VAR_11[2] = { { .tx_dma = 0, }, };
 struct spi_message VAR_12;
 unsigned int VAR_13;
 uint8_t *VAR_14;
 int VAR_15;

 FUNC_0(VAR_2, "%s: read 0x%x..0x%x\n",
  FUNC_1(&VAR_10->spi->dev), (unsigned)VAR_6, (unsigned)(VAR_6 + VAR_7));

 *VAR_8 = 0;


 if (!VAR_7)
  return 0;
 if (VAR_6 + VAR_7 > VAR_5->size)
  return -VAR_0;


 VAR_13 = (((unsigned)VAR_6 / VAR_10->page_size) << VAR_10->page_offset)
  + ((unsigned)VAR_6 % VAR_10->page_size);

 VAR_14 = VAR_10->command;

 FUNC_0(VAR_3, "READ: (%x) %x %x %x\n",
  VAR_14[0], VAR_14[1], VAR_14[2], VAR_14[3]);

 FUNC_5(&VAR_12);

 VAR_11[0].tx_buf = VAR_14;
 VAR_11[0].len = 8;
 FUNC_4(&VAR_11[0], &VAR_12);

 VAR_11[1].rx_buf = VAR_9;
 VAR_11[1].len = VAR_7;
 FUNC_4(&VAR_11[1], &VAR_12);

 FUNC_2(&VAR_10->lock);





 VAR_14[0] = VAR_4;
 VAR_14[1] = (uint8_t)(VAR_13 >> 16);
 VAR_14[2] = (uint8_t)(VAR_13 >> 8);
 VAR_14[3] = (uint8_t)(VAR_13 >> 0);


 VAR_15 = FUNC_6(VAR_10->spi, &VAR_12);
 FUNC_3(&VAR_10->lock);

 if (VAR_15 >= 0) {
  *VAR_8 = VAR_12.actual_length - 8;
  VAR_15 = 0;
 } else
  FUNC_0(VAR_1, "%s: read %x..%x --> %d\n",
   FUNC_1(&VAR_10->spi->dev),
   (unsigned)VAR_6, (unsigned)(VAR_6 + VAR_7),
   VAR_15);
 return VAR_15;
}
