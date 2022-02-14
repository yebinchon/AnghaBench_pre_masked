
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tle62x0_state {unsigned char* tx_buff; int nr_gpio; int us; int rx_buff; } ;
struct spi_transfer {unsigned char* tx_buf; int len; int rx_buf; } ;
struct spi_message {int dummy; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (int ,struct spi_message*) ;

__attribute__((used)) static inline int FUNC_3(struct tle62x0_state *VAR_1)
{
 unsigned char *VAR_2 = VAR_1->tx_buff;
 struct spi_transfer VAR_3 = {
  .tx_buf = VAR_2,
  .rx_buf = VAR_1->rx_buff,
  .len = (VAR_1->nr_gpio * 2) / 8,
 };
 struct spi_message VAR_4;

 VAR_2[0] = VAR_0;
 VAR_2[1] = 0x00;
 VAR_2[2] = 0x00;
 VAR_2[3] = 0x00;

 FUNC_1(&VAR_4);
 FUNC_0(&VAR_3, &VAR_4);

 return FUNC_2(VAR_1->us, &VAR_4);
}
