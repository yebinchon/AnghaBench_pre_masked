
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct spi_device {int dummy; } ;
struct lis3lv02d {struct spi_device* bus_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_device*,int) ;

__attribute__((used)) static int FUNC_1(struct lis3lv02d *VAR_2, int VAR_3, u8 *VAR_4)
{
 struct spi_device *VAR_5 = VAR_2->bus_priv;
 int VAR_6 = FUNC_0(VAR_5, VAR_3 | VAR_1);
 if (VAR_6 < 0)
  return -VAR_0;

 *VAR_4 = (u8) VAR_6;
 return 0;
}
