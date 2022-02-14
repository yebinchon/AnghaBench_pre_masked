
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int gen; } ;
struct cnic_local {int (* alloc_resc ) (struct cnic_dev*) ;int (* start_hw ) (struct cnic_dev*) ;int (* free_resc ) (struct cnic_dev*) ;int (* enable_int ) (struct cnic_dev*) ;int status_blk_num; TYPE_1__ status_blk; int func; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {TYPE_2__* irq_arr; int io_base; } ;
struct cnic_dev {TYPE_3__* pcidev; int flags; int netdev; int regview; struct cnic_local* cnic_priv; } ;
struct TYPE_7__ {int devfn; } ;
struct TYPE_6__ {int status_blk_num; int status_blk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cnic_dev*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct cnic_dev*) ;
 int FUNC_7 (struct cnic_dev*) ;
 int FUNC_8 (struct cnic_dev*) ;
 int FUNC_9 (struct cnic_dev*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct cnic_dev *VAR_2)
{
 struct cnic_local *VAR_3 = VAR_2->cnic_priv;
 struct cnic_eth_dev *VAR_4 = VAR_3->ethdev;
 int VAR_5;

 if (FUNC_10(VAR_0, &VAR_2->flags))
  return -VAR_1;

 VAR_2->regview = VAR_4->io_base;
 FUNC_3(VAR_2->pcidev);
 VAR_3->func = FUNC_0(VAR_2->pcidev->devfn);
 VAR_3->status_blk.gen = VAR_4->irq_arr[0].status_blk;
 VAR_3->status_blk_num = VAR_4->irq_arr[0].status_blk_num;

 VAR_5 = VAR_3->alloc_resc(VAR_2);
 if (VAR_5) {
  FUNC_2(VAR_2->netdev, "allocate resource failure\n");
  goto err1;
 }

 VAR_5 = VAR_3->start_hw(VAR_2);
 if (VAR_5)
  goto err1;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5)
  goto err1;

 FUNC_5(VAR_0, &VAR_2->flags);

 VAR_3->enable_int(VAR_2);

 return 0;

err1:
 VAR_3->free_resc(VAR_2);
 FUNC_4(VAR_2->pcidev);
 return VAR_5;
}
