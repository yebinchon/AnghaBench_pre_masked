
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ap_device {int requestq_count; int lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ap_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct ap_device *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 FUNC_1(&VAR_4->lock);
 VAR_5 = FUNC_0(VAR_3, VAR_0, "%d\n", VAR_4->requestq_count);
 FUNC_2(&VAR_4->lock);
 return VAR_5;
}
