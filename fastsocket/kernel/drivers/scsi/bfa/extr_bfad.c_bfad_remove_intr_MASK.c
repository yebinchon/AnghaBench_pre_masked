
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vector; } ;
struct bfad_s {int bfad_flags; int nvec; TYPE_2__* pcidev; struct bfad_s* msix_tab; TYPE_1__ msix; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct bfad_s*) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(struct bfad_s *VAR_2)
{
 int VAR_3;

 if (VAR_2->bfad_flags & VAR_1) {
  for (VAR_3 = 0; VAR_3 < VAR_2->nvec; VAR_3++)
   FUNC_0(VAR_2->msix_tab[VAR_3].msix.vector,
     &VAR_2->msix_tab[VAR_3]);

  FUNC_1(VAR_2->pcidev);
  VAR_2->bfad_flags &= ~VAR_1;
 } else if (VAR_2->bfad_flags & VAR_0) {
  FUNC_0(VAR_2->pcidev->irq, VAR_2);
 }
}
