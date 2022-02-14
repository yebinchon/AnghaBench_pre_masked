
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * driver; } ;
struct TYPE_6__ {struct list_head* next; } ;
struct pnp_dev {struct pnp_card_link* card_link; TYPE_3__ dev; int id; TYPE_1__ card_list; struct pnp_card* card; } ;
struct pnp_card_link {struct pnp_card_driver* driver; struct pnp_card* card; } ;
struct TYPE_7__ {int driver; } ;
struct pnp_card_driver {TYPE_2__ link; } ;
struct list_head {struct list_head* next; } ;
struct pnp_card {struct list_head devices; } ;
struct TYPE_9__ {scalar_t__ (* probe ) (TYPE_3__*) ;} ;


 struct pnp_dev* FUNC_0 (struct list_head*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 TYPE_4__ VAR_0 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;

struct pnp_dev *FUNC_4(struct pnp_card_link *VAR_1,
     const char *VAR_2, struct pnp_dev *VAR_3)
{
 struct list_head *VAR_4;
 struct pnp_dev *VAR_5;
 struct pnp_card_driver *VAR_6;
 struct pnp_card *VAR_7;

 if (!VAR_1 || !VAR_2)
  return ((void*)0);

 VAR_7 = VAR_1->card;
 VAR_6 = VAR_1->driver;
 if (!VAR_3) {
  VAR_4 = VAR_7->devices.next;
 } else {
  if (VAR_3->card != VAR_7)
   return ((void*)0);
  VAR_4 = VAR_3->card_list.next;
 }
 while (VAR_4 != &VAR_7->devices) {
  VAR_5 = FUNC_0(VAR_4);
  if ((!VAR_5->card_link) && FUNC_1(VAR_5->id, VAR_2))
   goto found;
  VAR_4 = VAR_4->next;
 }

 return ((void*)0);

found:
 VAR_5->card_link = VAR_1;
 VAR_5->dev.driver = &VAR_6->link.driver;
 if (VAR_0.probe(&VAR_5->dev))
  goto err_out;
 if (FUNC_2(&VAR_5->dev))
  goto err_out;

 return VAR_5;

err_out:
 VAR_5->dev.driver = ((void*)0);
 VAR_5->card_link = ((void*)0);
 return ((void*)0);
}
