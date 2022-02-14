
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int * pci_va; int * db_va; int * csr_va; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct beiscsi_hba *VAR_0)
{
 if (VAR_0->csr_va) {
  FUNC_0(VAR_0->csr_va);
  VAR_0->csr_va = ((void*)0);
 }
 if (VAR_0->db_va) {
  FUNC_0(VAR_0->db_va);
  VAR_0->db_va = ((void*)0);
 }
 if (VAR_0->pci_va) {
  FUNC_0(VAR_0->pci_va);
  VAR_0->pci_va = ((void*)0);
 }
}
