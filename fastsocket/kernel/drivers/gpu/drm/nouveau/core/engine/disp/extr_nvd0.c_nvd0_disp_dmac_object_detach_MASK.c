
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_disp_base {int ramht; } ;
struct nouveau_object {scalar_t__ parent; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_object *VAR_0, int VAR_1)
{
 struct nv50_disp_base *VAR_2 = (void *)VAR_0->parent;
 FUNC_0(VAR_2->ramht, VAR_1);
}
