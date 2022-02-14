
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smsc9420_ring_info {int dummy; } ;
struct smsc9420_pdata {int tx_dma_addr; scalar_t__ tx_ring_tail; scalar_t__ tx_ring_head; TYPE_1__* tx_ring; TYPE_2__* tx_buffers; } ;
struct TYPE_4__ {scalar_t__ mapping; int * skb; } ;
struct TYPE_3__ {scalar_t__ length; scalar_t__ buffer2; scalar_t__ buffer1; scalar_t__ status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct smsc9420_pdata*) ;
 int FUNC_3 (struct smsc9420_pdata*,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct smsc9420_pdata *VAR_6)
{
 int VAR_7;

 FUNC_0(!VAR_6->tx_ring);

 VAR_6->tx_buffers = FUNC_1((sizeof(struct smsc9420_ring_info) *
  VAR_5), VAR_1);
 if (!VAR_6->tx_buffers) {
  FUNC_4(VAR_2, "Failed to allocated tx_buffers");
  return -VAR_0;
 }


 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6->tx_buffers[VAR_7].skb = ((void*)0);
  VAR_6->tx_buffers[VAR_7].mapping = 0;
  VAR_6->tx_ring[VAR_7].status = 0;
  VAR_6->tx_ring[VAR_7].length = 0;
  VAR_6->tx_ring[VAR_7].buffer1 = 0;
  VAR_6->tx_ring[VAR_7].buffer2 = 0;
 }
 VAR_6->tx_ring[VAR_5 - 1].length = VAR_3;
 FUNC_5();

 VAR_6->tx_ring_head = 0;
 VAR_6->tx_ring_tail = 0;

 FUNC_3(VAR_6, VAR_4, VAR_6->tx_dma_addr);
 FUNC_2(VAR_6);

 return 0;
}
