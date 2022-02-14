
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * next; } ;
struct iop_adma_desc_slot {TYPE_3__ chain_node; int slots_per_op; int idx; int async_tx; } ;
struct iop_adma_chan {TYPE_2__* device; int chain; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_5__ {TYPE_1__ common; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (struct iop_adma_desc_slot*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_4(struct iop_adma_desc_slot *VAR_0,
 struct iop_adma_chan *VAR_1)
{



 if (!FUNC_0(&VAR_0->async_tx))
  return 0;




 if (VAR_0->chain_node.next == &VAR_1->chain)
  return 1;

 FUNC_1(VAR_1->device->common.dev,
  "\tfree slot: %d slots_per_op: %d\n",
  VAR_0->idx, VAR_0->slots_per_op);

 FUNC_3(&VAR_0->chain_node);
 FUNC_2(VAR_0);

 return 0;
}
