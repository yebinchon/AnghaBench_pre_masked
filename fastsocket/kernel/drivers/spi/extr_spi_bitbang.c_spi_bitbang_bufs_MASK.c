
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int dummy; } ;
struct spi_device {struct spi_bitbang_cs* controller_state; } ;
struct spi_bitbang_cs {unsigned int nsecs; int (* txrx_bufs ) (struct spi_device*,int ,unsigned int,struct spi_transfer*) ;int txrx_word; } ;


 int FUNC_0 (struct spi_device*,int ,unsigned int,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_1(struct spi_device *VAR_0, struct spi_transfer *VAR_1)
{
 struct spi_bitbang_cs *VAR_2 = VAR_0->controller_state;
 unsigned VAR_3 = VAR_2->nsecs;

 return VAR_2->txrx_bufs(VAR_0, VAR_2->txrx_word, VAR_3, VAR_1);
}
