
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {int* data; } ;
struct TYPE_10__ {scalar_t__ hardware; } ;
struct TYPE_9__ {int (* l3l2 ) (struct PStack*,int,int *) ;} ;
struct TYPE_11__ {int (* printdebug ) (TYPE_5__*,char*,int) ;} ;
struct TYPE_8__ {TYPE_5__ tei_m; int t202; scalar_t__ debug; } ;
struct TYPE_7__ {int tei; } ;
struct PStack {TYPE_4__ l1; TYPE_3__ l3; TYPE_2__ ma; TYPE_1__ l2; } ;
struct IsdnCardState {int (* cardmsg ) (struct IsdnCardState*,int,int *) ;} ;
struct FsmInst {struct PStack* userdata; } ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*,char*,int) ;
 int FUNC_3 (struct PStack*,int,int *) ;
 int FUNC_4 (struct IsdnCardState*,int,int *) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct PStack *VAR_7 = VAR_4->userdata;
 struct sk_buff *VAR_8 = VAR_6;
 struct IsdnCardState *VAR_9;
 int VAR_10;

 VAR_10 = VAR_8->data[4] >> 1;
 if (VAR_7->ma.debug)
  VAR_7->ma.tei_m.printdebug(&VAR_7->ma.tei_m,
   "identity remove tei %d", VAR_10);
 if ((VAR_7->l2.tei != -1) && ((VAR_10 == VAR_0) || (VAR_10 == VAR_7->l2.tei))) {
  FUNC_1(&VAR_7->ma.t202, 5);
  FUNC_0(&VAR_7->ma.tei_m, VAR_3);
  VAR_7->l3.l3l2(VAR_7, VAR_1 | VAR_2, ((void*)0));
  VAR_9 = (struct IsdnCardState *) VAR_7->l1.hardware;
  VAR_9->cardmsg(VAR_9, VAR_1 | VAR_2, ((void*)0));
 }
}
