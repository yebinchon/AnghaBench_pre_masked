
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct claw_privbk {struct claw_env* p_env; } ;
struct claw_env {char* adapter_name; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct claw_privbk* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct claw_privbk *VAR_4;
 struct claw_env * VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_5 = VAR_4->p_env;
 return FUNC_1(VAR_3, "%s\n", VAR_5->adapter_name);
}
