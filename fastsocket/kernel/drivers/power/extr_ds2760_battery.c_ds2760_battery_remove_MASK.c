
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ds2760_device_info {int bat; int monitor_wqueue; int set_charged_work; int monitor_work; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 struct ds2760_device_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ds2760_device_info *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->monitor_wqueue,
       &VAR_1->monitor_work);
 FUNC_0(VAR_1->monitor_wqueue,
       &VAR_1->set_charged_work);
 FUNC_1(VAR_1->monitor_wqueue);
 FUNC_3(&VAR_1->bat);

 return 0;
}
