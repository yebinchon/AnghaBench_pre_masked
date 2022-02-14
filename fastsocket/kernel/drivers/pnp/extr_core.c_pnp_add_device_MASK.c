
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_id {int id; struct pnp_id* next; } ;
struct pnp_dev {scalar_t__ active; TYPE_1__* protocol; int dev; struct pnp_id* id; scalar_t__ card; } ;
typedef int buf ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pnp_dev*) ;
 int FUNC_1 (int ,int *,char*,int ,char*,char*) ;
 scalar_t__ FUNC_2 (char*,int,char*,int ) ;

int FUNC_3(struct pnp_dev *VAR_2)
{
 int VAR_3;
 char VAR_4[128];
 int VAR_5 = 0;
 struct pnp_id *VAR_6;

 if (VAR_2->card)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_4[0] = '\0';
 for (VAR_6 = VAR_2->id; VAR_6; VAR_6 = VAR_6->next)
  VAR_5 += FUNC_2(VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5, " %s", VAR_6->id);

 FUNC_1(VAR_1, &VAR_2->dev, "%s device, IDs%s (%s)\n",
     VAR_2->protocol->name, VAR_4,
     VAR_2->active ? "active" : "disabled");
 return 0;
}
