
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int arm_mask; TYPE_2__* eq; int clr_int; scalar_t__ clr_mask; } ;
struct mthca_dev {TYPE_1__ eq_table; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {int cons_index; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mthca_dev*,int ) ;
 int FUNC_2 (struct mthca_dev*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (struct mthca_dev*,TYPE_2__*) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct mthca_dev *VAR_3 = VAR_2;
 int VAR_4 = 0;
 int VAR_5;

 if (VAR_3->eq_table.clr_mask)
  FUNC_4(VAR_3->eq_table.clr_mask, VAR_3->eq_table.clr_int);

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5)
  if (FUNC_3(VAR_3, &VAR_3->eq_table.eq[VAR_5])) {
   VAR_4 = 1;
   FUNC_2(VAR_3, &VAR_3->eq_table.eq[VAR_5],
     VAR_3->eq_table.eq[VAR_5].cons_index);
  }

 FUNC_1(VAR_3, VAR_3->eq_table.arm_mask);

 return FUNC_0(VAR_4);
}
