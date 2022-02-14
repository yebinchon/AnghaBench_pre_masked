
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ismt_priv {int cmp; scalar_t__ head; int hw; int io_rng_dma; TYPE_1__* pci_dev; } ;
struct ismt_desc {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ismt_priv *VAR_3)
{

 VAR_3->hw = FUNC_0(&VAR_3->pci_dev->dev,
           (VAR_2
            * sizeof(struct ismt_desc)),
           &VAR_3->io_rng_dma,
           VAR_1);
 if (!VAR_3->hw)
  return -VAR_0;

 FUNC_2(VAR_3->hw, 0, (VAR_2 * sizeof(struct ismt_desc)));

 VAR_3->head = 0;
 FUNC_1(&VAR_3->cmp);

 return 0;
}
