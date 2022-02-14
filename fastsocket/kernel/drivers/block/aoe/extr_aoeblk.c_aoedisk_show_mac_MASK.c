
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {struct aoedev* private_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aoetgt {int addr; } ;
struct aoedev {struct aoetgt** targets; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct gendisk* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct gendisk *VAR_4 = FUNC_0(VAR_1);
 struct aoedev *VAR_5 = VAR_4->private_data;
 struct aoetgt *VAR_6 = VAR_5->targets[0];

 if (VAR_6 == ((void*)0))
  return FUNC_1(VAR_3, VAR_0, "none\n");
 return FUNC_1(VAR_3, VAR_0, "%pm\n", VAR_6->addr);
}
