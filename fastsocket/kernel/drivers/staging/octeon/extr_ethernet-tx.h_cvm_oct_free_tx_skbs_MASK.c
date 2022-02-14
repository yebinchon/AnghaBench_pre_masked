
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_ethernet {TYPE_1__* tx_free_list; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct octeon_ethernet *VAR_0,
     int VAR_1,
     int VAR_2, int VAR_3)
{

 if (VAR_1 > 0) {
  if (VAR_3)
   FUNC_2(&VAR_0->tx_free_list[VAR_2].lock);
  while (VAR_1 > 0) {
   FUNC_1(FUNC_0(&VAR_0->tx_free_list[VAR_2]));
   VAR_1--;
  }
  if (VAR_3)
   FUNC_3(&VAR_0->tx_free_list[VAR_2].lock);
 }
}
