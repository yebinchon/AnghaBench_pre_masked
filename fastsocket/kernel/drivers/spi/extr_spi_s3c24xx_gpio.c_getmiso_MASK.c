
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_device {int dummy; } ;
struct s3c2410_spigpio {TYPE_1__* info; } ;
struct TYPE_2__ {int pin_miso; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct s3c2410_spigpio* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static inline u32 FUNC_2(struct spi_device *VAR_0)
{
 struct s3c2410_spigpio *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1->info->pin_miso) ? 1 : 0;
}
