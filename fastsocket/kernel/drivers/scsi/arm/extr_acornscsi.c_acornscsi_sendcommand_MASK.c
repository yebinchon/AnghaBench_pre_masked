
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__ cmd_len; int cmnd; } ;
struct TYPE_10__ {scalar_t__ sent_command; } ;
struct TYPE_12__ {int phase; TYPE_1__ SCp; } ;
struct TYPE_13__ {TYPE_3__ scsi; TYPE_2__* host; struct scsi_cmnd* SCpnt; } ;
struct TYPE_11__ {int host_no; } ;
typedef TYPE_4__ AS_Host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ,int*,scalar_t__,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(AS_Host *VAR_3)
{
 struct scsi_cmnd *VAR_4 = VAR_3->SCpnt;

    FUNC_3(VAR_3, VAR_2, 0);
    FUNC_4(VAR_3, 0);
    FUNC_4(VAR_3, VAR_4->cmd_len - VAR_3->scsi.SCp.sent_command);

    FUNC_0(VAR_3, VAR_0);

    if (FUNC_1(VAR_3, VAR_4->cmnd,
 (int *)&VAR_3->scsi.SCp.sent_command, VAR_4->cmd_len, 1000000))
 FUNC_2("scsi%d: timeout while sending command\n", VAR_3->host->host_no);

    VAR_3->scsi.phase = VAR_1;
}
