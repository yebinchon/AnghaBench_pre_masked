
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yealink_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct yealink_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct yealink_dev*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
  struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct yealink_dev *VAR_6;

 FUNC_1(&VAR_1);
 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(&VAR_1);
  return -VAR_0;
 }


 FUNC_3(VAR_6, (char *)VAR_4, VAR_5);
 FUNC_2(&VAR_1);
 return VAR_5;
}
