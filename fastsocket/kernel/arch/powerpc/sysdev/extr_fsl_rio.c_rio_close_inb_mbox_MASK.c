
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; int phys; int virt; } ;
struct rio_priv {TYPE_2__ msg_rx_ring; int dev; TYPE_1__* msg_regs; } ;
struct rio_mport {struct rio_priv* priv; } ;
struct TYPE_3__ {int imr; } ;


 int FUNC_0 (struct rio_mport*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(struct rio_mport *VAR_1, int VAR_2)
{
 struct rio_priv *VAR_3 = VAR_1->priv;

 FUNC_3(&VAR_3->msg_regs->imr, 0);


 FUNC_1(VAR_3->dev, VAR_3->msg_rx_ring.size * VAR_0,
     VAR_3->msg_rx_ring.virt, VAR_3->msg_rx_ring.phys);


 FUNC_2(FUNC_0(VAR_1), (void *)VAR_1);
}
