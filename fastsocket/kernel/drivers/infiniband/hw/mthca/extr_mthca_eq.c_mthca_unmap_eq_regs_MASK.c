
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ecr_base; } ;
struct TYPE_4__ {int eq_arm; int eq_set_ci_base; } ;
struct TYPE_6__ {TYPE_2__ tavor; TYPE_1__ arbel; } ;
struct mthca_dev {int clr_base; TYPE_3__ eq_regs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mthca_dev*) ;

__attribute__((used)) static void FUNC_2(struct mthca_dev *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  FUNC_0(VAR_0->eq_regs.arbel.eq_set_ci_base);
  FUNC_0(VAR_0->eq_regs.arbel.eq_arm);
  FUNC_0(VAR_0->clr_base);
 } else {
  FUNC_0(VAR_0->eq_regs.tavor.ecr_base);
  FUNC_0(VAR_0->clr_base);
 }
}
