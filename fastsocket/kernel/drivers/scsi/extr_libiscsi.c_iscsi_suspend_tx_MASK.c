
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_host {scalar_t__ workq; } ;
struct iscsi_conn {int suspend_tx; TYPE_1__* session; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 struct iscsi_host* FUNC_2 (struct Scsi_Host*) ;

void FUNC_3(struct iscsi_conn *VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_1->session->host;
 struct iscsi_host *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_0, &VAR_1->suspend_tx);
 if (VAR_3->workq)
  FUNC_0(VAR_3->workq);
}
