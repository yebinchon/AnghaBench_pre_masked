
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dev; int changed_work; int name; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct device*,int ,struct power_supply*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct power_supply*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct power_supply*) ;
 int FUNC_7 (struct power_supply*) ;
 int FUNC_8 (struct power_supply*) ;

int FUNC_9(struct device *VAR_2, struct power_supply *VAR_3)
{
 int VAR_4 = 0;

 VAR_3->dev = FUNC_3(VAR_1, VAR_2, 0, VAR_3,
     "%s", VAR_3->name);
 if (FUNC_1(VAR_3->dev)) {
  VAR_4 = FUNC_2(VAR_3->dev);
  goto dev_create_failed;
 }

 FUNC_0(&VAR_3->changed_work, VAR_0);

 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  goto create_attrs_failed;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  goto create_triggers_failed;

 FUNC_5(VAR_3);

 goto success;

create_triggers_failed:
 FUNC_8(VAR_3);
create_attrs_failed:
 FUNC_4(VAR_3->dev);
dev_create_failed:
success:
 return VAR_4;
}
