
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {scalar_t__ ml_priv; } ;
struct claw_privbk {scalar_t__ write_free_count; int * p_write_active_first; } ;
struct chbk {scalar_t__ claw_state; int collect_queue; scalar_t__ ndev; } ;


 int FUNC_0 (int,int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int) ;
 struct sk_buff* FUNC_3 (struct claw_privbk*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6 ( struct chbk * VAR_2 )
{

        struct net_device *VAR_3;
        struct claw_privbk *VAR_4=((void*)0);
 struct sk_buff *VAR_5;
 int VAR_6;

 FUNC_0(4, VAR_1, "claw_wrt");
        if (VAR_2->claw_state == VAR_0)
                return;
        VAR_3 = (struct net_device *) VAR_2->ndev;
 VAR_4 = (struct claw_privbk *) VAR_3->ml_priv;
        FUNC_1( VAR_3 );
 if ((VAR_4->write_free_count > 0) &&
     !FUNC_5(&VAR_2->collect_queue)) {
    VAR_5 = FUNC_3(VAR_4);
  while (VAR_5 != ((void*)0)) {
   VAR_6 = FUNC_2( VAR_5, VAR_3,1);
   if (VAR_4->write_free_count > 0) {
       VAR_5 = FUNC_3(VAR_4);
   } else
    VAR_5 = ((void*)0);
  }
 }
        if (VAR_4->p_write_active_first!=((void*)0)) {
                FUNC_4(VAR_3);
        }
        return;
}
