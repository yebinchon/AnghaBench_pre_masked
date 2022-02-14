
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adcxx {int reference; int lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct adcxx* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;
 struct spi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct spi_device *VAR_4 = FUNC_4(VAR_1);
 struct adcxx *VAR_5 = FUNC_0(&VAR_4->dev);
 u32 VAR_6;

 if (FUNC_1(&VAR_5->lock))
  return -VAR_0;

 VAR_6 = VAR_5->reference;

 FUNC_2(&VAR_5->lock);

 return FUNC_3(VAR_3, "%d\n", VAR_6);
}
