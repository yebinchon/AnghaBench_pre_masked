
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {struct Scsi_Host* scsi_host; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;

void FUNC_3(struct zfcp_adapter *VAR_0)
{
 struct Scsi_Host *VAR_1;

 VAR_1 = VAR_0->scsi_host;
 if (!VAR_1)
  return;

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 VAR_0->scsi_host = ((void*)0);
}
