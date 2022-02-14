
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int state; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 struct vmxnet3_adapter* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct vmxnet3_adapter*) ;
 int FUNC_5 (struct vmxnet3_adapter*) ;
 int FUNC_6 (struct vmxnet3_adapter*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_1)
{
 struct vmxnet3_adapter *VAR_2 = FUNC_2(VAR_1);





 while (FUNC_3(VAR_0, &VAR_2->state))
  FUNC_1(1);

 FUNC_4(VAR_2);

 FUNC_5(VAR_2);
 FUNC_6(VAR_2);

 FUNC_0(VAR_0, &VAR_2->state);


 return 0;
}
