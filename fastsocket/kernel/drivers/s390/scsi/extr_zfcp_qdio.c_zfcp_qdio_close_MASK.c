
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_qdio_queue {int first; int count; int sbal; } ;
struct TYPE_4__ {int count; int first; } ;
struct zfcp_qdio {TYPE_2__ resp_q; TYPE_1__* adapter; int req_q_wq; int req_q_lock; struct zfcp_qdio_queue req_q; } ;
struct TYPE_3__ {int ccw_device; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,int) ;

void FUNC_8(struct zfcp_qdio *VAR_3)
{
 struct zfcp_qdio_queue *VAR_4;
 int VAR_5, VAR_6;

 if (!(FUNC_1(&VAR_3->adapter->status) & VAR_2))
  return;


 VAR_4 = &VAR_3->req_q;
 FUNC_4(&VAR_3->req_q_lock);
 FUNC_0(VAR_2, &VAR_3->adapter->status);
 FUNC_5(&VAR_3->req_q_lock);

 FUNC_6(&VAR_3->req_q_wq);

 FUNC_3(VAR_3->adapter->ccw_device,
        VAR_0);


 VAR_6 = FUNC_1(&VAR_4->count);
 if (VAR_6 < VAR_1) {
  VAR_5 = (VAR_4->first + VAR_6) % VAR_1;
  VAR_6 = VAR_1 - VAR_6;
  FUNC_7(VAR_4->sbal, VAR_5, VAR_6);
 }
 VAR_4->first = 0;
 FUNC_2(&VAR_4->count, 0);
 VAR_3->resp_q.first = 0;
 FUNC_2(&VAR_3->resp_q.count, 0);
}
