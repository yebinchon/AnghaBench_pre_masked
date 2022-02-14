
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_lm70llp {int dummy; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (struct spi_lm70llp*) ;
 int FUNC_1 (struct spi_lm70llp*) ;
 struct spi_lm70llp* FUNC_2 (struct spi_device*) ;

__attribute__((used)) static inline void FUNC_3(struct spi_device *VAR_0, int VAR_1)
{
 struct spi_lm70llp *VAR_2 = FUNC_2(VAR_0);

 if (VAR_1)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_2);
}
