
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct pnp_dev {int card_list; struct pnp_card* card; int number; TYPE_1__* protocol; TYPE_2__ dev; int * card_link; } ;
struct pnp_card {int devices; int number; int dev; } ;
struct TYPE_3__ {int number; } ;


 int FUNC_0 (TYPE_2__*,char*,int ,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct pnp_card *VAR_1, struct pnp_dev *VAR_2)
{
 VAR_2->dev.parent = &VAR_1->dev;
 VAR_2->card_link = ((void*)0);
 FUNC_0(&VAR_2->dev, "%02x:%02x.%02x",
       VAR_2->protocol->number, VAR_1->number, VAR_2->number);
 FUNC_2(&VAR_0);
 VAR_2->card = VAR_1;
 FUNC_1(&VAR_2->card_list, &VAR_1->devices);
 FUNC_3(&VAR_0);
 return 0;
}
