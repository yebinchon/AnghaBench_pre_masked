
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_imx_data {scalar_t__ base; int spi_clk; } ;
struct spi_imx_config {int bpw; int mode; int cs; int speed_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_imx_data *VAR_15,
  struct spi_imx_config *VAR_16)
{
 unsigned int VAR_17 = VAR_3 | VAR_4;

 VAR_17 |= FUNC_2(VAR_15->spi_clk, VAR_16->speed_hz) <<
  VAR_2;

 if (FUNC_0())
  VAR_17 |= (VAR_16->bpw - 1) << VAR_0;
 else if (FUNC_1()) {
  VAR_17 |= (VAR_16->bpw - 1) << VAR_9;
  VAR_17 |= VAR_7;
 }

 if (VAR_16->mode & VAR_12)
  VAR_17 |= VAR_5;
 if (VAR_16->mode & VAR_13)
  VAR_17 |= VAR_6;
 if (VAR_16->mode & VAR_14)
  VAR_17 |= VAR_8;
 if (VAR_16->cs < 0) {
  if (FUNC_0())
   VAR_17 |= (VAR_16->cs + 32) << VAR_1;
  else if (FUNC_1())
   VAR_17 |= (VAR_16->cs + 32) << VAR_10;
 }

 FUNC_3(VAR_17, VAR_15->base + VAR_11);

 return 0;
}
