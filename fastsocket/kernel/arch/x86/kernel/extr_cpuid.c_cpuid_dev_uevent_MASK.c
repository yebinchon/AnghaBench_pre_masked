
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 char *VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (VAR_4) {
  FUNC_3(((void*)0), ((void*)0), VAR_4);
  FUNC_0(VAR_3, "MODALIAS=%s", VAR_4);
  FUNC_1(VAR_4);
 }
 return 0;
}
