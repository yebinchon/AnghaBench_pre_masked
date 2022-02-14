
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int next_to_run; scalar_t__ nr_cmds; int highest_lun; int cmd_pool_bits; TYPE_2__** gendisk; TYPE_1__** drv; } ;
typedef TYPE_3__ ctlr_info_t ;
struct TYPE_6__ {int queue; } ;
struct TYPE_5__ {int heads; int queue; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(ctlr_info_t *VAR_0)
{
 int VAR_1 = VAR_0->next_to_run;
 int VAR_2;






 if ((FUNC_1(VAR_0->cmd_pool_bits, VAR_0->nr_cmds)) == VAR_0->nr_cmds)
  return;





 for (VAR_2 = 0; VAR_2 < VAR_0->highest_lun + 1; VAR_2++) {
  int VAR_3 = (VAR_1 + VAR_2) % (VAR_0->highest_lun + 1);



  if (!VAR_0->drv[VAR_3])
   continue;
  if (!(VAR_0->drv[VAR_3]->queue) ||
   !(VAR_0->drv[VAR_3]->heads))
   continue;
  FUNC_0(VAR_0->gendisk[VAR_3]->queue);




  if ((FUNC_1(VAR_0->cmd_pool_bits, VAR_0->nr_cmds)) == VAR_0->nr_cmds) {
   if (VAR_3 == VAR_1) {
    VAR_0->next_to_run =
        (VAR_1 + 1) % (VAR_0->highest_lun + 1);
    break;
   } else {
    VAR_0->next_to_run = VAR_3;
    break;
   }
  }
 }
}
