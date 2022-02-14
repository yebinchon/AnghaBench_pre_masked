
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {struct channel* next; struct channel* irb; struct channel* ccw; struct channel* discontact_th; int ch_disc_tasklet; int ch_tasklet; int * trans_skb; int fsm; int sweep_timer; int timer; int id; } ;


 int FUNC_0 (int ,int ,char*,int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct channel*) ;
 int VAR_3 ;
 int FUNC_2 (struct channel*) ;
 struct channel* VAR_4 ;
 int FUNC_3 (struct channel*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct channel*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct channel *VAR_5)
{
 struct channel **VAR_6 = &VAR_4;
 char VAR_7[VAR_1+1];
 int VAR_8 = 0;

 if (VAR_5 == ((void*)0))
  return;
 else
  FUNC_8(VAR_7, VAR_5->id, VAR_1);

 FUNC_2(VAR_5);
 while (*VAR_6) {
  if (*VAR_6 == VAR_5) {
   *VAR_6 = VAR_5->next;
   FUNC_5(&VAR_5->timer);
   if (FUNC_1(VAR_5))
    FUNC_5(&VAR_5->sweep_timer);

   FUNC_7(VAR_5->fsm);
   FUNC_3(&VAR_5->ccw[4]);
   if (VAR_5->trans_skb != ((void*)0)) {
    FUNC_3(&VAR_5->ccw[1]);
    FUNC_4(VAR_5->trans_skb);
   }
   if (FUNC_1(VAR_5)) {
    FUNC_9(&VAR_5->ch_tasklet);
    FUNC_9(&VAR_5->ch_disc_tasklet);
    FUNC_6(VAR_5->discontact_th);
   }
   FUNC_6(VAR_5->ccw);
   FUNC_6(VAR_5->irb);
   FUNC_6(VAR_5);
   VAR_8 = 1;
   break;
  }
  VAR_6 = &((*VAR_6)->next);
 }

 FUNC_0(VAR_3, VAR_2, "%s(%s) %s", VAR_0,
   VAR_7, VAR_8 ? "OK" : "failed");
}
