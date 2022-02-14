
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {int dummy; } ;
struct omap2_mcspi {scalar_t__ base; } ;


 int FUNC_0 (int ,scalar_t__) ;
 struct omap2_mcspi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static inline void FUNC_2(struct spi_master *VAR_0,
  int VAR_1, u32 VAR_2)
{
 struct omap2_mcspi *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_3->base + VAR_1);
}
