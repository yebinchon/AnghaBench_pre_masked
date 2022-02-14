
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_attribute) ;
 int FUNC_1 (struct device*,struct device_attribute*) ;
 int FUNC_2 (struct device*,struct device_attribute*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
     struct device_attribute *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 if (VAR_1) {
  for (VAR_3 = 0; FUNC_0(VAR_1[VAR_3]); VAR_3++) {
   VAR_2 = FUNC_1(VAR_0, &VAR_1[VAR_3]);
   if (VAR_2)
    break;
  }
  if (VAR_2)
   while (--VAR_3 >= 0)
    FUNC_2(VAR_0, &VAR_1[VAR_3]);
 }
 return VAR_2;
}
