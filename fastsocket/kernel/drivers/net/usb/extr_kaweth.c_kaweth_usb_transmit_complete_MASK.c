
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; struct kaweth_device* context; } ;
struct sk_buff {int dummy; } ;
struct kaweth_device {TYPE_1__* net; struct sk_buff* tx_skb; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_1)
{
 struct kaweth_device *VAR_2 = VAR_1->context;
 struct sk_buff *VAR_3 = VAR_2->tx_skb;
 int VAR_4 = VAR_1->status;

 if (FUNC_3(VAR_4 != 0))
  if (VAR_4 != -VAR_0)
   FUNC_0("%s: TX status %d.", VAR_2->net->name, VAR_4);

 FUNC_2(VAR_2->net);
 FUNC_1(VAR_3);
}
