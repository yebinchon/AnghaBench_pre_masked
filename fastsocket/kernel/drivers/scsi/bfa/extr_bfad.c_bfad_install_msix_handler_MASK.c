
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int device_id; } ;
struct bfad_s {int nvec; char* pci_name; int pcidev; int bfad_flags; TYPE_3__* msix_tab; TYPE_1__ hal_pcidev; } ;
typedef int irq_handler_t ;
struct TYPE_6__ {int vector; } ;
struct TYPE_7__ {TYPE_2__ msix; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bfad_s*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,TYPE_3__*) ;
 char** VAR_2 ;
 char** VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ,int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ,char*,char*,char*) ;

int
FUNC_6(struct bfad_s *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->nvec; VAR_5++) {
  FUNC_5(VAR_4->msix_tab[VAR_5].name, "bfa-%s-%s",
    VAR_4->pci_name,
    ((FUNC_0(VAR_4->hal_pcidev.device_id)) ?
    VAR_2[VAR_5] : VAR_3[VAR_5]));

  VAR_6 = FUNC_4(VAR_4->msix_tab[VAR_5].msix.vector,
        (irq_handler_t) VAR_1, 0,
        VAR_4->msix_tab[VAR_5].name, &VAR_4->msix_tab[VAR_5]);
  FUNC_1(VAR_4, VAR_5);
  FUNC_1(VAR_4, VAR_4->msix_tab[VAR_5].msix.vector);
  if (VAR_6) {
   int VAR_7;

   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    FUNC_2(VAR_4->msix_tab[VAR_7].msix.vector,
      &VAR_4->msix_tab[VAR_7]);

   VAR_4->bfad_flags &= ~VAR_0;
   FUNC_3(VAR_4->pcidev);

   return 1;
  }
 }

 return 0;
}
