
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct csrowdev_attribute {int private; int (* show ) (struct csrow_info*,char*,int ) ;} ;
struct csrow_info {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct csrow_info*,char*,int ) ;
 struct csrow_info* FUNC_1 (struct kobject*) ;
 struct csrowdev_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
   struct attribute *VAR_2, char *VAR_3)
{
 struct csrow_info *VAR_4 = FUNC_1(VAR_1);
 struct csrowdev_attribute *VAR_5 = FUNC_2(VAR_2);

 if (VAR_5->show)
  return VAR_5->show(VAR_4,
     VAR_3, VAR_5->private);
 return -VAR_0;
}
