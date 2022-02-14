
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct bcom_task {int dummy; } ;
struct bcom_fec_bd {int skb_pa; } ;
struct bcom_bd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcom_task*) ;
 struct sk_buff* FUNC_1 (struct bcom_task*,int *,struct bcom_bd**) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, struct bcom_task *VAR_2)
{
 while (!FUNC_0(VAR_2)) {
  struct bcom_fec_bd *VAR_3;
  struct sk_buff *VAR_4;

  VAR_4 = FUNC_1(VAR_2, ((void*)0), (struct bcom_bd **)&VAR_3);
  FUNC_2(VAR_1->dev.parent, VAR_3->skb_pa, VAR_4->len,
     VAR_0);
  FUNC_3(VAR_4);
 }
}
