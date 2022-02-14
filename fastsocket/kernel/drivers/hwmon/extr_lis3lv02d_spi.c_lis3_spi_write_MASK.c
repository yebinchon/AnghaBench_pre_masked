
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tmp ;
struct spi_device {int dummy; } ;
struct lis3lv02d {struct spi_device* bus_priv; } ;


 int FUNC_0 (struct spi_device*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct lis3lv02d *VAR_0, int VAR_1, u8 VAR_2)
{
 u8 VAR_3[2] = { VAR_1, VAR_2 };
 struct spi_device *VAR_4 = VAR_0->bus_priv;
 return FUNC_0(VAR_4, VAR_3, sizeof(VAR_3));
}
