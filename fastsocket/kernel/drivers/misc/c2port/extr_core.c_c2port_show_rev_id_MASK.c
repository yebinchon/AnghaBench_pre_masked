
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct c2port_device {int name; int dev; int mutex; int access; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct c2port_device*,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 struct c2port_device* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct c2port_device *VAR_4 = FUNC_2(VAR_1);
 ssize_t VAR_5;


 if (!VAR_4->access)
  return -VAR_0;

 FUNC_3(&VAR_4->mutex);
 VAR_5 = FUNC_0(VAR_4, VAR_3);
 FUNC_4(&VAR_4->mutex);

 if (VAR_5 < 0)
  FUNC_1(VAR_4->dev, "cannot read from %s\n", VAR_4->name);

 return VAR_5;
}
