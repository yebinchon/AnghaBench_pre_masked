
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int dummy; } ;
struct nouveau_client {int base; int root; int device; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_object *VAR_0)
{
 struct nouveau_client *VAR_1 = (void *)VAR_0;
 FUNC_2(((void*)0), &VAR_1->device);
 FUNC_0(VAR_1->root);
 FUNC_1(&VAR_1->base);
}
