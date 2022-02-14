
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_unit {TYPE_2__* port; int status; } ;
struct zfcp_adapter {int dbf; } ;
struct scsi_cmnd {int result; void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_3__* device; int * host_scribble; } ;
struct fc_rport {int dummy; } ;
struct TYPE_6__ {struct zfcp_unit* hostdata; TYPE_1__* host; } ;
struct TYPE_5__ {int status; struct zfcp_adapter* adapter; } ;
struct TYPE_4__ {scalar_t__* hostdata; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fc_rport*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct fc_rport* FUNC_4 (int ) ;
 void FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,int,int ,struct scsi_cmnd*,int *) ;
 int FUNC_8 (struct zfcp_unit*,struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static int FUNC_10(struct scsi_cmnd *VAR_8,
      void (*VAR_9) (struct scsi_cmnd *))
{
 struct zfcp_unit *VAR_10;
 struct zfcp_adapter *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 struct fc_rport *VAR_15 = FUNC_4(FUNC_3(VAR_8->device));


 VAR_8->result = 0;
 VAR_8->host_scribble = ((void*)0);
 VAR_8->scsi_done = VAR_9;





 VAR_11 = (struct zfcp_adapter *) VAR_8->device->host->hostdata[0];
 VAR_10 = VAR_8->device->hostdata;

 FUNC_0(!VAR_11 || (VAR_11 != VAR_10->port->adapter));
 FUNC_0(!VAR_8->scsi_done);

 if (FUNC_6(!VAR_10)) {
  FUNC_9(VAR_8, VAR_2);
  return 0;
 }

 VAR_13 = FUNC_2(VAR_15);
 if (FUNC_6(VAR_13)) {
  VAR_8->result = VAR_13;
  FUNC_7("fail", 4, VAR_11->dbf, VAR_8, ((void*)0));
  VAR_8->scsi_done(VAR_8);
  return 0;
 }

 VAR_12 = FUNC_1(&VAR_10->status);
 if (FUNC_6(VAR_12 & VAR_6) &&
       !(FUNC_1(&VAR_10->port->status) &
         VAR_6)) {


  FUNC_9(VAR_8, VAR_0);
  return 0;
 }

 if (FUNC_6(!(VAR_12 & VAR_7))) {






  FUNC_9(VAR_8, VAR_1);
  return 0;
 }

 VAR_14 = FUNC_8(VAR_10, VAR_8);
 if (FUNC_6(VAR_14 == -VAR_3))
  return VAR_4;
 else if (FUNC_6(VAR_14 < 0))
  return VAR_5;

 return VAR_14;
}
