
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int master; } ;
struct s3c2410_spigpio {int dummy; } ;


 struct s3c2410_spigpio* FUNC_0 (int ) ;

__attribute__((used)) static inline struct s3c2410_spigpio *FUNC_1(struct spi_device *VAR_0)
{
 return FUNC_0(VAR_0->master);
}
