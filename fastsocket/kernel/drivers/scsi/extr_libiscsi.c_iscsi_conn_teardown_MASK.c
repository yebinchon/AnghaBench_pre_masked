
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int queue; } ;
struct iscsi_session {int lock; struct iscsi_conn* leadconn; TYPE_2__ cmdpool; TYPE_1__* host; int state; } ;
struct iscsi_conn {int login_task; int persistent_address; scalar_t__ data; int ehwait; int c_stage; int transport_timer; struct iscsi_session* session; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct TYPE_3__ {int host_failed; int host_busy; int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct iscsi_conn*,char*,int ,int ) ;
 int FUNC_5 (struct iscsi_cls_conn*) ;
 int FUNC_6 (struct iscsi_conn*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,unsigned long) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct iscsi_cls_conn *VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_4->dd_data;
 struct iscsi_session *VAR_6 = VAR_5->session;
 unsigned long VAR_7;

 FUNC_1(&VAR_5->transport_timer);

 FUNC_9(&VAR_6->lock);
 VAR_5->c_stage = VAR_0;
 if (VAR_6->leadconn == VAR_5) {



  VAR_6->state = VAR_2;
  FUNC_13(&VAR_5->ehwait);
 }
 FUNC_11(&VAR_6->lock);





 for (;;) {
  FUNC_10(VAR_6->host->host_lock, VAR_7);
  if (!VAR_6->host->host_busy) {
   FUNC_12(VAR_6->host->host_lock, VAR_7);
   break;
  }
  FUNC_12(VAR_6->host->host_lock, VAR_7);
  FUNC_8(500);
  FUNC_4(VAR_3, VAR_5, "iscsi conn_destroy(): "
      "host_busy %d host_failed %d\n",
      VAR_6->host->host_busy,
      VAR_6->host->host_failed);



  FUNC_13(&VAR_5->ehwait);
 }


 FUNC_6(VAR_5);

 FUNC_9(&VAR_6->lock);
 FUNC_2((unsigned long) VAR_5->data,
     FUNC_3(VAR_1));
 FUNC_7(VAR_5->persistent_address);
 FUNC_0(VAR_6->cmdpool.queue, (void*)&VAR_5->login_task,
      sizeof(void*));
 if (VAR_6->leadconn == VAR_5)
  VAR_6->leadconn = ((void*)0);
 FUNC_11(&VAR_6->lock);

 FUNC_5(VAR_4);
}
