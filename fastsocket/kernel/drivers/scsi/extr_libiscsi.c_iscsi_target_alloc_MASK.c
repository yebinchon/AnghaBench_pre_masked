
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int can_queue; } ;
struct iscsi_session {int scsi_cmds_max; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;


 struct iscsi_cls_session* FUNC_0 (struct scsi_target*) ;

int FUNC_1(struct scsi_target *VAR_0)
{
 struct iscsi_cls_session *VAR_1 = FUNC_0(VAR_0);
 struct iscsi_session *VAR_2 = VAR_1->dd_data;

 VAR_0->can_queue = VAR_2->scsi_cmds_max;
 return 0;
}
