
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2400m {TYPE_1__* rx_roq; scalar_t__ rx_reorder; } ;
struct TYPE_2__ {struct TYPE_2__* log; int queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct i2400m *VAR_1)
{
 if (VAR_1->rx_reorder) {
  unsigned VAR_2;
  for(VAR_2 = 0; VAR_2 < VAR_0 + 1; VAR_2++)
   FUNC_0(&VAR_1->rx_roq[VAR_2].queue);
  FUNC_1(VAR_1->rx_roq[0].log);
  FUNC_1(VAR_1->rx_roq);
 }
}
