
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_fixup {int (* quirk_function ) (struct pnp_dev*) ;scalar_t__* id; } ;
struct pnp_dev {int dev; int id; } ;


 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int *,char*,scalar_t__*,int (*) (struct pnp_dev*)) ;
 struct pnp_fixup* VAR_0 ;
 int FUNC_2 (struct pnp_dev*) ;

void FUNC_3(struct pnp_dev *VAR_1)
{
 struct pnp_fixup *VAR_2;

 for (VAR_2 = VAR_0; *VAR_2->id; VAR_2++) {
  if (!FUNC_0(VAR_1->id, VAR_2->id))
   continue;
  FUNC_1(&VAR_1->dev, "%s: calling %pF\n", VAR_2->id,
   VAR_2->quirk_function);
  VAR_2->quirk_function(VAR_1);
 }
}
