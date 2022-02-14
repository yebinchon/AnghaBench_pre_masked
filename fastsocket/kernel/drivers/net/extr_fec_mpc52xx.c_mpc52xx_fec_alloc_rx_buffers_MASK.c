
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct bcom_task {int dummy; } ;
struct bcom_fec_bd {int skb_pa; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bcom_task*) ;
 int FUNC_1 (struct bcom_task*) ;
 int FUNC_2 (struct bcom_task*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, struct bcom_task *VAR_4)
{
 while (!FUNC_1(VAR_4)) {
  struct sk_buff *VAR_5;
  struct bcom_fec_bd *VAR_6;

  VAR_5 = FUNC_3(VAR_2);
  if (VAR_5 == ((void*)0))
   return -VAR_1;


  FUNC_5(VAR_5->data, 0, VAR_2);

  VAR_6 = (struct bcom_fec_bd *)FUNC_0(VAR_4);

  VAR_6->status = VAR_2;
  VAR_6->skb_pa = FUNC_4(VAR_3->dev.parent, VAR_5->data,
    VAR_2, VAR_0);

  FUNC_2(VAR_4, VAR_5);
 }

 return 0;
}
