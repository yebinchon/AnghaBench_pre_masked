
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_adapter {int dbf; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__* hostdata; } ;


 int FUNC_0 (struct scsi_cmnd*,int) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (char*,int,int ,struct scsi_cmnd*,int *) ;

__attribute__((used)) static void FUNC_3(struct scsi_cmnd *VAR_0, int VAR_1)
{
 struct zfcp_adapter *VAR_2 =
  (struct zfcp_adapter *) VAR_0->device->host->hostdata[0];
 FUNC_0(VAR_0, VAR_1);
 if ((VAR_0->device != ((void*)0)) && (VAR_0->device->host != ((void*)0)))
  FUNC_2("fail", 4, VAR_2->dbf, VAR_0, ((void*)0));

 VAR_0->scsi_done(VAR_0);
}
