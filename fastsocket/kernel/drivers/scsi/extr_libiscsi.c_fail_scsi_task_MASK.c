
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int result; } ;
struct iscsi_task {scalar_t__ state; struct scsi_cmnd* sc; struct iscsi_conn* conn; } ;
struct iscsi_conn {TYPE_1__* session; } ;
struct TYPE_6__ {int length; int resid; } ;
struct TYPE_5__ {int length; int resid; } ;
struct TYPE_4__ {int queued_cmdsn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct iscsi_task*,int) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 TYPE_3__* FUNC_3 (struct scsi_cmnd*) ;
 TYPE_2__* FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static void FUNC_6(struct iscsi_task *VAR_5, int VAR_6)
{
 struct iscsi_conn *VAR_7 = VAR_5->conn;
 struct scsi_cmnd *VAR_8;
 int VAR_9;






 VAR_8 = VAR_5->sc;
 if (!VAR_8)
  return;

 if (VAR_5->state == VAR_4) {




  VAR_7->session->queued_cmdsn--;

  VAR_9 = VAR_3;
 } else if (VAR_6 == VAR_0)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;

 VAR_8->result = VAR_6 << 16;
 if (!FUNC_1(VAR_8))
  FUNC_5(VAR_8, FUNC_2(VAR_8));
 else {
  FUNC_4(VAR_8)->resid = FUNC_4(VAR_8)->length;
  FUNC_3(VAR_8)->resid = FUNC_3(VAR_8)->length;
 }

 FUNC_0(VAR_5, VAR_9);
}
