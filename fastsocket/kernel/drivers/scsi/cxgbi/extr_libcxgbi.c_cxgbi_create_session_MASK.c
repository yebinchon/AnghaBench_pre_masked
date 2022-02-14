
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct iscsi_tcp_task {int dummy; } ;
struct iscsi_session {int dummy; } ;
struct iscsi_endpoint {struct cxgbi_endpoint* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct cxgbi_task_data {int dummy; } ;
struct cxgbi_hba {TYPE_1__* cdev; struct Scsi_Host* shost; } ;
struct cxgbi_endpoint {struct cxgbi_hba* chba; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int itp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cxgbi_hba* FUNC_1 (struct Scsi_Host*) ;
 struct iscsi_cls_session* FUNC_2 (int ,struct Scsi_Host*,int ,int ,int,int ,int ) ;
 int FUNC_3 (struct iscsi_cls_session*) ;
 scalar_t__ FUNC_4 (struct iscsi_session*) ;
 int FUNC_5 (int,char*,struct iscsi_endpoint*,struct iscsi_cls_session*) ;
 int FUNC_6 (char*) ;

struct iscsi_cls_session *FUNC_7(struct iscsi_endpoint *VAR_2,
      u16 VAR_3, u16 VAR_4,
      u32 VAR_5)
{
 struct cxgbi_endpoint *VAR_6;
 struct cxgbi_hba *VAR_7;
 struct Scsi_Host *VAR_8;
 struct iscsi_cls_session *VAR_9;
 struct iscsi_session *VAR_10;

 if (!VAR_2) {
  FUNC_6("missing endpoint.\n");
  return ((void*)0);
 }

 VAR_6 = VAR_2->dd_data;
 VAR_7 = VAR_6->chba;
 VAR_8 = VAR_7->shost;

 FUNC_0(VAR_7 != FUNC_1(VAR_8));

 VAR_9 = FUNC_2(VAR_7->cdev->itp, VAR_8,
     VAR_3, 0,
     sizeof(struct iscsi_tcp_task) +
     sizeof(struct cxgbi_task_data),
     VAR_5, VAR_1);
 if (!VAR_9)
  return ((void*)0);

 VAR_10 = VAR_9->dd_data;
 if (FUNC_4(VAR_10))
  goto remove_session;

 FUNC_5(1 << VAR_0,
  "ep 0x%p, cls sess 0x%p.\n", VAR_2, VAR_9);
 return VAR_9;

remove_session:
 FUNC_3(VAR_9);
 return ((void*)0);
}
