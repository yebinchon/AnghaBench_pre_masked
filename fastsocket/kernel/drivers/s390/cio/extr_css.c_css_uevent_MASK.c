
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int st; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct subchannel* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct subchannel *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, "ST=%01X", VAR_2->st);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_1, "MODALIAS=css:t%01X", VAR_2->st);
 return VAR_3;
}
