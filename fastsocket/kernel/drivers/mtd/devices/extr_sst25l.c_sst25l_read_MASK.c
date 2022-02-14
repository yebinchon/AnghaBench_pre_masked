
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int transfer ;
struct TYPE_2__ {size_t size; } ;
struct sst25l_flash {int lock; int spi; TYPE_1__ mtd; } ;
struct spi_transfer {unsigned char* tx_buf; int len; unsigned char* rx_buf; } ;
struct spi_message {int actual_length; } ;
struct mtd_info {int dummy; } ;
typedef size_t loff_t ;
typedef int command ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct spi_transfer**,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;
 int FUNC_6 (struct sst25l_flash*) ;
 struct sst25l_flash* FUNC_7 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_8(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
         size_t *VAR_5, unsigned char *VAR_6)
{
 struct sst25l_flash *VAR_7 = FUNC_7(VAR_2);
 struct spi_transfer VAR_8[2];
 struct spi_message VAR_9;
 unsigned char VAR_10[4];
 int VAR_11;


 if (VAR_4 == 0)
  return 0;

 if (VAR_3 + VAR_4 > VAR_7->mtd.size)
  return -VAR_0;

 if (VAR_5)
  *VAR_5 = 0;

 FUNC_4(&VAR_9);
 FUNC_0(&VAR_8, 0, sizeof(VAR_8));

 VAR_10[0] = VAR_1;
 VAR_10[1] = VAR_3 >> 16;
 VAR_10[2] = VAR_3 >> 8;
 VAR_10[3] = VAR_3;

 VAR_8[0].tx_buf = VAR_10;
 VAR_8[0].len = sizeof(VAR_10);
 FUNC_3(&VAR_8[0], &VAR_9);

 VAR_8[1].rx_buf = VAR_6;
 VAR_8[1].len = VAR_4;
 FUNC_3(&VAR_8[1], &VAR_9);

 FUNC_1(&VAR_7->lock);


 VAR_11 = FUNC_6(VAR_7);
 if (VAR_11) {
  FUNC_2(&VAR_7->lock);
  return VAR_11;
 }

 FUNC_5(VAR_7->spi, &VAR_9);

 if (VAR_5 && VAR_9.actual_length > sizeof(VAR_10))
  *VAR_5 += VAR_9.actual_length - sizeof(VAR_10);

 FUNC_2(&VAR_7->lock);
 return 0;
}
