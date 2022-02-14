
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct c2port_device {int name; int dev; int mutex; int flash_access; int access; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct c2port_device*) ;
 int FUNC_1 (int ,char*,int ) ;
 struct c2port_device* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct c2port_device *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;


 if (!VAR_5->access || !VAR_5->flash_access)
  return -VAR_0;

 FUNC_3(&VAR_5->mutex);
 VAR_6 = FUNC_0(VAR_5);
 FUNC_4(&VAR_5->mutex);

 if (VAR_6 < 0) {
  FUNC_1(VAR_5->dev, "cannot erase %s flash\n", VAR_5->name);
  return VAR_6;
 }

 return VAR_4;
}
