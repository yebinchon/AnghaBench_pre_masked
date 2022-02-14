
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {int bits_per_word; int len; int rx_buf; int tx_buf; } ;
struct spi_device {int bits_per_word; int master; } ;
struct mpc8xxx_spi {int count; int (* get_tx ) (struct mpc8xxx_spi*) ;TYPE_1__* base; int done; int rx; int tx; } ;
struct TYPE_2__ {int mask; int transmit; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 struct mpc8xxx_spi* FUNC_2 (int ) ;
 int FUNC_3 (struct mpc8xxx_spi*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_2, struct spi_transfer *VAR_3)
{
 struct mpc8xxx_spi *VAR_4;
 u32 VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_2(VAR_2->master);

 VAR_4->tx = VAR_3->tx_buf;
 VAR_4->rx = VAR_3->rx_buf;
 VAR_7 = VAR_2->bits_per_word;
 if (VAR_3->bits_per_word)
  VAR_7 = VAR_3->bits_per_word;
 VAR_6 = VAR_3->len;
 if (VAR_7 > 8) {

  if (VAR_6 & 1)
   return -VAR_0;
  VAR_6 /= 2;
 }
 if (VAR_7 > 16) {

  if (VAR_6 & 1)
   return -VAR_0;
  VAR_6 /= 2;
 }
 VAR_4->count = VAR_6;

 FUNC_0(VAR_4->done);


 FUNC_1(&VAR_4->base->mask, VAR_1);


 VAR_5 = VAR_4->get_tx(VAR_4);
 FUNC_1(&VAR_4->base->transmit, VAR_5);

 FUNC_4(&VAR_4->done);


 FUNC_1(&VAR_4->base->mask, 0);

 return VAR_4->count;
}
