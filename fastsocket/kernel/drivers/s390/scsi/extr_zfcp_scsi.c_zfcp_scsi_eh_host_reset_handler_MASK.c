
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_unit {TYPE_2__* port; } ;
struct zfcp_adapter {int dummy; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_4__ {struct zfcp_adapter* adapter; } ;
struct TYPE_3__ {struct zfcp_unit* hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct zfcp_adapter*,int ,char*,struct scsi_cmnd*) ;
 int FUNC_2 (struct zfcp_adapter*) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_1)
{
 struct zfcp_unit *VAR_2 = VAR_1->device->hostdata;
 struct zfcp_adapter *VAR_3 = VAR_2->port->adapter;
 int VAR_4;

 FUNC_1(VAR_3, 0, "schrh_1", VAR_1);
 FUNC_2(VAR_3);
 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4)
  return VAR_4;

 return VAR_0;
}
