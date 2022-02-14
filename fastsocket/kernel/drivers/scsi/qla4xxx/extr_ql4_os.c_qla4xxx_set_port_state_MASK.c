
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int flags; } ;
struct iscsi_cls_host {int port_state; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 struct scsi_qla_host* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_2(struct Scsi_Host *VAR_3)
{
 struct scsi_qla_host *VAR_4 = FUNC_1(VAR_3);
 struct iscsi_cls_host *VAR_5 = VAR_3->shost_data;
 uint32_t VAR_6 = VAR_1;

 if (FUNC_0(VAR_0, &VAR_4->flags))
  VAR_6 = VAR_2;

 VAR_5->port_state = VAR_6;
}
