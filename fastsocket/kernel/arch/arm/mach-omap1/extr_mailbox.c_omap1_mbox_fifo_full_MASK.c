
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox1_fifo {int flag; } ;
struct omap_mbox1_priv {struct omap_mbox1_fifo rx_fifo; } ;
struct omap_mbox {scalar_t__ priv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct omap_mbox *VAR_0)
{
 struct omap_mbox1_fifo *VAR_1 =
  &((struct omap_mbox1_priv *)VAR_0->priv)->rx_fifo;

 return (FUNC_0(VAR_1->flag));
}
