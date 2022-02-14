
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct spi_device*,unsigned char*,int,unsigned char*,int) ;
 struct spi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, unsigned char VAR_1,
    unsigned char *VAR_2)
{
 struct spi_device *VAR_3 = FUNC_1(VAR_0);

 *VAR_2 = VAR_1 & 0x7f;

 return FUNC_0(VAR_3, VAR_2, 1, VAR_2, 1);
}
