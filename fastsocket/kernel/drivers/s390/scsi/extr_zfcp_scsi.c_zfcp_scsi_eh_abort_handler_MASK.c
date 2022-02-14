
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_unit {int dummy; } ;
struct zfcp_fsf_req {int status; int completion; int * data; } ;
struct zfcp_adapter {int dbf; int status; int abort_lock; int req_list_lock; } ;
struct scsi_cmnd {scalar_t__ host_scribble; TYPE_1__* device; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
struct TYPE_2__ {struct zfcp_unit* hostdata; struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (char*,int ,struct scsi_cmnd*,struct zfcp_fsf_req*,unsigned long) ;
 int FUNC_8 (struct zfcp_adapter*) ;
 struct zfcp_fsf_req* FUNC_9 (unsigned long,struct zfcp_unit*) ;
 int FUNC_10 (struct zfcp_fsf_req*) ;
 struct zfcp_fsf_req* FUNC_11 (struct zfcp_adapter*,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct scsi_cmnd *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5->device->host;
 struct zfcp_adapter *VAR_7 =
  (struct zfcp_adapter *) VAR_6->hostdata[0];
 struct zfcp_unit *VAR_8 = VAR_5->device->hostdata;
 struct zfcp_fsf_req *VAR_9, *VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12 = (unsigned long) VAR_5->host_scribble;
 int VAR_13 = VAR_1, VAR_14;
 int VAR_15 = 3;
 char *VAR_16;


 FUNC_5(&VAR_7->abort_lock, VAR_11);

 FUNC_2(&VAR_7->req_list_lock);
 VAR_9 = FUNC_11(VAR_7, VAR_12);
 FUNC_3(&VAR_7->req_list_lock);
 if (!VAR_9) {
  FUNC_6(&VAR_7->abort_lock, VAR_11);
  FUNC_7("lte1", VAR_7->dbf, VAR_5, ((void*)0),
        VAR_12);
  return VAR_0;
 }
 VAR_9->data = ((void*)0);


 FUNC_6(&VAR_7->abort_lock, VAR_11);

 while (VAR_15--) {
  VAR_10 = FUNC_9(VAR_12, VAR_8);
  if (VAR_10)
   break;

  FUNC_8(VAR_7);
  VAR_14 = FUNC_1(VAR_5);
  if (VAR_14)
   return VAR_14;
  if (!(FUNC_0(&VAR_7->status) &
        VAR_2)) {
   FUNC_7("nres", VAR_7->dbf, VAR_5, ((void*)0),
         VAR_12);
   return VAR_1;
  }
 }
 if (!VAR_10)
  return VAR_0;

 FUNC_4(&VAR_10->completion);

 if (VAR_10->status & VAR_4)
  VAR_16 = "okay";
 else if (VAR_10->status & VAR_3)
  VAR_16 = "lte2";
 else {
  VAR_16 = "fail";
  VAR_13 = VAR_0;
 }
 FUNC_7(VAR_16, VAR_7->dbf, VAR_5, VAR_10, VAR_12);
 FUNC_10(VAR_10);
 return VAR_13;
}
