
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atl1c_adapter {int common_task; int work_event; } ;


 int VAR_0 ;
 struct atl1c_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct atl1c_adapter *VAR_2 = FUNC_0(VAR_1);


 FUNC_2(VAR_0, &VAR_2->work_event);
 FUNC_1(&VAR_2->common_task);
}
