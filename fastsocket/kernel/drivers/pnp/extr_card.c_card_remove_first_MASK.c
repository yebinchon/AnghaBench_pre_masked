
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {int card_link; int card; int driver; } ;
struct TYPE_2__ {int (* remove ) (struct pnp_dev*) ;} ;
struct pnp_card_driver {TYPE_1__ link; int (* remove ) (int ) ;} ;


 int FUNC_0 (struct pnp_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct pnp_card_driver* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pnp_dev *VAR_0)
{
 struct pnp_card_driver *VAR_1 = FUNC_3(VAR_0->driver);

 if (!VAR_0->card || !VAR_1)
  return;
 if (VAR_1->remove)
  VAR_1->remove(VAR_0->card_link);
 VAR_1->link.remove = &FUNC_0;
 FUNC_1(VAR_0->card_link);
 FUNC_0(VAR_0);
}
