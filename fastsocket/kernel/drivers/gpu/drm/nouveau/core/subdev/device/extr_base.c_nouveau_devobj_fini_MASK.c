
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_object {int dummy; } ;
struct nouveau_devobj {struct nouveau_object** subdev; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_object*,int) ;
 int FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct nouveau_object*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_2, bool VAR_3)
{
 struct nouveau_devobj *VAR_4 = (void *)VAR_2;
 struct nouveau_object *VAR_5;
 int VAR_6, VAR_7;

 for (VAR_7 = VAR_0 - 1; VAR_7 >= 0; VAR_7--) {
  if ((VAR_5 = VAR_4->subdev[VAR_7])) {
   if (!FUNC_3(VAR_5, VAR_1)) {
    VAR_6 = FUNC_0(VAR_5, VAR_3);
    if (VAR_6 && VAR_3)
     goto fail;
   }
  }
 }

 VAR_6 = FUNC_2(&VAR_4->base, VAR_3);
fail:
 for (; VAR_6 && VAR_3 && VAR_7 < VAR_0; VAR_7++) {
  if ((VAR_5 = VAR_4->subdev[VAR_7])) {
   if (!FUNC_3(VAR_5, VAR_1)) {
    VAR_6 = FUNC_1(VAR_5);
    if (VAR_6) {

    }
   }
  }
 }

 return VAR_6;
}
