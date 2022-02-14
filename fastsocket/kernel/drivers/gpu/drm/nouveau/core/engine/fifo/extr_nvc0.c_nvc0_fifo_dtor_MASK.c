
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mem; int bar; } ;
struct nvc0_fifo_priv {int base; int * playlist; TYPE_1__ user; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nvc0_fifo_priv *VAR_1 = (void *)VAR_0;

 FUNC_2(&VAR_1->user.bar);
 FUNC_1(((void*)0), &VAR_1->user.mem);
 FUNC_1(((void*)0), &VAR_1->playlist[1]);
 FUNC_1(((void*)0), &VAR_1->playlist[0]);

 FUNC_0(&VAR_1->base);
}
