
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srb {int * wait; struct scsi_cmnd* cmd; } ;
struct scsi_qla_host {TYPE_1__* host; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct completion {int dummy; } ;
struct TYPE_2__ {int host_lock; } ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct completion*,int) ;

__attribute__((used)) static int
FUNC_5(struct scsi_qla_host *VAR_4, struct srb *VAR_5,
     struct completion *VAR_6)
{
 int VAR_7 = VAR_1;
 struct scsi_cmnd *VAR_8 = VAR_5->cmd;

 FUNC_2(VAR_4->host->host_lock);
 FUNC_4(VAR_6, 4*VAR_2);
 FUNC_1(VAR_4->host->host_lock);
 VAR_5->wait = ((void*)0);
 if(FUNC_0(VAR_8) == VAR_0) {
  VAR_7 = VAR_3;
  (*VAR_8->scsi_done)(VAR_8);
 }
 return VAR_7;
}
