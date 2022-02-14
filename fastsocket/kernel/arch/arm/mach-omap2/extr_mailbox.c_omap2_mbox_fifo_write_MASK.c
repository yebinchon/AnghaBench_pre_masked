
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox2_fifo {int msg; } ;
struct omap_mbox2_priv {struct omap_mbox2_fifo tx_fifo; } ;
struct omap_mbox {scalar_t__ priv; } ;
typedef int mbox_msg_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct omap_mbox *VAR_0, mbox_msg_t VAR_1)
{
 struct omap_mbox2_fifo *VAR_2 =
  &((struct omap_mbox2_priv *)VAR_0->priv)->tx_fifo;
 FUNC_0(VAR_1, VAR_2->msg);
}
