
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {scalar_t__ is_up; int state; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct net_device*,int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int
FUNC_10(struct qlcnic_adapter *VAR_4)
{
 int VAR_5 = 0;
 struct net_device *VAR_6 = VAR_4->netdev;

 if (FUNC_9(VAR_3, &VAR_4->state))
  return -VAR_0;

 if (VAR_4->is_up == VAR_2) {

  FUNC_4(VAR_6);

  if (FUNC_5(VAR_6))
   FUNC_0(VAR_4, VAR_6);

  FUNC_7(VAR_4);

  if (FUNC_5(VAR_6)) {
   VAR_5 = FUNC_6(VAR_4);
   if (!VAR_5) {
    FUNC_1(VAR_4, VAR_6);
    FUNC_8(VAR_6, VAR_1);
   }
  }

  FUNC_3(VAR_6);
 }

 FUNC_2(VAR_3, &VAR_4->state);
 return VAR_5;
}
