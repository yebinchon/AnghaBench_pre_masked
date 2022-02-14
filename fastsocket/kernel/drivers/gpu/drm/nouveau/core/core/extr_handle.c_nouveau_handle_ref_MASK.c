
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_object {struct nouveau_object* parent; } ;
struct nouveau_handle {int object; } ;


 int VAR_0 ;
 struct nouveau_handle* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nouveau_handle*) ;
 int FUNC_2 (int ,struct nouveau_object**) ;
 int FUNC_3 (struct nouveau_object*,int ) ;
 int FUNC_4 (struct nouveau_object*) ;

struct nouveau_object *
FUNC_5(struct nouveau_object *VAR_1, u32 VAR_2)
{
 struct nouveau_object *VAR_3 = ((void*)0);
 struct nouveau_handle *VAR_4;

 while (!FUNC_3(VAR_1, VAR_0))
  VAR_1 = VAR_1->parent;

 VAR_4 = FUNC_0(FUNC_4(VAR_1), VAR_2);
 if (VAR_4) {
  FUNC_2(VAR_4->object, &VAR_3);
  FUNC_1(VAR_4);
 }

 return VAR_3;
}
