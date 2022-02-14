
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smsc9420_pdata {scalar_t__ rx_ring_tail; scalar_t__ rx_ring_head; TYPE_2__* rx_buffers; TYPE_1__* rx_ring; int pdev; } ;
struct TYPE_4__ {scalar_t__ mapping; scalar_t__ skb; } ;
struct TYPE_3__ {scalar_t__ buffer2; scalar_t__ buffer1; scalar_t__ length; scalar_t__ status; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct smsc9420_pdata *VAR_3)
{
 int VAR_4;

 FUNC_0(!VAR_3->rx_ring);

 if (!VAR_3->rx_buffers)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3->rx_buffers[VAR_4].skb)
   FUNC_1(VAR_3->rx_buffers[VAR_4].skb);

  if (VAR_3->rx_buffers[VAR_4].mapping)
   FUNC_3(VAR_3->pdev, VAR_3->rx_buffers[VAR_4].mapping,
    VAR_1, VAR_0);

  VAR_3->rx_ring[VAR_4].status = 0;
  VAR_3->rx_ring[VAR_4].length = 0;
  VAR_3->rx_ring[VAR_4].buffer1 = 0;
  VAR_3->rx_ring[VAR_4].buffer2 = 0;
 }
 FUNC_4();

 FUNC_2(VAR_3->rx_buffers);
 VAR_3->rx_buffers = ((void*)0);

 VAR_3->rx_ring_head = 0;
 VAR_3->rx_ring_tail = 0;
}
