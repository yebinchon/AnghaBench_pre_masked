
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct iscsi_internal {TYPE_1__* iscsi_transport; } ;
struct iscsi_cls_host {struct request_queue* bsg_q; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_no; int transportt; struct device shost_gendev; } ;
typedef int bsg_name ;
struct TYPE_2__ {int bsg_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct request_queue* FUNC_0 (struct Scsi_Host*,int ) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct device*,struct request_queue*,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,struct Scsi_Host*,char*) ;
 int FUNC_4 (char*,int,char*,int) ;
 struct iscsi_internal* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct Scsi_Host *VAR_4, struct iscsi_cls_host *VAR_5)
{
 struct device *VAR_6 = &VAR_4->shost_gendev;
 struct iscsi_internal *VAR_7 = FUNC_5(VAR_4->transportt);
 struct request_queue *VAR_8;
 char VAR_9[20];
 int VAR_10;

 if (!VAR_7->iscsi_transport->bsg_request)
  return -VAR_1;

 FUNC_4(VAR_9, sizeof(VAR_9), "iscsi_host%d", VAR_4->host_no);

 VAR_8 = FUNC_0(VAR_4, VAR_3);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_6, VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_3(VAR_2, VAR_4, "bsg interface failed to "
        "initialize - no request queue\n");
  FUNC_1(VAR_8);
  return VAR_10;
 }

 VAR_5->bsg_q = VAR_8;
 return 0;
}
