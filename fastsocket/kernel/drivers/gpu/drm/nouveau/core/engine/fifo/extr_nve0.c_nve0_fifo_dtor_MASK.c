
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mem; int bar; } ;
struct nve0_fifo_priv {int base; TYPE_2__* engine; TYPE_1__ user; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int * playlist; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_object *VAR_0)
{
 struct nve0_fifo_priv *VAR_1 = (void *)VAR_0;
 int VAR_2;

 FUNC_3(&VAR_1->user.bar);
 FUNC_2(((void*)0), &VAR_1->user.mem);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->engine); VAR_2++) {
  FUNC_2(((void*)0), &VAR_1->engine[VAR_2].playlist[1]);
  FUNC_2(((void*)0), &VAR_1->engine[VAR_2].playlist[0]);
 }

 FUNC_1(&VAR_1->base);
}
