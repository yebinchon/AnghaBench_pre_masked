
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int conn; int ud; } ;
struct TYPE_6__ {scalar_t__ event; TYPE_1__ param; int status; } ;
struct ucma_event {int list; TYPE_2__ resp; struct rdma_cm_id* cm_id; } ;
struct ucma_context {TYPE_4__* file; int uid; int backlog; } ;
struct rdma_cm_id {scalar_t__ qp_type; struct ucma_context* context; } ;
struct TYPE_7__ {int conn; int ud; } ;
struct rdma_cm_event {scalar_t__ event; TYPE_3__ param; int status; } ;
struct TYPE_8__ {int mut; int poll_wait; int event_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ucma_event*) ;
 struct ucma_event* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct ucma_context*,struct rdma_cm_event*,struct ucma_event*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct rdma_cm_id *VAR_4,
         struct rdma_cm_event *VAR_5)
{
 struct ucma_event *VAR_6;
 struct ucma_context *VAR_7 = VAR_4->context;
 int VAR_8 = 0;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return VAR_5->event == VAR_3;

 FUNC_3(&VAR_7->file->mut);
 VAR_6->cm_id = VAR_4;
 FUNC_7(VAR_7, VAR_5, VAR_6);
 VAR_6->resp.event = VAR_5->event;
 VAR_6->resp.status = VAR_5->status;
 if (VAR_4->qp_type == VAR_2)
  FUNC_6(&VAR_6->resp.param.ud, &VAR_5->param.ud);
 else
  FUNC_5(&VAR_6->resp.param.conn,
         &VAR_5->param.conn);

 if (VAR_5->event == VAR_3) {
  if (!VAR_7->backlog) {
   VAR_8 = -VAR_0;
   FUNC_0(VAR_6);
   goto out;
  }
  VAR_7->backlog--;
 } else if (!VAR_7->uid) {






  FUNC_0(VAR_6);
  goto out;
 }

 FUNC_2(&VAR_6->list, &VAR_7->file->event_list);
 FUNC_8(&VAR_7->file->poll_wait);
out:
 FUNC_4(&VAR_7->file->mut);
 return VAR_8;
}
