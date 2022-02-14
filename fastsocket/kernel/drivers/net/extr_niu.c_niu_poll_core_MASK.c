
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tx_ring_info {int tx_channel; } ;
struct rx_ring_info {int rx_channel; } ;
struct niu_ldg {int v0; int napi; } ;
struct niu {int num_tx_rings; int num_rx_rings; struct rx_ring_info* rx_rings; struct tx_ring_info* tx_rings; TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct niu*,struct rx_ring_info*,int) ;
 int FUNC_4 (struct niu*,struct tx_ring_info*) ;
 int FUNC_5 (int ,char*,int ,unsigned long long) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct niu *VAR_1, struct niu_ldg *VAR_2, int VAR_3)
{
 u64 VAR_4 = VAR_2->v0;
 u32 VAR_5 = (VAR_4 >> 32);
 u32 VAR_6 = (VAR_4 & 0xffffffff);
 int VAR_7, VAR_8 = 0;

 FUNC_5(VAR_0, "%s: niu_poll_core() v0[%016llx]\n",
        VAR_1->dev->name, (unsigned long long) VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_1->num_tx_rings; VAR_7++) {
  struct tx_ring_info *VAR_9 = &VAR_1->tx_rings[VAR_7];
  if (VAR_5 & (1 << VAR_9->tx_channel))
   FUNC_4(VAR_1, VAR_9);
  FUNC_6(FUNC_2(FUNC_1(VAR_9->tx_channel)), 0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_1->num_rx_rings; VAR_7++) {
  struct rx_ring_info *VAR_10 = &VAR_1->rx_rings[VAR_7];

  if (VAR_6 & (1 << VAR_10->rx_channel)) {
   int VAR_11;

   VAR_11 = FUNC_3(&VAR_2->napi, VAR_1, VAR_10,
           VAR_3);

   VAR_3 -= VAR_11;
   VAR_8 += VAR_11;
  }
  FUNC_6(FUNC_2(FUNC_0(VAR_10->rx_channel)), 0);
 }

 return VAR_8;
}
