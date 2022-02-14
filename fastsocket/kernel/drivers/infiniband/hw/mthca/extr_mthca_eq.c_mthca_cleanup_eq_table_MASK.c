
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc; TYPE_2__* eq; } ;
struct mthca_dev {TYPE_1__ eq_table; } ;
struct TYPE_4__ {int eqn; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mthca_dev*) ;
 int FUNC_1 (struct mthca_dev*,int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mthca_dev*,TYPE_2__*) ;
 int FUNC_4 (struct mthca_dev*) ;
 int FUNC_5 (struct mthca_dev*) ;

void FUNC_6(struct mthca_dev *VAR_4)
{
 int VAR_5;

 FUNC_4(VAR_4);

 FUNC_1(VAR_4, FUNC_0(VAR_4),
       1, VAR_4->eq_table.eq[VAR_1].eqn);
 FUNC_1(VAR_4, VAR_0,
       1, VAR_4->eq_table.eq[VAR_2].eqn);

 for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
  FUNC_3(VAR_4, &VAR_4->eq_table.eq[VAR_5]);

 FUNC_5(VAR_4);

 FUNC_2(&VAR_4->eq_table.alloc);
}
