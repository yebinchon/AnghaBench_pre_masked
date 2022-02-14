
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cpumask {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int bus; } ;


 scalar_t__ VAR_0 ;
 struct cpumask* FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,struct cpumask const*) ;
 TYPE_1__* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 const struct cpumask *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(FUNC_2(VAR_1)->bus);
 VAR_5 = FUNC_1(VAR_3, VAR_0-2, VAR_4);
 VAR_3[VAR_5++] = '\n';
 VAR_3[VAR_5] = '\0';
 return VAR_5;
}
