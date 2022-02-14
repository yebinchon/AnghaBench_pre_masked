
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_imx_data {scalar_t__ base; int spi_clk; } ;
struct spi_imx_config {int bpw; int mode; int cs; int speed_hz; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct spi_imx_data *VAR_11,
  struct spi_imx_config *VAR_12)
{
 unsigned int VAR_13 = VAR_2 | VAR_3;

 VAR_13 |= FUNC_0(VAR_11->spi_clk, VAR_12->speed_hz) <<
  VAR_1;
 VAR_13 |= VAR_12->bpw - 1;

 if (VAR_12->mode & VAR_8)
  VAR_13 |= VAR_4;
 if (VAR_12->mode & VAR_9)
  VAR_13 |= VAR_5;
 if (VAR_12->mode & VAR_10)
  VAR_13 |= VAR_6;
 if (VAR_12->cs < 0)
  VAR_13 |= (VAR_12->cs + 32) << VAR_0;

 FUNC_1(VAR_13, VAR_11->base + VAR_7);

 return 0;
}
