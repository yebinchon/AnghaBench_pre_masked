
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; int data; } ;
struct net_device {int irq; } ;
struct ks_net {int statelock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ks_net*) ;
 int FUNC_4 (struct ks_net*) ;
 scalar_t__ FUNC_5 (struct ks_net*) ;
 int FUNC_6 (struct ks_net*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 struct ks_net* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 int VAR_4 = VAR_1;
 struct ks_net *VAR_5 = FUNC_8(VAR_3);

 FUNC_1(VAR_3->irq);
 FUNC_3(VAR_5);
 FUNC_9(&VAR_5->statelock);





 if (FUNC_7(FUNC_5(VAR_5) >= VAR_2->len + 12)) {
  FUNC_6(VAR_5, VAR_2->data, VAR_2->len);
  FUNC_0(VAR_2);
 } else
  VAR_4 = VAR_0;
 FUNC_10(&VAR_5->statelock);
 FUNC_4(VAR_5);
 FUNC_2(VAR_3->irq);
 return VAR_4;
}
