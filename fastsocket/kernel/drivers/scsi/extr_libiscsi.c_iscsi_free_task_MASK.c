
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * ptr; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_3__ SCp; } ;
struct iscsi_task {struct scsi_cmnd* sc; int state; int itt; struct iscsi_conn* conn; } ;
struct TYPE_5__ {int queue; } ;
struct iscsi_session {TYPE_2__ cmdpool; TYPE_1__* tt; } ;
struct iscsi_conn {struct iscsi_task* login_task; struct iscsi_session* session; } ;
struct TYPE_4__ {int (* cleanup_task ) (struct iscsi_task*) ;} ;


 int FUNC_0 (struct iscsi_session*,char*,int ,int ,struct scsi_cmnd*) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (struct iscsi_task*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(struct iscsi_task *VAR_1)
{
 struct iscsi_conn *VAR_2 = VAR_1->conn;
 struct iscsi_session *VAR_3 = VAR_2->session;
 struct scsi_cmnd *VAR_4 = VAR_1->sc;

 FUNC_0(VAR_3, "freeing task itt 0x%x state %d sc %p\n",
     VAR_1->itt, VAR_1->state, VAR_1->sc);

 VAR_3->tt->cleanup_task(VAR_1);
 VAR_1->state = VAR_0;
 VAR_1->sc = ((void*)0);



 if (VAR_2->login_task == VAR_1)
  return;

 FUNC_1(VAR_3->cmdpool.queue, (void*)&VAR_1, sizeof(void*));

 if (VAR_4) {
  VAR_1->sc = ((void*)0);

  VAR_4->SCp.ptr = ((void*)0);




  if (VAR_4->scsi_done)
   VAR_4->scsi_done(VAR_4);
 }
}
