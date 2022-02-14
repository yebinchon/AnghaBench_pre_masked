
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct e1000_adapter {int netdev; int napi; int flags; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct e1000_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;


 FUNC_1(VAR_3);

 FUNC_0(VAR_2, &VAR_3->flags);

 FUNC_4(&VAR_3->napi);

 FUNC_2(VAR_3);

 FUNC_5(VAR_3->netdev);


 FUNC_3(VAR_1, VAR_0);
 return 0;
}
