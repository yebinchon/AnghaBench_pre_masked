
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tx_desc {int dummy; } ;
struct TYPE_6__ {int size; int phys_addr; scalar_t__ desc; int cntxt_id; } ;
struct sge_qset {TYPE_2__ rspq; TYPE_3__* txq; TYPE_4__* fl; } ;
struct rx_desc {int dummy; } ;
struct rsp_desc {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_5__ {int reg_lock; } ;
struct adapter {TYPE_1__ sge; struct pci_dev* pdev; } ;
struct TYPE_8__ {int size; int phys_addr; scalar_t__ desc; scalar_t__ sdesc; int cntxt_id; } ;
struct TYPE_7__ {int size; int sendq; int phys_addr; scalar_t__ desc; scalar_t__ sdesc; int in_use; int cntxt_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,scalar_t__,int ) ;
 int FUNC_2 (struct pci_dev*,TYPE_4__*) ;
 int FUNC_3 (struct adapter*,TYPE_3__*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sge_qset*) ;
 int FUNC_8 (struct adapter*,int ) ;
 int FUNC_9 (struct adapter*,int ) ;
 int FUNC_10 (struct adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct adapter *VAR_2, struct sge_qset *VAR_3)
{
 int VAR_4;
 struct pci_dev *VAR_5 = VAR_2->pdev;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  if (VAR_3->fl[VAR_4].desc) {
   FUNC_5(&VAR_2->sge.reg_lock);
   FUNC_8(VAR_2, VAR_3->fl[VAR_4].cntxt_id);
   FUNC_6(&VAR_2->sge.reg_lock);
   FUNC_2(VAR_5, &VAR_3->fl[VAR_4]);
   FUNC_4(VAR_3->fl[VAR_4].sdesc);
   FUNC_1(&VAR_5->dev,
       VAR_3->fl[VAR_4].size *
       sizeof(struct rx_desc), VAR_3->fl[VAR_4].desc,
       VAR_3->fl[VAR_4].phys_addr);
  }

 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
  if (VAR_3->txq[VAR_4].desc) {
   FUNC_5(&VAR_2->sge.reg_lock);
   FUNC_10(VAR_2, VAR_3->txq[VAR_4].cntxt_id, 0);
   FUNC_6(&VAR_2->sge.reg_lock);
   if (VAR_3->txq[VAR_4].sdesc) {
    FUNC_3(VAR_2, &VAR_3->txq[VAR_4],
          VAR_3->txq[VAR_4].in_use);
    FUNC_4(VAR_3->txq[VAR_4].sdesc);
   }
   FUNC_1(&VAR_5->dev,
       VAR_3->txq[VAR_4].size *
       sizeof(struct tx_desc),
       VAR_3->txq[VAR_4].desc, VAR_3->txq[VAR_4].phys_addr);
   FUNC_0(&VAR_3->txq[VAR_4].sendq);
  }

 if (VAR_3->rspq.desc) {
  FUNC_5(&VAR_2->sge.reg_lock);
  FUNC_9(VAR_2, VAR_3->rspq.cntxt_id);
  FUNC_6(&VAR_2->sge.reg_lock);
  FUNC_1(&VAR_5->dev,
      VAR_3->rspq.size * sizeof(struct rsp_desc),
      VAR_3->rspq.desc, VAR_3->rspq.phys_addr);
 }

 FUNC_7(VAR_3);
}
