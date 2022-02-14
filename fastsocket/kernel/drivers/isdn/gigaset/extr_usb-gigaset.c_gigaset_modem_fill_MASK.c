
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmdbuf_t {int dummy; } ;
struct TYPE_4__ {TYPE_1__* usb; } ;
struct cardstate {struct cmdbuf_t* cmdbuf; TYPE_2__ hw; struct bc_state* bcs; } ;
struct bc_state {scalar_t__ tx_skb; int squeue; } ;
struct TYPE_3__ {scalar_t__ busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct cardstate*,struct cmdbuf_t*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct cardstate*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct cardstate *VAR_3 = (struct cardstate *) VAR_2;
 struct bc_state *VAR_4 = &VAR_3->bcs[0];
 struct cmdbuf_t *VAR_5;
 int VAR_6;

 FUNC_0(VAR_1, "modem_fill");

 if (VAR_3->hw.usb->busy) {
  FUNC_0(VAR_1, "modem_fill: busy");
  return;
 }

 do {
  VAR_6 = 0;
  if (!VAR_4->tx_skb) {
   VAR_5 = VAR_3->cmdbuf;
   if (VAR_5) {
    FUNC_0(VAR_1, "modem_fill: cb");
    if (FUNC_1(VAR_3, VAR_5) < 0) {
     FUNC_0(VAR_1,
      "modem_fill: send_cb failed");
     VAR_6 = 1;

    }
   } else {
    VAR_4->tx_skb = FUNC_2(&VAR_4->squeue);
    if (VAR_4->tx_skb)
     FUNC_0(VAR_0,
      "Dequeued skb (Adr: %lx)!",
      (unsigned long) VAR_4->tx_skb);
   }
  }

  if (VAR_4->tx_skb) {
   FUNC_0(VAR_1, "modem_fill: tx_skb");
   if (FUNC_3(VAR_3) < 0) {
    FUNC_0(VAR_1,
     "modem_fill: write_modem failed");

    VAR_6 = 1;
   }
  }
 } while (VAR_6);
}
