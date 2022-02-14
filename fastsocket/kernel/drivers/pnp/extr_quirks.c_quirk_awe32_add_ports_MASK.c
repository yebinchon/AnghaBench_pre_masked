
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct pnp_option {TYPE_2__ u; int list; } ;
struct pnp_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,unsigned long long,unsigned long long,int ) ;
 struct pnp_option* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct pnp_option*) ;

__attribute__((used)) static void FUNC_5(struct pnp_dev *VAR_1,
      struct pnp_option *VAR_2,
      unsigned int VAR_3)
{
 struct pnp_option *VAR_4;

 VAR_4 = FUNC_2(sizeof(struct pnp_option), VAR_0);
 if (!VAR_4) {
  FUNC_0(&VAR_1->dev, "couldn't add ioport region to option set "
   "%d\n", FUNC_4(VAR_2));
  return;
 }

 *VAR_4 = *VAR_2;
 VAR_4->u.port.min += VAR_3;
 VAR_4->u.port.max += VAR_3;
 FUNC_3(&VAR_4->list, &VAR_2->list);

 FUNC_1(&VAR_1->dev, "added ioport region %#llx-%#llx to set %d\n",
  (unsigned long long) VAR_4->u.port.min,
  (unsigned long long) VAR_4->u.port.max,
  FUNC_4(VAR_2));
}
