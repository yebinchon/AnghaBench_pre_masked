
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_imx_data {scalar_t__ base; int spi_clk; } ;
struct spi_imx_config {int bpw; int mode; int speed_hz; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct spi_imx_data *VAR_8,
  struct spi_imx_config *VAR_9)
{
 unsigned int VAR_10 = VAR_1 | VAR_2;

 VAR_10 |= FUNC_0(VAR_8->spi_clk, VAR_9->speed_hz) <<
  VAR_0;
 VAR_10 |= VAR_9->bpw - 1;

 if (VAR_9->mode & VAR_6)
  VAR_10 |= VAR_3;
 if (VAR_9->mode & VAR_7)
  VAR_10 |= VAR_4;

 FUNC_1(VAR_10, VAR_8->base + VAR_5);

 return 0;
}
