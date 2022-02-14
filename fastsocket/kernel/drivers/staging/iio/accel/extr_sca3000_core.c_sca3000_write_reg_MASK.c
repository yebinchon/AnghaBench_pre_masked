
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {int bits_per_word; int len; int cs_change; int * tx_buf; } ;
struct spi_message {int dummy; } ;
struct sca3000_state {int us; int * tx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;

int FUNC_4(struct sca3000_state *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct spi_transfer VAR_3 = {
  .bits_per_word = 8,
  .len = 2,
  .cs_change = 1,
  .tx_buf = VAR_0->tx,
 };
 struct spi_message VAR_4;

 VAR_0->tx[0] = FUNC_0(VAR_1);
 VAR_0->tx[1] = VAR_2;
 FUNC_2(&VAR_4);
 FUNC_1(&VAR_3, &VAR_4);

 return FUNC_3(VAR_0->us, &VAR_4);
}
