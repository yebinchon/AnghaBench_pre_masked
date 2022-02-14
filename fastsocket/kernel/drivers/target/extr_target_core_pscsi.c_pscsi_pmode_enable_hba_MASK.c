
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_hba {int hba_id; struct pscsi_hba_virt* hba_ptr; } ;
struct pscsi_hba_virt {int phv_mode; struct Scsi_Host* phv_lld_host; int phv_host_id; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ FUNC_0 (struct Scsi_Host*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,int ) ;
 struct Scsi_Host* FUNC_4 (int ) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_6(struct se_hba *VAR_2, unsigned long VAR_3)
{
 struct pscsi_hba_virt *VAR_4 = VAR_2->hba_ptr;
 struct Scsi_Host *VAR_5 = VAR_4->phv_lld_host;



 if (!VAR_3) {
  if (!VAR_5)
   return 0;

  VAR_4->phv_lld_host = ((void*)0);
  VAR_4->phv_mode = VAR_1;

  FUNC_2("CORE_HBA[%d] - Disabled pSCSI HBA Passthrough"
   " %s\n", VAR_2->hba_id, (VAR_5->hostt->name) ?
   (VAR_5->hostt->name) : "Unknown");

  FUNC_5(VAR_5);
  return 0;
 }




 VAR_5 = FUNC_4(VAR_4->phv_host_id);
 if (FUNC_0(VAR_5)) {
  FUNC_3("pSCSI: Unable to locate SCSI Host for"
   " phv_host_id: %d\n", VAR_4->phv_host_id);
  return FUNC_1(VAR_5);
 }

 VAR_4->phv_lld_host = VAR_5;
 VAR_4->phv_mode = VAR_0;

 FUNC_2("CORE_HBA[%d] - Enabled pSCSI HBA Passthrough %s\n",
  VAR_2->hba_id, (VAR_5->hostt->name) ? (VAR_5->hostt->name) : "Unknown");

 return 1;
}
