
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct csrowdev_attribute {int private; int (* store ) (struct csrow_info*,char const*,size_t,int ) ;} ;
struct csrow_info {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct csrow_info*,char const*,size_t,int ) ;
 struct csrow_info* FUNC_1 (struct kobject*) ;
 struct csrowdev_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct csrow_info *VAR_5 = FUNC_1(VAR_1);
 struct csrowdev_attribute *VAR_6 = FUNC_2(VAR_2);

 if (VAR_6->store)
  return VAR_6->store(VAR_5,
     VAR_3,
     VAR_4, VAR_6->private);
 return -VAR_0;
}
