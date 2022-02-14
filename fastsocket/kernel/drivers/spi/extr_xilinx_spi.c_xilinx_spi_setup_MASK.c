
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_bitbang {int dummy; } ;
struct xilinx_spi {struct spi_bitbang bitbang; } ;
struct spi_device {int master; } ;


 struct xilinx_spi* FUNC_0 (int ) ;
 int FUNC_1 (struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0)
{
 struct spi_bitbang *VAR_1;
 struct xilinx_spi *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0->master);
 VAR_1 = &VAR_2->bitbang;

 VAR_3 = FUNC_1(VAR_0, ((void*)0));
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
