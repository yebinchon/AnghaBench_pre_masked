
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adapter {TYPE_2__* slic_regs; TYPE_1__* card; } ;
struct TYPE_4__ {int slic_reset; int slic_quiesce; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_3)
{
 if (VAR_3->card->state == VAR_0) {
  FUNC_1(&VAR_3->slic_regs->slic_quiesce, 0, VAR_1);
  FUNC_0(1);
 }

 FUNC_1(&VAR_3->slic_regs->slic_reset, VAR_2,
    VAR_1);
 FUNC_0(1);
}
