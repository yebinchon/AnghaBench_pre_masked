
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct c2port_device {int mutex; scalar_t__ flash_access; int access; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct c2port_device*) ;
 struct c2port_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct c2port_device *VAR_5 = FUNC_1(VAR_1);


 if (!VAR_5->access)
  return -VAR_0;

 FUNC_2(&VAR_5->mutex);

 FUNC_0(VAR_5);
 VAR_5->flash_access = 0;

 FUNC_3(&VAR_5->mutex);

 return VAR_4;
}
