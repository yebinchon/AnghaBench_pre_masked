
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbd_device {scalar_t__ pid; } ;
struct gendisk {scalar_t__ private_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct gendisk* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,long) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
   struct device_attribute *VAR_1, char *VAR_2)
{
 struct gendisk *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%ld\n",
  (long) ((struct nbd_device *)VAR_3->private_data)->pid);
}
