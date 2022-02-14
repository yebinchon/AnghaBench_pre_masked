
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_hba {struct pscsi_hba_virt* hba_ptr; int hba_id; } ;
struct pscsi_hba_virt {struct Scsi_Host* phv_lld_host; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (struct pscsi_hba_virt*) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_3(struct se_hba *VAR_0)
{
 struct pscsi_hba_virt *VAR_1 = VAR_0->hba_ptr;
 struct Scsi_Host *VAR_2 = VAR_1->phv_lld_host;

 if (VAR_2) {
  FUNC_2(VAR_2);

  FUNC_1("CORE_HBA[%d] - Detached SCSI HBA: %s from"
   " Generic Target Core\n", VAR_0->hba_id,
   (VAR_2->hostt->name) ? (VAR_2->hostt->name) :
   "Unknown");
 } else
  FUNC_1("CORE_HBA[%d] - Detached Virtual SCSI HBA"
   " from Generic Target Core\n", VAR_0->hba_id);

 FUNC_0(VAR_1);
 VAR_0->hba_ptr = ((void*)0);
}
