
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c2_pd {int pd_id; } ;
struct TYPE_2__ {int lock; int table; } ;
struct c2_dev {TYPE_1__ pd_table; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct c2_dev *VAR_0, struct c2_pd *VAR_1)
{
 FUNC_1(&VAR_0->pd_table.lock);
 FUNC_0(VAR_1->pd_id, VAR_0->pd_table.table);
 FUNC_2(&VAR_0->pd_table.lock);
}
