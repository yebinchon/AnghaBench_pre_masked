
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int mode; struct BCState* bcs; int hardware; int bc; } ;
struct TYPE_13__ {int l2l1; } ;
struct PStack {TYPE_7__ l1; TYPE_6__ l2; } ;
struct TYPE_8__ {int rcvidx; int rcvbuf; } ;
struct TYPE_9__ {TYPE_1__ hscx; } ;
struct BCState {int mode; struct PStack* st; TYPE_5__* cs; int tx_cnt; TYPE_2__ hw; int event; int Flag; int * tx_skb; int squeue; int rqueue; int channel; } ;
struct TYPE_10__ {struct BCState* bcs; int rcvbuf; } ;
struct TYPE_11__ {TYPE_3__ elsa; } ;
struct TYPE_12__ {TYPE_4__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct BCState*) ;
 int FUNC_1 (struct PStack*) ;
 int FUNC_2 (struct PStack*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct PStack *VAR_4, struct BCState *VAR_5)
{

 VAR_5->channel = VAR_4->l1.bc;
 switch (VAR_4->l1.mode) {
  case 130:
  case 128:
   if (FUNC_0(VAR_4->l1.hardware, VAR_5))
    return (-1);
   VAR_4->l2.l2l1 = VAR_2;
   break;
  case 129:
   VAR_5->mode = 129;
   if (!FUNC_5(VAR_1, &VAR_5->Flag)) {
    VAR_5->hw.hscx.rcvbuf = VAR_5->cs->hw.elsa.rcvbuf;
    FUNC_3(&VAR_5->rqueue);
    FUNC_3(&VAR_5->squeue);
   }
   VAR_5->tx_skb = ((void*)0);
   FUNC_4(VAR_0, &VAR_5->Flag);
   VAR_5->event = 0;
   VAR_5->hw.hscx.rcvidx = 0;
   VAR_5->tx_cnt = 0;
   VAR_5->cs->hw.elsa.bcs = VAR_5;
   VAR_4->l2.l2l1 = VAR_3;
   break;
 }
 VAR_4->l1.bcs = VAR_5;
 FUNC_2(VAR_4);
 VAR_5->st = VAR_4;
 FUNC_1(VAR_4);
 return (0);
}
