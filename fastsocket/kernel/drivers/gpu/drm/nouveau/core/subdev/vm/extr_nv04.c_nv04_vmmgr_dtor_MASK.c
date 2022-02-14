
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv04_vmmgr_priv {int base; int null; scalar_t__ nullp; TYPE_3__* vm; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_6__ {TYPE_1__* pgt; } ;
struct TYPE_5__ {int pdev; } ;
struct TYPE_4__ {int * obj; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_3__**,int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct nv04_vmmgr_priv*) ;
 int FUNC_4 (int ,int,scalar_t__,int ) ;

void
FUNC_5(struct nouveau_object *VAR_0)
{
 struct nv04_vmmgr_priv *VAR_1 = (void *)VAR_0;
 if (VAR_1->vm) {
  FUNC_0(((void*)0), &VAR_1->vm->pgt[0].obj[0]);
  FUNC_1(((void*)0), &VAR_1->vm, ((void*)0));
 }
 if (VAR_1->nullp) {
  FUNC_4(FUNC_3(VAR_1)->pdev, 16 * 1024,
        VAR_1->nullp, VAR_1->null);
 }
 FUNC_2(&VAR_1->base);
}
