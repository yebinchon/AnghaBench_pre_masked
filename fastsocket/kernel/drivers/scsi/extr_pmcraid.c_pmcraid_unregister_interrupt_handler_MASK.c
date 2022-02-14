
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_instance {int num_hrrq; scalar_t__ interrupt_mode; int pdev; TYPE_1__* hrrq_vector; } ;
struct TYPE_2__ {int vector; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static
void FUNC_2(struct pmcraid_instance *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_hrrq; VAR_1++)
  FUNC_0(VAR_0->hrrq_vector[VAR_1].vector,
    &(VAR_0->hrrq_vector[VAR_1]));

 if (VAR_0->interrupt_mode) {
  FUNC_1(VAR_0->pdev);
  VAR_0->interrupt_mode = 0;
 }
}
