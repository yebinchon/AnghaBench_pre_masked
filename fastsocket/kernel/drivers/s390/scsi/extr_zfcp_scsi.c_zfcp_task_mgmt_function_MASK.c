
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct zfcp_unit {TYPE_2__* port; } ;
struct zfcp_fsf_req {int status; int completion; } ;
struct zfcp_adapter {int status; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_4__ {struct zfcp_adapter* adapter; } ;
struct TYPE_3__ {struct zfcp_unit* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,struct zfcp_unit*,struct scsi_cmnd*) ;
 int FUNC_4 (struct zfcp_adapter*) ;
 int FUNC_5 (struct zfcp_fsf_req*) ;
 struct zfcp_fsf_req* FUNC_6 (struct zfcp_unit*,int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_5, u8 VAR_6)
{
 struct zfcp_unit *VAR_7 = VAR_5->device->hostdata;
 struct zfcp_adapter *VAR_8 = VAR_7->port->adapter;
 struct zfcp_fsf_req *VAR_9 = ((void*)0);
 int VAR_10 = VAR_1, VAR_11;
 int VAR_12 = 3;

 while (VAR_12--) {
  VAR_9 = FUNC_6(VAR_7, VAR_6);
  if (VAR_9)
   break;

  FUNC_4(VAR_8);
  VAR_11 = FUNC_1(VAR_5);
  if (VAR_11)
   return VAR_11;

  if (!(FUNC_0(&VAR_8->status) &
        VAR_2)) {
   FUNC_3("nres", VAR_6, VAR_7, VAR_5);
   return VAR_1;
  }
 }
 if (!VAR_9)
  return VAR_0;

 FUNC_2(&VAR_9->completion);

 if (VAR_9->status & VAR_3) {
  FUNC_3("fail", VAR_6, VAR_7, VAR_5);
  VAR_10 = VAR_0;
 } else if (VAR_9->status & VAR_4) {
  FUNC_3("nsup", VAR_6, VAR_7, VAR_5);
  VAR_10 = VAR_0;
 } else
  FUNC_3("okay", VAR_6, VAR_7, VAR_5);

 FUNC_5(VAR_9);
 return VAR_10;
}
