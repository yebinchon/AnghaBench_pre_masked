
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct kobj_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 char VAR_5[VAR_0];
 char *VAR_6;
 int VAR_7;

 if (VAR_4 >= VAR_0)
  return 0;

 FUNC_1(VAR_5, VAR_3, VAR_4);

 VAR_6 = FUNC_2(VAR_5, '\n');
 if (!VAR_6)
  VAR_6 = &VAR_5[VAR_4];
 *VAR_6 = '\0';

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7)
  return VAR_7;

 return VAR_4;
}
