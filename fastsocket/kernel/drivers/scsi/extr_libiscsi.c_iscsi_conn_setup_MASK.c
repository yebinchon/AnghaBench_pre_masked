
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int queue; } ;
struct iscsi_session {TYPE_1__ cmdpool; int lock; } ;
struct TYPE_6__ {unsigned long data; int function; } ;
struct iscsi_conn {char* data; TYPE_2__* login_task; int ehwait; TYPE_3__ tmf_timer; int xmitwork; int requeue; int cmdqueue; int mgmtqueue; TYPE_3__ transport_timer; int tmf_state; scalar_t__ exp_statsn; int id; int c_stage; struct iscsi_cls_conn* cls_conn; struct iscsi_session* session; struct iscsi_conn* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct TYPE_5__ {char* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,void*,int) ;
 int FUNC_4 (int ,void*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 struct iscsi_cls_conn* FUNC_8 (struct iscsi_cls_session*,int,int ) ;
 int FUNC_9 (struct iscsi_cls_conn*) ;
 int VAR_5 ;
 int FUNC_10 (struct iscsi_conn*,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

struct iscsi_cls_conn *
FUNC_13(struct iscsi_cls_session *VAR_6, int VAR_7,
   uint32_t VAR_8)
{
 struct iscsi_session *VAR_9 = VAR_6->dd_data;
 struct iscsi_conn *VAR_10;
 struct iscsi_cls_conn *VAR_11;
 char *VAR_12;

 VAR_11 = FUNC_8(VAR_6, sizeof(*VAR_10) + VAR_7,
         VAR_8);
 if (!VAR_11)
  return ((void*)0);
 VAR_10 = VAR_11->dd_data;
 FUNC_10(VAR_10, 0, sizeof(*VAR_10) + VAR_7);

 VAR_10->dd_data = VAR_11->dd_data + sizeof(*VAR_10);
 VAR_10->session = VAR_9;
 VAR_10->cls_conn = VAR_11;
 VAR_10->c_stage = VAR_1;
 VAR_10->id = VAR_8;
 VAR_10->exp_statsn = 0;
 VAR_10->tmf_state = VAR_3;

 FUNC_6(&VAR_10->transport_timer);
 VAR_10->transport_timer.data = (unsigned long)VAR_10;
 VAR_10->transport_timer.function = VAR_4;

 FUNC_0(&VAR_10->mgmtqueue);
 FUNC_0(&VAR_10->cmdqueue);
 FUNC_0(&VAR_10->requeue);
 FUNC_1(&VAR_10->xmitwork, VAR_5);


 FUNC_11(&VAR_9->lock);
 if (!FUNC_3(VAR_9->cmdpool.queue,
                         (void*)&VAR_10->login_task,
    sizeof(void*))) {
  FUNC_12(&VAR_9->lock);
  goto login_task_alloc_fail;
 }
 FUNC_12(&VAR_9->lock);

 VAR_12 = (char *) FUNC_2(VAR_0,
      FUNC_5(VAR_2));
 if (!VAR_12)
  goto login_task_data_alloc_fail;
 VAR_10->login_task->data = VAR_10->data = VAR_12;

 FUNC_6(&VAR_10->tmf_timer);
 FUNC_7(&VAR_10->ehwait);

 return VAR_11;

login_task_data_alloc_fail:
 FUNC_4(VAR_9->cmdpool.queue, (void*)&VAR_10->login_task,
      sizeof(void*));
login_task_alloc_fail:
 FUNC_9(VAR_11);
 return ((void*)0);
}
