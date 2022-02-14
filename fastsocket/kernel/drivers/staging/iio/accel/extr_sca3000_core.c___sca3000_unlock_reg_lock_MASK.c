
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int bits_per_word; int len; int cs_change; int* tx_buf; } ;
struct spi_message {int dummy; } ;
struct sca3000_state {int* tx; int us; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct sca3000_state *VAR_1)
{
 struct spi_message VAR_2;
 struct spi_transfer VAR_3[3] = {
  {
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
   .tx_buf = VAR_1->tx,
  }, {
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
   .tx_buf = VAR_1->tx + 2,
  }, {
   .bits_per_word = 8,
   .len = 2,
   .cs_change = 1,
   .tx_buf = VAR_1->tx + 4,
  },
 };
 VAR_1->tx[0] = FUNC_0(VAR_0);
 VAR_1->tx[1] = 0x00;
 VAR_1->tx[2] = FUNC_0(VAR_0);
 VAR_1->tx[3] = 0x50;
 VAR_1->tx[4] = FUNC_0(VAR_0);
 VAR_1->tx[5] = 0xA0;
 FUNC_2(&VAR_2);
 FUNC_1(&VAR_3[0], &VAR_2);
 FUNC_1(&VAR_3[1], &VAR_2);
 FUNC_1(&VAR_3[2], &VAR_2);

 return FUNC_3(VAR_1->us, &VAR_2);
}
