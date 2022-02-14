
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fnic {TYPE_2__* lport; } ;
struct TYPE_3__ {scalar_t__ (* lport_reset ) (struct fc_lport*) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 struct fnic* FUNC_1 (struct fc_lport*) ;
 struct fc_lport* FUNC_2 (struct Scsi_Host*) ;
 scalar_t__ FUNC_3 (struct fc_lport*) ;

int FUNC_4(struct Scsi_Host *VAR_3)
{
 struct fc_lport *VAR_4;
 struct fnic *VAR_5;
 int VAR_6 = VAR_2;

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_1, VAR_5->lport->host,
        "fnic_reset called\n");





 if (VAR_4->tt.lport_reset(VAR_4))
  VAR_6 = VAR_0;

 FUNC_0(VAR_1, VAR_5->lport->host,
        "Returning from fnic reset %s\n",
        (VAR_6 == VAR_2) ?
        "SUCCESS" : "FAILED");

 return VAR_6;
}
