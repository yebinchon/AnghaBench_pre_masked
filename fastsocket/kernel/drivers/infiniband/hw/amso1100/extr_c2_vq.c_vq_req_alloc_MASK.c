
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c2_vq_req {int reply_ready; int refcnt; int * qp; int * cm_id; scalar_t__ event; scalar_t__ reply_msg; int wait_object; } ;
struct c2_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct c2_vq_req* FUNC_2 (int,int ) ;

struct c2_vq_req *FUNC_3(struct c2_dev *VAR_1)
{
 struct c2_vq_req *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct c2_vq_req), VAR_0);
 if (VAR_2) {
  FUNC_1(&VAR_2->wait_object);
  VAR_2->reply_msg = 0;
  VAR_2->event = 0;
  VAR_2->cm_id = ((void*)0);
  VAR_2->qp = ((void*)0);
  FUNC_0(&VAR_2->refcnt, 1);
  FUNC_0(&VAR_2->reply_ready, 0);
 }
 return VAR_2;
}
