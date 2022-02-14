
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct ds2760_device_info {int set_charged_work; int monitor_wqueue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 struct ds2760_device_info* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static void FUNC_3(struct power_supply *VAR_1)
{
 struct ds2760_device_info *VAR_2 = FUNC_2(VAR_1);



 FUNC_0(&VAR_2->set_charged_work);
 FUNC_1(VAR_2->monitor_wqueue, &VAR_2->set_charged_work, VAR_0 * 20);
}
