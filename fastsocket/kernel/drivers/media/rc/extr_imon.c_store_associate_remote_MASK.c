
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imon_context {int rf_isassociating; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct imon_context* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct imon_context*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct imon_context *VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_5->lock);
 VAR_5->rf_isassociating = 1;
 FUNC_3(VAR_5);
 FUNC_2(&VAR_5->lock);

 return VAR_4;
}
