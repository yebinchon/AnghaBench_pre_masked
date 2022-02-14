
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_device {int event; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct uio_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct uio_device *VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return FUNC_2(VAR_3, "%u\n",
    (unsigned int)FUNC_0(&VAR_4->event));
 else
  return -VAR_0;
}
