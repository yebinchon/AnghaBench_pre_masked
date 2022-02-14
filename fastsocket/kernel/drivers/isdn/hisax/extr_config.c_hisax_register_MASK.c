
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int l1l2; } ;
struct hisax_d_if {int ph_state; int erq; TYPE_7__ ifc; struct hisax_b_if** b_if; struct IsdnCardState* cs; int owner; } ;
struct TYPE_14__ {int l1l2; } ;
struct hisax_b_if {TYPE_6__ ifc; } ;
struct TYPE_9__ {struct hisax_d_if* hisax_d_if; } ;
struct IsdnCardState {TYPE_5__* bcs; TYPE_4__* channel; int tqueue; int cardmsg; TYPE_1__ hw; } ;
struct TYPE_16__ {int protocol; struct IsdnCardState* cs; scalar_t__ typ; } ;
struct TYPE_13__ {int BC_Close; int BC_SetStack; } ;
struct TYPE_12__ {TYPE_3__* d_st; } ;
struct TYPE_10__ {int l2l1; } ;
struct TYPE_11__ {TYPE_2__ l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_8__* VAR_4 ;
 int FUNC_1 (int,char*,int *,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*,int) ;

int FUNC_5(struct hisax_d_if *VAR_14, struct hisax_b_if *VAR_15[],
     char *VAR_16, int VAR_17)
{
 int VAR_18, VAR_19;
 char VAR_20[20];
 struct IsdnCardState *VAR_21;

 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  if (!VAR_4[VAR_18].typ)
   break;
 }

 if (VAR_18 >= VAR_2)
  return -VAR_0;

 VAR_4[VAR_18].typ = VAR_3;
 VAR_4[VAR_18].protocol = VAR_17;
 FUNC_4(VAR_20, "%s%d", VAR_16, VAR_18);
 VAR_13++;
 VAR_19 = FUNC_1(VAR_18, VAR_20, ((void*)0), VAR_14->owner,
    VAR_12);
 if (VAR_19 == 0) {
  VAR_4[VAR_18].typ = 0;
  VAR_13--;
  return -VAR_1;
 }
 VAR_21 = VAR_4[VAR_18].cs;
 VAR_14->cs = VAR_21;
 VAR_21->hw.hisax_d_if = VAR_14;
 VAR_21->cardmsg = VAR_9;
 FUNC_0(&VAR_21->tqueue, VAR_8);
 VAR_21->channel[0].d_st->l2.l2l1 = VAR_11;
 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  VAR_21->bcs[VAR_18].BC_SetStack = VAR_7;
  VAR_21->bcs[VAR_18].BC_Close = VAR_6;

  VAR_15[VAR_18]->ifc.l1l2 = VAR_5;

  VAR_14->b_if[VAR_18] = VAR_15[VAR_18];
 }
 VAR_14->ifc.l1l2 = VAR_10;
 FUNC_3(&VAR_14->erq);
 FUNC_2(0, &VAR_14->ph_state);

 return 0;
}
