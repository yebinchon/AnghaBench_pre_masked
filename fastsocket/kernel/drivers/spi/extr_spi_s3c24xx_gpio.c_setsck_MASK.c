
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct s3c2410_spigpio {TYPE_1__* info; } ;
struct TYPE_2__ {int pin_clk; } ;


 int FUNC_0 (int ,int) ;
 struct s3c2410_spigpio* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static inline void FUNC_2(struct spi_device *VAR_0, int VAR_1)
{
 struct s3c2410_spigpio *VAR_2 = FUNC_1(VAR_0);
 FUNC_0(VAR_2->info->pin_clk, VAR_1 ? 1 : 0);
}
