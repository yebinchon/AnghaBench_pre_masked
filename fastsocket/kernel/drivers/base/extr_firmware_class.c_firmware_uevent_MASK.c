
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct firmware_priv {int fw_id; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct firmware_priv* FUNC_1 (struct device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 struct firmware_priv *VAR_4 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_3, "FIRMWARE=%s", VAR_4->fw_id))
  return -VAR_0;
 if (FUNC_0(VAR_3, "TIMEOUT=%i", VAR_1))
  return -VAR_0;

 return 0;
}
