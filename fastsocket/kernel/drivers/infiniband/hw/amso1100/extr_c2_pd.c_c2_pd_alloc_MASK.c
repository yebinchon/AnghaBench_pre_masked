
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct c2_pd {scalar_t__ pd_id; } ;
struct TYPE_2__ {scalar_t__ max; scalar_t__ last; int lock; int table; } ;
struct c2_dev {TYPE_1__ pd_table; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct c2_dev *VAR_1, int VAR_2, struct c2_pd *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0;

 FUNC_3(&VAR_1->pd_table.lock);
 VAR_4 = FUNC_2(VAR_1->pd_table.table, VAR_1->pd_table.max,
     VAR_1->pd_table.last);
 if (VAR_4 >= VAR_1->pd_table.max)
  VAR_4 = FUNC_1(VAR_1->pd_table.table,
       VAR_1->pd_table.max);
 if (VAR_4 < VAR_1->pd_table.max) {
  VAR_3->pd_id = VAR_4;
  FUNC_0(VAR_4, VAR_1->pd_table.table);
  VAR_1->pd_table.last = VAR_4+1;
  if (VAR_1->pd_table.last >= VAR_1->pd_table.max)
   VAR_1->pd_table.last = 0;
 } else
  VAR_5 = -VAR_0;
 FUNC_4(&VAR_1->pd_table.lock);
 return VAR_5;
}
