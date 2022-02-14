
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int dummy; } ;
struct nouveau_devobj {int created; struct nouveau_object** subdev; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_object*,int) ;
 int FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nouveau_object*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_2)
{
 struct nouveau_devobj *VAR_3 = (void *)VAR_2;
 struct nouveau_object *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(&VAR_3->base);
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_3->created && VAR_6 < VAR_0; VAR_6++) {
  if ((VAR_4 = VAR_3->subdev[VAR_6])) {
   if (!FUNC_3(VAR_4, VAR_1)) {
    VAR_5 = FUNC_1(VAR_4);
    if (VAR_5)
     goto fail;
   }
  }
 }

 VAR_3->created = 1;
 return 0;

fail:
 for (--VAR_6; VAR_6 >= 0; VAR_6--) {
  if ((VAR_4 = VAR_3->subdev[VAR_6])) {
   if (!FUNC_3(VAR_4, VAR_1))
    FUNC_0(VAR_4, 0);
  }
 }

 return VAR_5;
}
