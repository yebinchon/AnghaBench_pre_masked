
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int dummy; } ;
struct spi_device {int master; } ;
struct au1550_spi {int (* txrx_bufs ) (struct spi_device*,struct spi_transfer*) ;} ;


 struct au1550_spi* FUNC_0 (int ) ;
 int FUNC_1 (struct spi_device*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0, struct spi_transfer *VAR_1)
{
 struct au1550_spi *VAR_2 = FUNC_0(VAR_0->master);
 return VAR_2->txrx_bufs(VAR_0, VAR_1);
}
