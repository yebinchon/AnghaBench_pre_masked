
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_exch {void (* resp ) (struct fc_seq*,struct fc_frame*,void*) ;int esb_stat; int ex_lock; struct fc_seq seq; void* arg; int ex_refcnt; int timeout_work; int state; } ;


 struct fc_frame* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct fc_exch*,int ) ;
 int FUNC_4 (struct fc_exch*) ;
 int FUNC_5 (struct fc_exch*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct fc_exch *VAR_3)
{
 struct fc_seq *VAR_4;
 void (*VAR_5)(struct fc_seq *, struct fc_frame *, void *);
 void *VAR_6;
 int VAR_7 = 1;

 FUNC_6(&VAR_3->ex_lock);
 FUNC_3(VAR_3, 0);
 VAR_3->state |= VAR_2;
 if (FUNC_2(&VAR_3->timeout_work))
  FUNC_1(&VAR_3->ex_refcnt);
 VAR_5 = VAR_3->resp;
 VAR_3->resp = ((void*)0);
 if (VAR_3->esb_stat & VAR_0)
  FUNC_1(&VAR_3->ex_refcnt);
 VAR_3->esb_stat &= ~VAR_0;
 VAR_6 = VAR_3->arg;
 VAR_4 = &VAR_3->seq;
 VAR_7 = FUNC_5(VAR_3);
 FUNC_7(&VAR_3->ex_lock);
 if (!VAR_7)
  FUNC_4(VAR_3);

 if (VAR_5)
  VAR_5(VAR_4, FUNC_0(-VAR_1), VAR_6);
}
