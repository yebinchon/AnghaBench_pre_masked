
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_pbm_info {int pci_first_busno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (struct pci_pbm_info*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pci_pbm_info *VAR_2)
{
 u8 *VAR_3;




 VAR_3 = FUNC_1(VAR_2, VAR_2->pci_first_busno,
     0, VAR_0);
 FUNC_0(VAR_3, 64 / sizeof(u32));


 VAR_3 = FUNC_1(VAR_2, VAR_2->pci_first_busno,
     0, VAR_1);
 FUNC_0(VAR_3, 64);
}
