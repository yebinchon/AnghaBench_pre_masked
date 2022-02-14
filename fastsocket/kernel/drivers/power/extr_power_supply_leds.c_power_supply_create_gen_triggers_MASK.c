
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int online_trig; int online_trig_name; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_2)
{
 int VAR_3 = 0;

 VAR_2->online_trig_name = FUNC_0(VAR_1, "%s-online", VAR_2->name);
 if (!VAR_2->online_trig_name)
  goto online_failed;

 FUNC_1(VAR_2->online_trig_name, &VAR_2->online_trig);

 goto success;

online_failed:
 VAR_3 = -VAR_0;
success:
 return VAR_3;
}
