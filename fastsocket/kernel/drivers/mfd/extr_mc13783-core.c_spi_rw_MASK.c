
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_transfer {void const* tx_buf; size_t len; int delay_usecs; int cs_change; int * rx_buf; } ;
struct spi_message {scalar_t__ status; int actual_length; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_1 (struct spi_message*) ;
 scalar_t__ FUNC_2 (struct spi_device*,struct spi_message*) ;

__attribute__((used)) static inline int FUNC_3(struct spi_device *VAR_1, u8 * VAR_2, size_t VAR_3)
{
 struct spi_transfer VAR_4 = {
  .tx_buf = (const void *)VAR_2,
  .rx_buf = VAR_2,
  .len = VAR_3,
  .cs_change = 0,
  .delay_usecs = 0,
 };
 struct spi_message VAR_5;

 FUNC_1(&VAR_5);
 FUNC_0(&VAR_4, &VAR_5);
 if (FUNC_2(VAR_1, &VAR_5) != 0 || VAR_5.status != 0)
  return -VAR_0;
 return VAR_3 - VAR_5.actual_length;
}
