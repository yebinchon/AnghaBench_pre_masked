
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_host {int port_state; } ;
struct beiscsi_hba {scalar_t__ state; } ;
struct Scsi_Host {struct iscsi_cls_host* shost_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct beiscsi_hba* FUNC_0 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_1(struct Scsi_Host *VAR_3)
{
 struct beiscsi_hba *VAR_4 = FUNC_0(VAR_3);
 struct iscsi_cls_host *VAR_5 = VAR_3->shost_data;

 VAR_5->port_state = (VAR_4->state == VAR_0) ?
  VAR_2 : VAR_1;
}
