
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int usecount; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nouveau_object*) ;
 int FUNC_4 (struct nouveau_object*) ;
 int FUNC_5 (struct nouveau_object*,char*,int ) ;

int
FUNC_6(struct nouveau_object *VAR_0, bool VAR_1)
{
 int VAR_2 = FUNC_0(-1, &VAR_0->usecount);
 int VAR_3;

 FUNC_5(VAR_0, "use(-1) == %d\n", FUNC_2(&VAR_0->usecount));

 if (VAR_2 == 0) {
  if (VAR_1)
   VAR_3 = FUNC_4(VAR_0);
  else
   VAR_3 = FUNC_3(VAR_0);

  if (VAR_3) {
   FUNC_1(&VAR_0->usecount);
   return VAR_3;
  }
 }

 return 0;
}
