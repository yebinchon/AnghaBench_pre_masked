
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vmxnet3_tq_driver_stats {scalar_t__ drop_total; } ;
struct vmxnet3_rq_driver_stats {scalar_t__ drop_total; } ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; TYPE_4__* rx_queue; TYPE_3__* rqd_start; TYPE_2__* tx_queue; TYPE_1__* tqd_start; int cmd_lock; } ;
struct net_device_stats {int multicast; int rx_dropped; int rx_errors; int rx_bytes; int rx_packets; int tx_dropped; int tx_errors; int tx_bytes; int tx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct UPT1_TxStats {scalar_t__ pktsTxError; scalar_t__ bcastBytesTxOK; scalar_t__ mcastBytesTxOK; scalar_t__ ucastBytesTxOK; scalar_t__ bcastPktsTxOK; scalar_t__ mcastPktsTxOK; scalar_t__ ucastPktsTxOK; } ;
struct UPT1_RxStats {scalar_t__ mcastPktsRxOK; scalar_t__ pktsRxError; scalar_t__ bcastBytesRxOK; scalar_t__ mcastBytesRxOK; scalar_t__ ucastBytesRxOK; scalar_t__ bcastPktsRxOK; scalar_t__ ucastPktsRxOK; } ;
struct TYPE_8__ {struct vmxnet3_rq_driver_stats stats; } ;
struct TYPE_7__ {struct UPT1_RxStats stats; } ;
struct TYPE_6__ {struct vmxnet3_tq_driver_stats stats; } ;
struct TYPE_5__ {struct UPT1_TxStats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmxnet3_adapter*,int ,int ) ;
 int FUNC_1 (struct net_device_stats*,int ,int) ;
 struct vmxnet3_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

struct net_device_stats *
FUNC_5(struct net_device *VAR_2)
{
 struct vmxnet3_adapter *VAR_3;
 struct vmxnet3_tq_driver_stats *VAR_4;
 struct vmxnet3_rq_driver_stats *VAR_5;
 struct UPT1_TxStats *VAR_6;
 struct UPT1_RxStats *VAR_7;
 struct net_device_stats *VAR_8 = &VAR_2->stats;
 unsigned long VAR_9;
 int VAR_10;

 VAR_3 = FUNC_2(VAR_2);


 FUNC_3(&VAR_3->cmd_lock, VAR_9);
 FUNC_0(VAR_3, VAR_1, VAR_0);
 FUNC_4(&VAR_3->cmd_lock, VAR_9);

 FUNC_1(VAR_8, 0, sizeof(*VAR_8));
 for (VAR_10 = 0; VAR_10 < VAR_3->num_tx_queues; VAR_10++) {
  VAR_6 = &VAR_3->tqd_start[VAR_10].stats;
  VAR_4 = &VAR_3->tx_queue[VAR_10].stats;
  VAR_8->tx_packets += VAR_6->ucastPktsTxOK +
     VAR_6->mcastPktsTxOK +
     VAR_6->bcastPktsTxOK;
  VAR_8->tx_bytes += VAR_6->ucastBytesTxOK +
          VAR_6->mcastBytesTxOK +
          VAR_6->bcastBytesTxOK;
  VAR_8->tx_errors += VAR_6->pktsTxError;
  VAR_8->tx_dropped += VAR_4->drop_total;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3->num_rx_queues; VAR_10++) {
  VAR_7 = &VAR_3->rqd_start[VAR_10].stats;
  VAR_5 = &VAR_3->rx_queue[VAR_10].stats;
  VAR_8->rx_packets += VAR_7->ucastPktsRxOK +
     VAR_7->mcastPktsRxOK +
     VAR_7->bcastPktsRxOK;

  VAR_8->rx_bytes += VAR_7->ucastBytesRxOK +
          VAR_7->mcastBytesRxOK +
          VAR_7->bcastBytesRxOK;

  VAR_8->rx_errors += VAR_7->pktsRxError;
  VAR_8->rx_dropped += VAR_5->drop_total;
  VAR_8->multicast += VAR_7->mcastPktsRxOK;
 }
 return VAR_8;
}
