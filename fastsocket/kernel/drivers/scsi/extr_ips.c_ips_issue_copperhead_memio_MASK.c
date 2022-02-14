
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int command_id; } ;
struct TYPE_8__ {TYPE_1__ basic_io; } ;
struct TYPE_9__ {int scb_busaddr; TYPE_2__ cmd; int lun; int target_id; int bus; int * cdb; scalar_t__ scsi_cmd; } ;
typedef TYPE_3__ ips_scb_t ;
struct TYPE_10__ {scalar_t__ mem_ptr; int pcidev; int host_num; } ;
typedef TYPE_4__ ips_ha_t ;


 int FUNC_0 (int,char*,int ,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,int) ;
 int VAR_9 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(ips_ha_t * VAR_10, ips_scb_t * VAR_11)
{
 uint32_t VAR_12;
 uint32_t VAR_13;

 FUNC_2("ips_issue_copperhead_memio", 1);

 if (VAR_11->scsi_cmd) {
  FUNC_0(2, "(%s%d) ips_issue: cmd 0x%X id %d (%d %d %d)",
     VAR_9,
     VAR_10->host_num,
     VAR_11->cdb[0],
     VAR_11->cmd.basic_io.command_id,
     VAR_11->bus, VAR_11->target_id, VAR_11->lun);
 } else {
  FUNC_0(2, "(%s%d) ips_issue: logical cmd id %d",
     VAR_9, VAR_10->host_num, VAR_11->cmd.basic_io.command_id);
 }

 VAR_12 = 0;

 while ((VAR_13 = FUNC_3(VAR_10->mem_ptr + VAR_4)) & VAR_0) {
  FUNC_4(1000);

  if (++VAR_12 >= VAR_6) {
   if (!(VAR_13 & VAR_2))
    break;

   FUNC_1(VAR_8, VAR_10->pcidev,
       "ips_issue val [0x%x].\n", VAR_13);
   FUNC_1(VAR_8, VAR_10->pcidev,
       "ips_issue semaphore chk timeout.\n");

   return (VAR_3);
  }
 }

 FUNC_5(VAR_11->scb_busaddr, VAR_10->mem_ptr + VAR_5);
 FUNC_5(VAR_1, VAR_10->mem_ptr + VAR_4);

 return (VAR_7);
}
