
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
struct vmxnet3_adapter {int num_tx_queues; TYPE_4__* rx_queue; TYPE_3__* rqd_start; TYPE_2__* tx_queue; TYPE_1__* tqd_start; int cmd_lock; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_15__ {int offset; } ;
struct TYPE_14__ {int stats; } ;
struct TYPE_13__ {int stats; } ;
struct TYPE_12__ {int stats; } ;
struct TYPE_11__ {int stats; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vmxnet3_adapter*,int ,int ) ;
 struct vmxnet3_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_5__* VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_5__* VAR_5 ;
 TYPE_5__* VAR_6 ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_7,
     struct ethtool_stats *VAR_8, u64 *VAR_9)
{
 struct vmxnet3_adapter *VAR_10 = FUNC_2(VAR_7);
 unsigned long VAR_11;
 u8 *VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 FUNC_3(&VAR_10->cmd_lock, VAR_11);
 FUNC_1(VAR_10, VAR_1, VAR_0);
 FUNC_4(&VAR_10->cmd_lock, VAR_11);


 for (VAR_14 = 0; VAR_14 < VAR_10->num_tx_queues; VAR_14++) {
  VAR_12 = (u8 *)&VAR_10->tqd_start[VAR_14].stats;
  *VAR_9++ = (u64)VAR_14;
  for (VAR_13 = 1; VAR_13 < FUNC_0(VAR_5); VAR_13++)
   *VAR_9++ = *(u64 *)(VAR_12 +
       VAR_5[VAR_13].offset);

  VAR_12 = (u8 *)&VAR_10->tx_queue[VAR_14].stats;
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_6); VAR_13++)
   *VAR_9++ = *(u64 *)(VAR_12 +
       VAR_6[VAR_13].offset);
 }

 for (VAR_14 = 0; VAR_14 < VAR_10->num_tx_queues; VAR_14++) {
  VAR_12 = (u8 *)&VAR_10->rqd_start[VAR_14].stats;
  *VAR_9++ = (u64) VAR_14;
  for (VAR_13 = 1; VAR_13 < FUNC_0(VAR_3); VAR_13++)
   *VAR_9++ = *(u64 *)(VAR_12 +
       VAR_3[VAR_13].offset);

  VAR_12 = (u8 *)&VAR_10->rx_queue[VAR_14].stats;
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_4); VAR_13++)
   *VAR_9++ = *(u64 *)(VAR_12 +
       VAR_4[VAR_13].offset);
 }

 VAR_12 = (u8 *)VAR_10;
 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_2); VAR_13++)
  *VAR_9++ = *(u64 *)(VAR_12 + VAR_2[VAR_13].offset);
}
