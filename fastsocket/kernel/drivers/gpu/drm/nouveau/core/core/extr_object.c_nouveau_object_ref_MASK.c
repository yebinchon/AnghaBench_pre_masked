
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nouveau_object*) ;
 int FUNC_4 (struct nouveau_object*,char*,int ) ;

void
FUNC_5(struct nouveau_object *VAR_0, struct nouveau_object **VAR_1)
{
 if (VAR_0) {
  FUNC_1(&VAR_0->refcount);
  FUNC_4(VAR_0, "inc() == %d\n", FUNC_2(&VAR_0->refcount));
 }

 if (*VAR_1) {
  int VAR_2 = FUNC_0(&(*VAR_1)->refcount);
  FUNC_4(*VAR_1, "dec() == %d\n", FUNC_2(&(*VAR_1)->refcount));
  if (VAR_2)
   FUNC_3(*VAR_1);
 }

 *VAR_1 = VAR_0;
}
