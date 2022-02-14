
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sky2_port {unsigned int rx_data_size; TYPE_1__* hw; } ;
struct sk_buff {int data; } ;
struct rx_ring_info {struct sk_buff* skb; } ;
struct TYPE_4__ {scalar_t__ nr_frags; } ;
struct TYPE_3__ {int pdev; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int,unsigned int) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sky2_port*) ;
 scalar_t__ FUNC_6 (int ,struct rx_ring_info*,unsigned int) ;
 int FUNC_7 (int ,struct rx_ring_info*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct sky2_port *VAR_0,
       struct rx_ring_info *VAR_1,
       unsigned int VAR_2)
{
 struct sk_buff *VAR_3, *VAR_4;
 unsigned VAR_5 = VAR_0->rx_data_size;


 VAR_4 = FUNC_5(VAR_0);
 if (FUNC_8(!VAR_4))
  return ((void*)0);

 VAR_3 = VAR_1->skb;
 FUNC_7(VAR_0->hw->pdev, VAR_1);

 FUNC_1(VAR_3->data);
 VAR_1->skb = VAR_4;
 if (FUNC_6(VAR_0->hw->pdev, VAR_1, VAR_5)) {
  FUNC_0(VAR_4);
  VAR_1->skb = VAR_3;
  return ((void*)0);
 }

 if (FUNC_4(VAR_3)->nr_frags)
  FUNC_3(VAR_3, VAR_5, VAR_2);
 else
  FUNC_2(VAR_3, VAR_2);
 return VAR_3;
}
