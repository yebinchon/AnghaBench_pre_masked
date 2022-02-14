
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct efivar_entry {int dummy; } ;
struct efivar_attribute {int (* show ) (struct efivar_entry*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct efivar_entry*,char*) ;
 struct efivar_attribute* FUNC_2 (struct attribute*) ;
 struct efivar_entry* FUNC_3 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_3, struct attribute *VAR_4,
    char *VAR_5)
{
 struct efivar_entry *VAR_6 = FUNC_3(VAR_3);
 struct efivar_attribute *VAR_7 = FUNC_2(VAR_4);
 ssize_t VAR_8 = -VAR_2;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_7->show) {
  VAR_8 = VAR_7->show(VAR_6, VAR_5);
 }
 return VAR_8;
}
