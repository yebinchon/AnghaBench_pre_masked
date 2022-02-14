
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int thread_done; int * thread; } ;
struct TYPE_3__ {int thread_done; int * thread; } ;
struct usbip_device {TYPE_2__ tcp_tx; TYPE_1__ tcp_rx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (char*,struct usbip_device*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct usbip_device *VAR_1)
{

 if (VAR_1->tcp_rx.thread != ((void*)0)) {
  FUNC_0(VAR_0, VAR_1->tcp_rx.thread, 1);
  FUNC_2(&VAR_1->tcp_rx.thread_done);
  FUNC_1("rx_thread for ud %p has finished\n", VAR_1);
 }

 if (VAR_1->tcp_tx.thread != ((void*)0)) {
  FUNC_0(VAR_0, VAR_1->tcp_tx.thread, 1);
  FUNC_2(&VAR_1->tcp_tx.thread_done);
  FUNC_1("tx_thread for ud %p has finished\n", VAR_1);
 }
}
