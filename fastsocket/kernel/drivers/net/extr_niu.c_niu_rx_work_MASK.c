
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rxdma_mailbox {scalar_t__ rcrstat_a; scalar_t__ rx_dma_ctl_stat; } ;
struct rx_ring_info {scalar_t__ rbr_refill_pending; scalar_t__ rbr_kick_thresh; int rx_channel; struct rxdma_mailbox* mbox; } ;
struct niu {TYPE_1__* dev; } ;
struct napi_struct {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (struct napi_struct*,struct niu*,struct rx_ring_info*) ;
 int FUNC_5 (struct niu*,struct rx_ring_info*,int ) ;
 int FUNC_6 (struct niu*,struct rx_ring_info*,int) ;
 int FUNC_7 (int ,char*,int ,int ,unsigned long long,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct napi_struct *VAR_6, struct niu *VAR_7,
         struct rx_ring_info *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11 = 0, VAR_12 = 0;
 struct rxdma_mailbox *VAR_13 = VAR_8->mbox;
 u64 VAR_14;


 VAR_14 = FUNC_8(FUNC_1(VAR_8->rx_channel));
 VAR_10 = FUNC_8(FUNC_0(VAR_8->rx_channel)) & VAR_1;




 VAR_13->rx_dma_ctl_stat = 0;
 VAR_13->rcrstat_a = 0;

 FUNC_7(VAR_5, "%s: niu_rx_work(chan[%d]), stat[%llx] qlen=%d\n",
        VAR_7->dev->name, VAR_8->rx_channel, (unsigned long long) VAR_14, VAR_10);

 VAR_11 = VAR_12 = 0;
 VAR_10 = FUNC_3(VAR_10, VAR_9);
 while (VAR_12 < VAR_10) {
  VAR_11 += FUNC_4(VAR_6, VAR_7, VAR_8);
  VAR_12++;
 }

 if (VAR_8->rbr_refill_pending >= VAR_8->rbr_kick_thresh) {
  unsigned int VAR_15;

  for (VAR_15 = 0; VAR_15 < VAR_8->rbr_refill_pending; VAR_15++)
   FUNC_5(VAR_7, VAR_8, VAR_0);
  VAR_8->rbr_refill_pending = 0;
 }

 VAR_14 = (VAR_2 |
  ((u64)VAR_12 << VAR_3) |
  ((u64)VAR_11 << VAR_4));

 FUNC_9(FUNC_1(VAR_8->rx_channel), VAR_14);


 if (VAR_10 > 10)
  FUNC_6(VAR_7, VAR_8, 0x7FFF);

 return VAR_12;
}
