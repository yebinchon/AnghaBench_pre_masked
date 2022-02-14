
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr {int timer_work; } ;
struct fc_disc {void (* disc_callback ) (struct fc_lport*,int) ;int disc_id; int pending; int disc_mutex; struct fcoe_ctlr* priv; } ;
struct fc_lport {struct fc_disc disc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void (*VAR_0)(struct fc_lport *,
        enum fc_disc_event),
     struct fc_lport *VAR_1)
{
 struct fc_disc *VAR_2 = &VAR_1->disc;
 struct fcoe_ctlr *VAR_3 = VAR_2->priv;

 FUNC_0(&VAR_2->disc_mutex);
 VAR_2->disc_callback = VAR_0;
 VAR_2->disc_id = (VAR_2->disc_id + 2) | 1;
 VAR_2->pending = 1;
 FUNC_2(&VAR_3->timer_work);
 FUNC_1(&VAR_2->disc_mutex);
}
