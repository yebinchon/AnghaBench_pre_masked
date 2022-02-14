
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * function; } ;
struct IsdnCardState {TYPE_3__ dbusytimer; int (* cardmsg ) (struct IsdnCardState*,int ,int *) ;int (* DC_Close ) (struct IsdnCardState*) ;int * tx_skb; int * rcvbuf; int sq; int rq; TYPE_1__* bcs; } ;
struct TYPE_7__ {struct IsdnCardState* cs; } ;
struct TYPE_5__ {int (* BC_Close ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct IsdnCardState*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct IsdnCardState*) ;
 int FUNC_8 (struct IsdnCardState*,int ,int *) ;

__attribute__((used)) static void FUNC_9(int VAR_2)
{
 struct IsdnCardState *VAR_3 = VAR_1[VAR_2].cs;

 if (VAR_3->bcs->BC_Close != ((void*)0)) {
  VAR_3->bcs->BC_Close(VAR_3->bcs + 1);
  VAR_3->bcs->BC_Close(VAR_3->bcs);
 }

 FUNC_4(&VAR_3->rq);
 FUNC_4(&VAR_3->sq);
 FUNC_2(VAR_3->rcvbuf);
 VAR_3->rcvbuf = ((void*)0);
 if (VAR_3->tx_skb) {
  FUNC_1(VAR_3->tx_skb);
  VAR_3->tx_skb = ((void*)0);
 }
 if (VAR_3->DC_Close != ((void*)0)) {
  VAR_3->DC_Close(VAR_3);
 }
 if (VAR_3->cardmsg)
  VAR_3->cardmsg(VAR_3, VAR_0, ((void*)0));
 if (VAR_3->dbusytimer.function != ((void*)0))
  FUNC_0(&VAR_3->dbusytimer);
 FUNC_3(VAR_3);
}
