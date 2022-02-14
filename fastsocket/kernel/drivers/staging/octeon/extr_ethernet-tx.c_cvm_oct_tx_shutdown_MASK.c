
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_ethernet {TYPE_1__* tx_free_list; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 struct octeon_ethernet* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct net_device *VAR_0)
{
 struct octeon_ethernet *VAR_1 = FUNC_2(VAR_0);
 unsigned long VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  FUNC_4(&VAR_1->tx_free_list[VAR_3].lock, VAR_2);
  while (FUNC_3(&VAR_1->tx_free_list[VAR_3]))
   FUNC_1(FUNC_0
       (&VAR_1->tx_free_list[VAR_3]));
  FUNC_5(&VAR_1->tx_free_list[VAR_3].lock, VAR_2);
 }
}
