
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {struct omap2_mcspi_cs* controller_state; } ;
struct omap2_mcspi_cs {int chconf0; } ;


 int VAR_0 ;
 int FUNC_0 (struct spi_device const*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(const struct spi_device *VAR_1, u32 VAR_2)
{
 struct omap2_mcspi_cs *VAR_3 = VAR_1->controller_state;

 VAR_3->chconf0 = VAR_2;
 FUNC_0(VAR_1, VAR_0, VAR_2);
}
