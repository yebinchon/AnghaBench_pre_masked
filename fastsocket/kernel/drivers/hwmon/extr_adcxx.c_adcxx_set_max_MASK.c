
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adcxx {unsigned long reference; int lock; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct adcxx* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned long*) ;
 struct spi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
 struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct spi_device *VAR_6 = FUNC_4(VAR_2);
 struct adcxx *VAR_7 = FUNC_0(&VAR_6->dev);
 unsigned long VAR_8;

 if (FUNC_3(VAR_4, 10, &VAR_8))
  return -VAR_0;

 if (FUNC_1(&VAR_7->lock))
  return -VAR_1;

 VAR_7->reference = VAR_8;

 FUNC_2(&VAR_7->lock);

 return VAR_5;
}
