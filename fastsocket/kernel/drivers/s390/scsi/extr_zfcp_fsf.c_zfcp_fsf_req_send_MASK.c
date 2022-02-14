
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; } ;
struct zfcp_qdio {TYPE_1__ req_q; } ;
struct TYPE_4__ {int qdio_outb_usage; } ;
struct zfcp_fsf_req {int timer; TYPE_2__ queue_req; int issued; int list; int req_id; int * qtcb; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int req_no; int fsf_req_seq_no; int req_list_lock; int * req_list; struct zfcp_qdio* qdio; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct zfcp_adapter*,int ,char*,struct zfcp_fsf_req*) ;
 scalar_t__ FUNC_7 (struct zfcp_qdio*,TYPE_2__*) ;
 scalar_t__ FUNC_8 (struct zfcp_adapter*,struct zfcp_fsf_req*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct zfcp_adapter*,struct zfcp_fsf_req*) ;

__attribute__((used)) static int FUNC_11(struct zfcp_fsf_req *VAR_1)
{
 struct zfcp_adapter *VAR_2 = VAR_1->adapter;
 struct zfcp_qdio *VAR_3 = VAR_2->qdio;
 unsigned long VAR_4;
 int VAR_5;
 int VAR_6 = (VAR_1->qtcb != ((void*)0));


 FUNC_4(&VAR_2->req_list_lock, VAR_4);
 VAR_5 = FUNC_9(VAR_1->req_id);
 FUNC_3(&VAR_1->list, &VAR_2->req_list[VAR_5]);
 FUNC_5(&VAR_2->req_list_lock, VAR_4);

 VAR_1->queue_req.qdio_outb_usage = FUNC_0(&VAR_3->req_q.count);
 VAR_1->issued = FUNC_2();
 if (FUNC_7(VAR_3, &VAR_1->queue_req)) {
  FUNC_1(&VAR_1->timer);
  FUNC_4(&VAR_2->req_list_lock, VAR_4);

  if (FUNC_8(VAR_2, VAR_1))
   FUNC_10(VAR_2, VAR_1);
  FUNC_5(&VAR_2->req_list_lock, VAR_4);
  FUNC_6(VAR_2, 0, "fsrs__1", VAR_1);
  return -VAR_0;
 }


 if (VAR_6)
  VAR_2->fsf_req_seq_no++;
 VAR_2->req_no++;

 return 0;
}
