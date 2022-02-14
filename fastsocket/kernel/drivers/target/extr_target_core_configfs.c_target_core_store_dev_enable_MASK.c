
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char*) ;
 int FUNC_2 (struct se_device*) ;

__attribute__((used)) static ssize_t FUNC_3(
 void *VAR_1,
 const char *VAR_2,
 size_t VAR_3)
{
 struct se_device *VAR_4 = VAR_1;
 char *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, "1");
 if (!VAR_5) {
  FUNC_0("For dev_enable ops, only valid value"
    " is \"1\"\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6)
  return VAR_6;
 return VAR_3;
}
