
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct claw_privbk {struct claw_env* p_env; } ;
struct claw_env {int* host_name; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct claw_privbk* FUNC_2 (struct device*) ;
 int FUNC_3 (int*,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int*,char const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_4, struct device_attribute *VAR_5,
  const char *VAR_6, size_t VAR_7)
{
 struct claw_privbk *VAR_8;
 struct claw_env * VAR_9;

 VAR_8 = FUNC_2(VAR_4);
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = VAR_8->p_env;
 if (VAR_7 > VAR_2+1)
  return -VAR_0;
 FUNC_3(VAR_9->host_name, 0x20, VAR_2);
 FUNC_4(VAR_9->host_name,VAR_6, VAR_7);
 VAR_9->host_name[VAR_7-1] = 0x20;
 VAR_9->host_name[VAR_2] = 0x00;
 FUNC_0(2, VAR_3, "HstnSet");
 FUNC_1(2, VAR_3, "%s", VAR_9->host_name);

 return VAR_7;
}
