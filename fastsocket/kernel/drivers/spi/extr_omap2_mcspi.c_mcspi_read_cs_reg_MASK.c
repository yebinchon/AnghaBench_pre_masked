
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {struct omap2_mcspi_cs* controller_state; } ;
struct omap2_mcspi_cs {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(const struct spi_device *VAR_0, int VAR_1)
{
 struct omap2_mcspi_cs *VAR_2 = VAR_0->controller_state;

 return FUNC_0(VAR_2->base + VAR_1);
}
