
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
struct spi_transfer {int bits_per_word; int len; int cs_change; int * rx_buf; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct sca3000_state {TYPE_1__* us; int * tx; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (TYPE_1__*,struct spi_message*) ;

int FUNC_8(struct sca3000_state *VAR_2,
        uint8_t VAR_3,
        u8 **VAR_4,
        int VAR_5)
{
 int VAR_6;
 struct spi_message VAR_7;
 struct spi_transfer VAR_8 = {
  .bits_per_word = 8,
  .len = VAR_5 + 1,
  .cs_change = 1,
  .tx_buf = VAR_2->tx,
 };

 *VAR_4 = FUNC_4(VAR_5 + 1, VAR_1);
 if (*VAR_4 == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto error_ret;
 }
 VAR_8.rx_buf = *VAR_4;
 VAR_2->tx[0] = FUNC_0(VAR_3);
 FUNC_6(&VAR_7);
 FUNC_5(&VAR_8, &VAR_7);

 VAR_6 = FUNC_7(VAR_2->us, &VAR_7);

 if (VAR_6) {
  FUNC_1(FUNC_2(&VAR_2->us->dev), "problem reading register");
  goto error_free_rx;
 }

 return 0;
error_free_rx:
 FUNC_3(*VAR_4);
error_ret:
 return VAR_6;

}
