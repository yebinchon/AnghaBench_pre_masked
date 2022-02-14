
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_group {int ** default_groups; } ;
struct TYPE_2__ {int scsi_att_intr_port_group; int scsi_auth_intr_group; struct config_group stat_group; } ;
struct se_lun_acl {TYPE_1__ ml_stat_grps; } ;


 int FUNC_0 (int *,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct se_lun_acl *VAR_2)
{
 struct config_group *VAR_3 = &VAR_2->ml_stat_grps.stat_group;

 FUNC_0(&VAR_2->ml_stat_grps.scsi_auth_intr_group,
   "scsi_auth_intr", &VAR_1);
 FUNC_0(&VAR_2->ml_stat_grps.scsi_att_intr_port_group,
   "scsi_att_intr_port", &VAR_0);

 VAR_3->default_groups[0] = &VAR_2->ml_stat_grps.scsi_auth_intr_group;
 VAR_3->default_groups[1] = &VAR_2->ml_stat_grps.scsi_att_intr_port_group;
 VAR_3->default_groups[2] = ((void*)0);
}
