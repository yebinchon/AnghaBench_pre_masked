
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_dmaring {TYPE_1__* ops; int tx; } ;
struct TYPE_2__ {int (* get_current_rxslot ) (struct b43_dmaring*) ;int (* set_current_rxslot ) (struct b43_dmaring*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct b43_dmaring*,int) ;
 int FUNC_2 (struct b43_dmaring*) ;
 int FUNC_3 (struct b43_dmaring*,int) ;

void FUNC_4(struct b43_dmaring *VAR_0)
{
 int VAR_1, VAR_2;

 FUNC_0(VAR_0->tx);
 VAR_1 = VAR_0->ops->get_current_rxslot(VAR_0);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 VAR_0->ops->set_current_rxslot(VAR_0, VAR_2);
}
