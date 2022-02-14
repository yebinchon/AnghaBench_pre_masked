
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_transfer {int bits_per_word; int len; int cs_change; int * rx_buf; void** tx_buf; } ;
struct spi_message {int dummy; } ;
struct lis3l02dq_state {int buf_lock; int us; TYPE_1__* indio_dev; void** tx; } ;
struct TYPE_2__ {int scan_count; int scan_mask; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct spi_transfer*) ;
 struct spi_transfer* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void** VAR_2 ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (int ,struct spi_message*) ;

int FUNC_8(struct lis3l02dq_state *VAR_3, u8 *VAR_4)
{
 struct spi_transfer *VAR_5;
 struct spi_message VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;

 VAR_5 = FUNC_2((VAR_3->indio_dev->scan_count) * 2
   * sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_3(&VAR_3->buf_lock);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2)/4; VAR_8++) {
  if (VAR_3->indio_dev->scan_mask & (1 << VAR_8)) {

   VAR_5[VAR_9].tx_buf = VAR_3->tx + 2*VAR_9;
   VAR_3->tx[2*VAR_9] = VAR_2[VAR_8*4];
   VAR_3->tx[2*VAR_9 + 1] = 0;
   if (VAR_4)
    VAR_5[VAR_9].rx_buf = VAR_4 + VAR_9*2;
   VAR_5[VAR_9].bits_per_word = 8;
   VAR_5[VAR_9].len = 2;
   VAR_5[VAR_9].cs_change = 1;
   VAR_9++;


   VAR_5[VAR_9].tx_buf = VAR_3->tx + 2*VAR_9;
   VAR_3->tx[2*VAR_9] = VAR_2[VAR_8*4 + 2];
   VAR_3->tx[2*VAR_9 + 1] = 0;
   if (VAR_4)
    VAR_5[VAR_9].rx_buf = VAR_4 + VAR_9*2;
   VAR_5[VAR_9].bits_per_word = 8;
   VAR_5[VAR_9].len = 2;
   VAR_5[VAR_9].cs_change = 1;
   VAR_9++;
  }
 }



 FUNC_6(&VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_3->indio_dev->scan_count * 2; VAR_9++)
  FUNC_5(&VAR_5[VAR_9], &VAR_6);

 VAR_7 = FUNC_7(VAR_3->us, &VAR_6);
 FUNC_4(&VAR_3->buf_lock);
 FUNC_1(VAR_5);

 return VAR_7;
}
