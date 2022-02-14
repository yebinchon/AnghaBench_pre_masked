
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rxdma_mailbox {int rx_dma_ctl_stat; } ;
struct rx_ring_info {int rx_channel; struct rxdma_mailbox* mbox; } ;
struct niu {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,unsigned long long) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct niu *VAR_3, struct rx_ring_info *VAR_4,
       int VAR_5)
{
 struct rxdma_mailbox *VAR_6 = VAR_4->mbox;
 u64 VAR_7, VAR_8 = FUNC_1(&VAR_6->rx_dma_ctl_stat);

 VAR_7 = (VAR_1 |
        VAR_2);
 FUNC_3(FUNC_0(VAR_4->rx_channel), VAR_7);

 FUNC_2(VAR_0, "%s: rxchan_intr stat[%llx]\n",
        VAR_3->dev->name, (unsigned long long) VAR_8);
}
