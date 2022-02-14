
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int ide_hwif_t ;


 size_t VAR_0 ;
 int * FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 ide_hwif_t *VAR_5 = FUNC_0(VAR_1);

 if (FUNC_2(VAR_3, "1", VAR_4))
  return -VAR_0;

 FUNC_1(VAR_5);

 return VAR_4;
}
