
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wahc {int xfer_id_count; int xfer_work; int xfer_list_lock; int xfer_delayed_list; int xfer_list; int dti_edc; int notifs_queued; int nep_edc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wahc*) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_6(struct wahc *VAR_1)
{
 FUNC_3(&VAR_1->nep_edc);
 FUNC_2(&VAR_1->notifs_queued, 0);
 FUNC_5(VAR_1);
 FUNC_3(&VAR_1->dti_edc);
 FUNC_0(&VAR_1->xfer_list);
 FUNC_0(&VAR_1->xfer_delayed_list);
 FUNC_4(&VAR_1->xfer_list_lock);
 FUNC_1(&VAR_1->xfer_work, VAR_0);
 FUNC_2(&VAR_1->xfer_id_count, 1);
}
