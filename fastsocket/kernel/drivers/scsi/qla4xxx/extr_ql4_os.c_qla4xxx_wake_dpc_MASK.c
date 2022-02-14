
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dpc_work; scalar_t__ dpc_thread; } ;


 int FUNC_0 (scalar_t__,int *) ;

void FUNC_1(struct scsi_qla_host *VAR_0)
{
 if (VAR_0->dpc_thread)
  FUNC_0(VAR_0->dpc_thread, &VAR_0->dpc_work);
}
