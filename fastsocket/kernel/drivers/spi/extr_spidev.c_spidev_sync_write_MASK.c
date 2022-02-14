
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spidev_data {int buffer; } ;
struct spi_transfer {size_t len; int tx_buf; } ;
struct spi_message {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 int FUNC_2 (struct spidev_data*,struct spi_message*) ;

__attribute__((used)) static inline ssize_t
FUNC_3(struct spidev_data *VAR_0, size_t VAR_1)
{
 struct spi_transfer VAR_2 = {
   .tx_buf = VAR_0->buffer,
   .len = VAR_1,
  };
 struct spi_message VAR_3;

 FUNC_1(&VAR_3);
 FUNC_0(&VAR_2, &VAR_3);
 return FUNC_2(VAR_0, &VAR_3);
}
