
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct file *VAR_1, struct kobject *VAR_2,
       struct bin_attribute *VAR_3,
       char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 int VAR_7 = 0;
 if (!VAR_5)
  VAR_7 = FUNC_0(VAR_4, VAR_6, "%s\n", VAR_0);
 return VAR_7;
}
