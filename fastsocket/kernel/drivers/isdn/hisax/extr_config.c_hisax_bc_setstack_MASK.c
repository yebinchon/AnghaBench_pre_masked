
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hisax_d_if {TYPE_3__** b_if; } ;
struct TYPE_10__ {int l2l1; } ;
struct TYPE_9__ {size_t bc; struct BCState* bcs; struct IsdnCardState* hardware; } ;
struct PStack {TYPE_5__ l2; TYPE_4__ l1; } ;
struct TYPE_6__ {struct hisax_d_if* hisax_d_if; } ;
struct IsdnCardState {TYPE_1__ hw; } ;
struct TYPE_7__ {TYPE_3__* b_if; } ;
struct BCState {size_t channel; int squeue; int rqueue; struct PStack* st; TYPE_2__ hw; } ;
struct TYPE_8__ {struct BCState* bcs; } ;


 int VAR_0 ;
 int FUNC_0 (struct PStack*) ;
 int FUNC_1 (struct PStack*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct PStack *VAR_1, struct BCState *VAR_2)
{
 struct IsdnCardState *VAR_3 = VAR_1->l1.hardware;
 struct hisax_d_if *VAR_4 = VAR_3->hw.hisax_d_if;

 VAR_2->channel = VAR_1->l1.bc;

 VAR_2->hw.b_if = VAR_4->b_if[VAR_1->l1.bc];
 VAR_4->b_if[VAR_1->l1.bc]->bcs = VAR_2;

 VAR_1->l1.bcs = VAR_2;
 VAR_1->l2.l2l1 = VAR_0;
 FUNC_1(VAR_1);
 VAR_2->st = VAR_1;
 FUNC_0(VAR_1);
 FUNC_2(&VAR_2->rqueue);
 FUNC_2(&VAR_2->squeue);
 return 0;
}
