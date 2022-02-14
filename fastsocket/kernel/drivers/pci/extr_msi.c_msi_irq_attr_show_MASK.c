
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_desc {int dummy; } ;
struct msi_attribute {int (* show ) (struct msi_desc*,struct msi_attribute*,char*) ;} ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct msi_desc*,struct msi_attribute*,char*) ;
 struct msi_attribute* FUNC_1 (struct attribute*) ;
 struct msi_desc* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
     struct attribute *VAR_2, char *VAR_3)
{
 struct msi_attribute *VAR_4 = FUNC_1(VAR_2);
 struct msi_desc *VAR_5 = FUNC_2(VAR_1);

 if (!VAR_4->show)
  return -VAR_0;

 return VAR_4->show(VAR_5, VAR_4, VAR_3);
}
