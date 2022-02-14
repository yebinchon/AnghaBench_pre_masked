
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_imx_data {int txfifo; int (* trigger ) (struct spi_imx_data*) ;int (* tx ) (struct spi_imx_data*) ;int count; } ;


 int FUNC_0 (struct spi_imx_data*) ;
 int FUNC_1 (struct spi_imx_data*) ;

__attribute__((used)) static void FUNC_2(struct spi_imx_data *VAR_0)
{
 while (VAR_0->txfifo < 8) {
  if (!VAR_0->count)
   break;
  VAR_0->tx(VAR_0);
  VAR_0->txfifo++;
 }

 VAR_0->trigger(VAR_0);
}
