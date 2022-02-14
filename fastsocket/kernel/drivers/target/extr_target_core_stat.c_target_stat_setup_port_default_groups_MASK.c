
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_group {int ** default_groups; } ;
struct TYPE_2__ {int scsi_transport_group; int scsi_tgt_port_group; int scsi_port_group; struct config_group stat_group; } ;
struct se_lun {TYPE_1__ port_stat_grps; } ;


 int FUNC_0 (int *,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(struct se_lun *VAR_3)
{
 struct config_group *VAR_4 = &VAR_3->port_stat_grps.stat_group;

 FUNC_0(&VAR_3->port_stat_grps.scsi_port_group,
   "scsi_port", &VAR_0);
 FUNC_0(&VAR_3->port_stat_grps.scsi_tgt_port_group,
   "scsi_tgt_port", &VAR_1);
 FUNC_0(&VAR_3->port_stat_grps.scsi_transport_group,
   "scsi_transport", &VAR_2);

 VAR_4->default_groups[0] = &VAR_3->port_stat_grps.scsi_port_group;
 VAR_4->default_groups[1] = &VAR_3->port_stat_grps.scsi_tgt_port_group;
 VAR_4->default_groups[2] = &VAR_3->port_stat_grps.scsi_transport_group;
 VAR_4->default_groups[3] = ((void*)0);
}
