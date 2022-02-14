
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct rtl8192_rx_info {int out_pipe; } ;
struct r8192_priv {TYPE_1__* ops; int IrpPendingCount; int skb_queue; } ;
struct TYPE_2__ {int (* rtl819x_rx_cmd ) (struct sk_buff*) ;int (* rtl819x_rx_nomal ) (struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

void FUNC_5(struct r8192_priv *VAR_2)
{
        struct sk_buff *VAR_3;
 struct rtl8192_rx_info *VAR_4;

        while (((void*)0) != (VAR_3 = FUNC_2(&VAR_2->skb_queue))) {
  VAR_4 = (struct rtl8192_rx_info *)VAR_3->cb;
                switch (VAR_4->out_pipe) {

   case 3:

    VAR_2->IrpPendingCount--;
    VAR_2->ops->rtl819x_rx_nomal(VAR_3);
    break;


   case 9:
    FUNC_0(VAR_1, "command in-pipe index(%d)\n", VAR_4->out_pipe);

    VAR_2->ops->rtl819x_rx_cmd(VAR_3);
    break;

   default:
    FUNC_0(VAR_0, "Unknown in-pipe index(%d)\n", VAR_4->out_pipe);

    FUNC_1(VAR_3);
    break;

  }
        }
}
