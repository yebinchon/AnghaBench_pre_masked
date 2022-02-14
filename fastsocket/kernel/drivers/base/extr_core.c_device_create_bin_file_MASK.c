
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct bin_attribute {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct bin_attribute*) ;

int FUNC_1(struct device *VAR_1, struct bin_attribute *VAR_2)
{
 int VAR_3 = -VAR_0;
 if (VAR_1)
  VAR_3 = FUNC_0(&VAR_1->kobj, VAR_2);
 return VAR_3;
}
