
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int command_id; } ;
struct TYPE_8__ {TYPE_1__ basic_io; } ;
struct TYPE_9__ {int scb_busaddr; TYPE_2__ cmd; int lun; int target_id; int bus; int * cdb; scalar_t__ scsi_cmd; } ;
typedef TYPE_3__ ips_scb_t ;
struct TYPE_10__ {scalar_t__ io_addr; int host_num; } ;
typedef TYPE_4__ ips_ha_t ;


 int FUNC_0 (int,char*,int ,int ,int ,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(ips_ha_t * VAR_3, ips_scb_t * VAR_4)
{

 FUNC_1("ips_issue_i2o", 1);

 if (VAR_4->scsi_cmd) {
  FUNC_0(2, "(%s%d) ips_issue: cmd 0x%X id %d (%d %d %d)",
     VAR_2,
     VAR_3->host_num,
     VAR_4->cdb[0],
     VAR_4->cmd.basic_io.command_id,
     VAR_4->bus, VAR_4->target_id, VAR_4->lun);
 } else {
  FUNC_0(2, "(%s%d) ips_issue: logical cmd id %d",
     VAR_2, VAR_3->host_num, VAR_4->cmd.basic_io.command_id);
 }

 FUNC_2(VAR_4->scb_busaddr, VAR_3->io_addr + VAR_0);

 return (VAR_1);
}
