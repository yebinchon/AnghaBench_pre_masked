
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox1_fifo {int cmd; int data; } ;
struct omap_mbox1_priv {struct omap_mbox1_fifo rx_fifo; } ;
struct omap_mbox {scalar_t__ priv; } ;
typedef int mbox_msg_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static mbox_msg_t FUNC_1(struct omap_mbox *VAR_0)
{
 struct omap_mbox1_fifo *VAR_1 =
  &((struct omap_mbox1_priv *)VAR_0->priv)->rx_fifo;
 mbox_msg_t VAR_2;

 VAR_2 = FUNC_0(VAR_1->data);
 VAR_2 |= ((mbox_msg_t) FUNC_0(VAR_1->cmd)) << 16;

 return VAR_2;
}
