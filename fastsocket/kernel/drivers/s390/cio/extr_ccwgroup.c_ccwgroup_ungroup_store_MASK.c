
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccwgroup_device {scalar_t__ state; int onoff; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,int ) ;
 struct ccwgroup_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_4, struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct ccwgroup_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_4);


 if (FUNC_0(&VAR_8->onoff, 0, 1) != 0)
  return -VAR_1;
 if (VAR_8->state != VAR_0) {
  VAR_9 = -VAR_2;
  goto out;
 }



 VAR_9 = FUNC_2(VAR_4, VAR_3);
out:
 if (VAR_9) {
  if (VAR_9 != -VAR_1)

   FUNC_1(&VAR_8->onoff, 0);
  return VAR_9;
 }
 return VAR_7;
}
