
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ds1wm_data {int pdev; TYPE_1__* cell; scalar_t__ active_high; } ;
struct TYPE_2__ {int (* disable ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ds1wm_data*) ;
 int FUNC_1 (struct ds1wm_data*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ds1wm_data *VAR_2)
{
 FUNC_0(VAR_2);


 FUNC_1(VAR_2, VAR_1,
        VAR_2->active_high ? VAR_0 : 0);

 if (VAR_2->cell->disable)
  VAR_2->cell->disable(VAR_2->pdev);
}
