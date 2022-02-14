
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_erp_action {scalar_t__ fsf_req; int step; int status; TYPE_1__* adapter; } ;
struct TYPE_5__ {unsigned long action; unsigned long fsf_req; int step; int status; } ;
struct TYPE_6__ {TYPE_2__ action; } ;
struct zfcp_dbf_rec_record {TYPE_3__ u; int id2; int id; } ;
struct zfcp_dbf {int rec_lock; int rec; struct zfcp_dbf_rec_record rec_buf; } ;
struct TYPE_4__ {struct zfcp_dbf* dbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct zfcp_dbf_rec_record*,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct zfcp_dbf_rec_record*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(char *VAR_2, struct zfcp_erp_action *VAR_3)
{
 struct zfcp_dbf *VAR_4 = VAR_3->adapter->dbf;
 struct zfcp_dbf_rec_record *VAR_5 = &VAR_4->rec_buf;
 unsigned long VAR_6;

 FUNC_3(&VAR_4->rec_lock, VAR_6);
 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->id = VAR_1;
 FUNC_1(VAR_5->id2, VAR_2, VAR_0);
 VAR_5->u.action.action = (unsigned long)VAR_3;
 VAR_5->u.action.status = VAR_3->status;
 VAR_5->u.action.step = VAR_3->step;
 VAR_5->u.action.fsf_req = (unsigned long)VAR_3->fsf_req;
 FUNC_0(VAR_4->rec, 5, VAR_5, sizeof(*VAR_5));
 FUNC_4(&VAR_4->rec_lock, VAR_6);
}
