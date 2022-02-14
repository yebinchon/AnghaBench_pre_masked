
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* ptr; int phase; } ;
struct scsi_cmnd {TYPE_3__ SCp; } ;
struct iscsi_task {int have_checked_conn; int running; void* last_xfer; void* last_timeout; struct scsi_cmnd* sc; struct iscsi_conn* conn; int state; int refcount; } ;
struct iscsi_conn {TYPE_2__* session; } ;
struct TYPE_4__ {int queue; } ;
struct TYPE_5__ {int age; TYPE_1__ cmdpool; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (int *,int) ;
 void* VAR_1 ;

__attribute__((used)) static inline struct iscsi_task *FUNC_3(struct iscsi_conn *VAR_2,
        struct scsi_cmnd *VAR_3)
{
 struct iscsi_task *VAR_4;

 if (!FUNC_1(VAR_2->session->cmdpool.queue,
    (void *) &VAR_4, sizeof(void *)))
  return ((void*)0);

 VAR_3->SCp.phase = VAR_2->session->age;
 VAR_3->SCp.ptr = (char *) VAR_4;

 FUNC_2(&VAR_4->refcount, 1);
 VAR_4->state = VAR_0;
 VAR_4->conn = VAR_2;
 VAR_4->sc = VAR_3;
 VAR_4->have_checked_conn = 0;
 VAR_4->last_timeout = VAR_1;
 VAR_4->last_xfer = VAR_1;
 FUNC_0(&VAR_4->running);
 return VAR_4;
}
