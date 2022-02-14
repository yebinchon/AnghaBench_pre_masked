
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct mthca_dev* eq; scalar_t__ have_irq; } ;
struct mthca_dev {scalar_t__ have_irq; TYPE_1__ eq_table; int msi_x_vector; TYPE_2__* pdev; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mthca_dev*) ;

__attribute__((used)) static void FUNC_1(struct mthca_dev *VAR_1)
{
 int VAR_2;

 if (VAR_1->eq_table.have_irq)
  FUNC_0(VAR_1->pdev->irq, VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  if (VAR_1->eq_table.eq[VAR_2].have_irq) {
   FUNC_0(VAR_1->eq_table.eq[VAR_2].msi_x_vector,
     VAR_1->eq_table.eq + VAR_2);
   VAR_1->eq_table.eq[VAR_2].have_irq = 0;
  }
}
