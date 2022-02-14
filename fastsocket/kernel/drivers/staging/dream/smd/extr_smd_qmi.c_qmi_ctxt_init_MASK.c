
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct qmi_ctxt {int ctl_txn_id; int wds_txn_id; int wds_busy; int state; TYPE_1__ misc; int wake_lock; int open_work; int read_work; int lock; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ) ;

void FUNC_3(struct qmi_ctxt *VAR_4, unsigned VAR_5)
{
 FUNC_1(&VAR_4->lock);
 FUNC_0(&VAR_4->read_work, VAR_3);
 FUNC_0(&VAR_4->open_work, VAR_2);
 FUNC_2(&VAR_4->wake_lock, VAR_1, VAR_4->misc.name);
 VAR_4->ctl_txn_id = 1;
 VAR_4->wds_txn_id = 1;
 VAR_4->wds_busy = 1;
 VAR_4->state = VAR_0;

}
