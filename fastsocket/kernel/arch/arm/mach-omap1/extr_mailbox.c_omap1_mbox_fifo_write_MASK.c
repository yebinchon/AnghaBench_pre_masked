
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox1_fifo {int cmd; int data; } ;
struct omap_mbox1_priv {struct omap_mbox1_fifo tx_fifo; } ;
struct omap_mbox {scalar_t__ priv; } ;
typedef int mbox_msg_t ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(struct omap_mbox *VAR_0, mbox_msg_t VAR_1)
{
 struct omap_mbox1_fifo *VAR_2 =
  &((struct omap_mbox1_priv *)VAR_0->priv)->tx_fifo;

 FUNC_0(VAR_1 & 0xffff, VAR_2->data);
 FUNC_0(VAR_1 >> 16, VAR_2->cmd);
}
