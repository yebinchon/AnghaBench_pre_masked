
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int phys; int dev_id; } ;
struct rio_priv {TYPE_3__* msg_regs; TYPE_2__ msg_tx_ring; } ;
struct rio_mport {TYPE_1__* outb_msg; struct rio_priv* priv; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int osr; int odqdpar; } ;
struct TYPE_4__ {int (* mcback ) (struct rio_mport*,int ,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct rio_mport*,int ,int,int) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_4, void *VAR_5)
{
 int VAR_6;
 struct rio_mport *VAR_7 = (struct rio_mport *)VAR_5;
 struct rio_priv *VAR_8 = VAR_7->priv;

 VAR_6 = FUNC_0(&VAR_8->msg_regs->osr);

 if (VAR_6 & VAR_3) {
  FUNC_2("RIO: outbound message transmission error\n");
  FUNC_1(&VAR_8->msg_regs->osr, VAR_3);
  goto out;
 }

 if (VAR_6 & VAR_2) {
  FUNC_2("RIO: outbound message queue overflow\n");
  FUNC_1(&VAR_8->msg_regs->osr, VAR_2);
  goto out;
 }

 if (VAR_6 & VAR_1) {
  u32 VAR_9 = FUNC_0(&VAR_8->msg_regs->odqdpar);
  int VAR_10 = (VAR_9 - VAR_8->msg_tx_ring.phys) >> 5;
  VAR_7->outb_msg[0].mcback(VAR_7, VAR_8->msg_tx_ring.dev_id, -1,
    VAR_10);


  FUNC_1(&VAR_8->msg_regs->osr, VAR_1);
 }

      out:
 return VAR_0;
}
