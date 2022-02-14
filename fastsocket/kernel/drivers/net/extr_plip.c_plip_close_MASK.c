
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plip_local {int * skb; void* state; } ;
struct net_local {scalar_t__ port_owner; int pardev; int connection; scalar_t__ is_deferred; int killed_timer_cmp; int kill_timer; struct plip_local rcv_data; struct plip_local snd_data; } ;
struct net_device {int irq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct net_local* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct net_device *VAR_2)
{
 struct net_local *VAR_3 = FUNC_7(VAR_2);
 struct plip_local *VAR_4 = &VAR_3->snd_data;
 struct plip_local *VAR_5 = &VAR_3->rcv_data;

 FUNC_8 (VAR_2);
 FUNC_0(VAR_2->irq);
 FUNC_11(VAR_2->irq);

 if (VAR_2->irq == -1)
 {
  FUNC_5(&VAR_3->killed_timer_cmp);
  FUNC_3 (&VAR_3->kill_timer, 1);
  FUNC_12(&VAR_3->killed_timer_cmp);
 }




 VAR_3->is_deferred = 0;
 VAR_3->connection = VAR_0;
 if (VAR_3->port_owner) {
  FUNC_10(VAR_3->pardev);
  VAR_3->port_owner = 0;
 }

 VAR_4->state = VAR_1;
 if (VAR_4->skb) {
  FUNC_4(VAR_4->skb);
  VAR_4->skb = ((void*)0);
 }
 VAR_5->state = VAR_1;
 if (VAR_5->skb) {
  FUNC_6(VAR_5->skb);
  VAR_5->skb = ((void*)0);
 }





 return 0;
}
