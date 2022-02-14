
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int master; } ;
struct sh_sci_spi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sh_sci_spi*) ;
 int FUNC_1 (int ) ;
 struct sh_sci_spi* FUNC_2 (int ) ;

__attribute__((used)) static inline u32 FUNC_3(struct spi_device *VAR_1)
{
 struct sh_sci_spi *VAR_2 = FUNC_2(VAR_1->master);

 return (FUNC_1(FUNC_0(VAR_2)) & VAR_0) ? 1 : 0;
}
