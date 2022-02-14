
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_object {int dummy; } ;
struct nouveau_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_handle*) ;
 int FUNC_1 (struct nouveau_handle*,int) ;
 struct nouveau_object* FUNC_2 (struct nouveau_object*,int ) ;
 struct nouveau_handle* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct nouveau_handle*) ;
 int FUNC_5 (int *,struct nouveau_object**) ;
 int FUNC_6 (struct nouveau_object*) ;
 struct nouveau_object* FUNC_7 (struct nouveau_object*,int ) ;

int
FUNC_8(struct nouveau_object *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct nouveau_object *VAR_6 = ((void*)0);
 struct nouveau_object *VAR_7 = ((void*)0);
 struct nouveau_handle *VAR_8 = ((void*)0);

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_7(VAR_6, VAR_2);
 if (VAR_7) {
  VAR_8 = FUNC_3(FUNC_6(VAR_7), VAR_5);
  if (VAR_8) {
   FUNC_4(VAR_8);
   FUNC_1(VAR_8, 0);
   FUNC_0(VAR_8);
  }
 }

 FUNC_5(((void*)0), &VAR_6);
 return VAR_8 ? 0 : -VAR_0;
}
