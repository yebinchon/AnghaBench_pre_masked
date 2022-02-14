
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {char* name; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 struct parisc_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 const struct parisc_device *VAR_4;
 char VAR_5[40];

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  return -VAR_0;

 if (FUNC_0(VAR_3, "PARISC_NAME=%s", VAR_4->name))
  return -VAR_1;

 FUNC_1(VAR_2, VAR_5);
 if (FUNC_0(VAR_3, "MODALIAS=%s", VAR_5))
  return -VAR_1;

 return 0;
}
