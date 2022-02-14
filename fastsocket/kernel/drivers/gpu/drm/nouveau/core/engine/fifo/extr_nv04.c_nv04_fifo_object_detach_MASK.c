
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv04_fifo_priv {int ramht; } ;
struct nouveau_object {scalar_t__ engine; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 TYPE_1__* FUNC_3 (struct nv04_fifo_priv*) ;

void
FUNC_4(struct nouveau_object *VAR_0, int VAR_1)
{
 struct nv04_fifo_priv *VAR_2 = (void *)VAR_0->engine;
 FUNC_0(&FUNC_3(VAR_2)->mutex);
 FUNC_2(VAR_2->ramht, VAR_1);
 FUNC_1(&FUNC_3(VAR_2)->mutex);
}
