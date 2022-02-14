
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mbx_cq; int * els_cq; int * dat_rq; int * hdr_rq; int * els_wq; int * mbx_wq; int ** fcp_cq_map; int ** fcp_wq; int ** fcp_cq; int ** hba_eq; } ;
struct lpfc_hba {int cfg_fcp_io_channel; TYPE_1__ sli4_hba; int * pci_bar4_memmap_p; int * pci_bar2_memmap_p; int * pci_bar0_memmap_p; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct lpfc_hba *VAR_0)
{
 int VAR_1;

 if (VAR_0->sli4_hba.hba_eq != ((void*)0)) {

  for (VAR_1 = 0; VAR_1 < VAR_0->cfg_fcp_io_channel; VAR_1++) {
   if (VAR_0->sli4_hba.hba_eq[VAR_1] != ((void*)0)) {
    FUNC_2(
     VAR_0->sli4_hba.hba_eq[VAR_1]);
    VAR_0->sli4_hba.hba_eq[VAR_1] = ((void*)0);
   }
  }
  FUNC_1(VAR_0->sli4_hba.hba_eq);
  VAR_0->sli4_hba.hba_eq = ((void*)0);
 }

 if (VAR_0->sli4_hba.fcp_cq != ((void*)0)) {

  for (VAR_1 = 0; VAR_1 < VAR_0->cfg_fcp_io_channel; VAR_1++) {
   if (VAR_0->sli4_hba.fcp_cq[VAR_1] != ((void*)0)) {
    FUNC_2(
     VAR_0->sli4_hba.fcp_cq[VAR_1]);
    VAR_0->sli4_hba.fcp_cq[VAR_1] = ((void*)0);
   }
  }
  FUNC_1(VAR_0->sli4_hba.fcp_cq);
  VAR_0->sli4_hba.fcp_cq = ((void*)0);
 }

 if (VAR_0->sli4_hba.fcp_wq != ((void*)0)) {

  for (VAR_1 = 0; VAR_1 < VAR_0->cfg_fcp_io_channel; VAR_1++) {
   if (VAR_0->sli4_hba.fcp_wq[VAR_1] != ((void*)0)) {
    FUNC_2(
     VAR_0->sli4_hba.fcp_wq[VAR_1]);
    VAR_0->sli4_hba.fcp_wq[VAR_1] = ((void*)0);
   }
  }
  FUNC_1(VAR_0->sli4_hba.fcp_wq);
  VAR_0->sli4_hba.fcp_wq = ((void*)0);
 }

 if (VAR_0->pci_bar0_memmap_p) {
  FUNC_0(VAR_0->pci_bar0_memmap_p);
  VAR_0->pci_bar0_memmap_p = ((void*)0);
 }
 if (VAR_0->pci_bar2_memmap_p) {
  FUNC_0(VAR_0->pci_bar2_memmap_p);
  VAR_0->pci_bar2_memmap_p = ((void*)0);
 }
 if (VAR_0->pci_bar4_memmap_p) {
  FUNC_0(VAR_0->pci_bar4_memmap_p);
  VAR_0->pci_bar4_memmap_p = ((void*)0);
 }


 if (VAR_0->sli4_hba.fcp_cq_map != ((void*)0)) {
  FUNC_1(VAR_0->sli4_hba.fcp_cq_map);
  VAR_0->sli4_hba.fcp_cq_map = ((void*)0);
 }


 if (VAR_0->sli4_hba.mbx_wq != ((void*)0)) {
  FUNC_2(VAR_0->sli4_hba.mbx_wq);
  VAR_0->sli4_hba.mbx_wq = ((void*)0);
 }


 if (VAR_0->sli4_hba.els_wq != ((void*)0)) {
  FUNC_2(VAR_0->sli4_hba.els_wq);
  VAR_0->sli4_hba.els_wq = ((void*)0);
 }


 if (VAR_0->sli4_hba.hdr_rq != ((void*)0)) {
  FUNC_2(VAR_0->sli4_hba.hdr_rq);
  VAR_0->sli4_hba.hdr_rq = ((void*)0);
 }
 if (VAR_0->sli4_hba.dat_rq != ((void*)0)) {
  FUNC_2(VAR_0->sli4_hba.dat_rq);
  VAR_0->sli4_hba.dat_rq = ((void*)0);
 }


 if (VAR_0->sli4_hba.els_cq != ((void*)0)) {
  FUNC_2(VAR_0->sli4_hba.els_cq);
  VAR_0->sli4_hba.els_cq = ((void*)0);
 }


 if (VAR_0->sli4_hba.mbx_cq != ((void*)0)) {
  FUNC_2(VAR_0->sli4_hba.mbx_cq);
  VAR_0->sli4_hba.mbx_cq = ((void*)0);
 }

 return;
}
