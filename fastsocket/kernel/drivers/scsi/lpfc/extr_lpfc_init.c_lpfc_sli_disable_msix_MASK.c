
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_hba {int pcidev; TYPE_1__* msix_entries; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct lpfc_hba*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1->msix_entries[VAR_2].vector, VAR_1);

 FUNC_1(VAR_1->pcidev);

 return;
}
