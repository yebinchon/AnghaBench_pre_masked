
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_imx_data {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct spi_imx_data *VAR_5, int VAR_6)
{
 unsigned int VAR_7 = 0;

 if (VAR_6 & VAR_4)
  VAR_7 |= VAR_1;
 if (VAR_6 & VAR_3)
  VAR_7 |= VAR_0;

 FUNC_0(VAR_7, VAR_5->base + VAR_2);
}
