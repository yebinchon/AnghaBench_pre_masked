
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnp_dev {struct pnp_card_link* card_link; } ;
struct TYPE_4__ {scalar_t__ event; } ;
struct pnp_card_link {TYPE_1__* driver; TYPE_2__ pm_state; } ;
struct TYPE_3__ {int (* resume ) (struct pnp_card_link*) ;} ;


 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pnp_card_link*) ;

__attribute__((used)) static int FUNC_1(struct pnp_dev *VAR_2)
{
 struct pnp_card_link *VAR_3 = VAR_2->card_link;

 if (VAR_3->pm_state.event == VAR_1)
  return 0;
 VAR_3->pm_state = VAR_0;
 VAR_3->driver->resume(VAR_3);
 return 0;
}
