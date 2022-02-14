
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cpumask {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,struct cpumask const*) ;
 struct cpumask* FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__,struct cpumask const*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     int VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 int VAR_5;
 const struct cpumask *VAR_6;

 VAR_6 = FUNC_1(FUNC_3(VAR_1));
 VAR_5 = VAR_2 ?
  FUNC_0(VAR_4, VAR_0-2, VAR_6) :
  FUNC_2(VAR_4, VAR_0-2, VAR_6);
 VAR_4[VAR_5++] = '\n';
 VAR_4[VAR_5] = '\0';
 return VAR_5;
}
