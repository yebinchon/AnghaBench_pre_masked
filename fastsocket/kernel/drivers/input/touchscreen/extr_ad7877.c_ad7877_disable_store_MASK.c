
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ad7877 {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct ad7877*) ;
 int FUNC_1 (struct ad7877*) ;
 struct ad7877* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
         struct device_attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct ad7877 *VAR_4 = FUNC_2(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5)
  FUNC_0(VAR_4);
 else
  FUNC_1(VAR_4);

 return VAR_3;
}
