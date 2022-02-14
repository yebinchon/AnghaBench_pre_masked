
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_host {scalar_t__ workq; } ;
struct iscsi_conn {int xmitwork; TYPE_1__* session; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int FUNC_0 (scalar_t__,int *) ;
 struct iscsi_host* FUNC_1 (struct Scsi_Host*) ;

inline void FUNC_2(struct iscsi_conn *VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->session->host;
 struct iscsi_host *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->workq)
  FUNC_0(VAR_2->workq, &VAR_0->xmitwork);
}
