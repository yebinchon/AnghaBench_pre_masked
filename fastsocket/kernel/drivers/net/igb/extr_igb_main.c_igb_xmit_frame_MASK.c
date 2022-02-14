
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct igb_adapter {int state; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct igb_adapter*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 struct igb_adapter* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_2,
      struct net_device *VAR_3)
{
 struct igb_adapter *VAR_4 = FUNC_3(VAR_3);

 if (FUNC_6(VAR_1, &VAR_4->state)) {
  FUNC_0(VAR_2);
  return VAR_0;
 }

 if (VAR_2->len <= 0) {
  FUNC_0(VAR_2);
  return VAR_0;
 }




 if (FUNC_7(VAR_2->len < 17)) {
  if (FUNC_4(VAR_2, 17 - VAR_2->len))
   return VAR_0;
  VAR_2->len = 17;
  FUNC_5(VAR_2, 17);
 }

 return FUNC_2(VAR_2, FUNC_1(VAR_4, VAR_2));
}
