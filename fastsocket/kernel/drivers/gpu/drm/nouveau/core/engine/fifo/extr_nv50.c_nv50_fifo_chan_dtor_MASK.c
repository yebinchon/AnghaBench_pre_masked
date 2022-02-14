
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_fifo_chan {int base; int ramht; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void
FUNC_2(struct nouveau_object *VAR_0)
{
 struct nv50_fifo_chan *VAR_1 = (void *)VAR_0;
 FUNC_1(((void*)0), &VAR_1->ramht);
 FUNC_0(&VAR_1->base);
}
