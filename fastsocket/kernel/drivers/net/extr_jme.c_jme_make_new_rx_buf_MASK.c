
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct jme_ring {struct jme_buffer_info* bufinf; } ;
struct jme_buffer_info {int len; int mapping; struct sk_buff* skb; } ;
struct jme_adapter {int pdev; TYPE_1__* dev; struct jme_ring* rxring; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct jme_adapter *VAR_3, int VAR_4)
{
 struct jme_ring *VAR_5 = &(VAR_3->rxring[0]);
 struct jme_buffer_info *VAR_6 = VAR_5->bufinf + VAR_4;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_0(VAR_3->dev,
  VAR_3->dev->mtu + VAR_2);
 if (FUNC_4(!VAR_7))
  return -VAR_0;

 VAR_6->skb = VAR_7;
 VAR_6->len = FUNC_3(VAR_7);
 VAR_6->mapping = FUNC_2(VAR_3->pdev,
     FUNC_5(VAR_7->data),
     FUNC_1(VAR_7->data),
     VAR_6->len,
     VAR_1);

 return 0;
}
