
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_handle {int dummy; } ;
struct TYPE_2__ {struct nouveau_oclass* cclass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_object*,int ,int ,struct nouveau_object*,struct nouveau_handle**) ;
 int FUNC_1 (struct nouveau_handle*) ;
 int FUNC_2 (struct nouveau_handle*) ;
 struct nouveau_object* FUNC_3 (struct nouveau_object*,int ) ;
 int FUNC_4 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,void*,int ,struct nouveau_object**) ;
 int FUNC_5 (struct nouveau_object*,int) ;
 int FUNC_6 (struct nouveau_object*) ;
 int FUNC_7 (struct nouveau_object*,struct nouveau_object**) ;
 int FUNC_8 (struct nouveau_object*,int ,struct nouveau_object**,struct nouveau_oclass**) ;
 int FUNC_9 (struct nouveau_object*,char*,int ) ;
 TYPE_1__* FUNC_10 (struct nouveau_object*) ;
 int FUNC_11 (struct nouveau_object*,char*,...) ;
 int FUNC_12 (struct nouveau_object*,int ) ;

int
FUNC_13(struct nouveau_object *VAR_3, u32 VAR_4, u32 VAR_5,
     u16 VAR_6, void *VAR_7, u32 VAR_8,
     struct nouveau_object **VAR_9)
{
 struct nouveau_object *VAR_10 = ((void*)0);
 struct nouveau_object *VAR_11 = ((void*)0);
 struct nouveau_object *VAR_12 = ((void*)0);
 struct nouveau_object *VAR_13;
 struct nouveau_oclass *VAR_14;
 struct nouveau_handle *VAR_15;
 int VAR_16;


 VAR_10 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_10) {
  FUNC_11(VAR_3, "parent 0x%08x not found\n", VAR_4);
  return -VAR_1;
 }

 if (!FUNC_12(VAR_10, VAR_2)) {
  FUNC_11(VAR_10, "cannot have children\n");
  VAR_16 = -VAR_0;
  goto fail_class;
 }


 VAR_16 = FUNC_8(VAR_10, VAR_6, &VAR_13, &VAR_14);
 if (VAR_16) {
  FUNC_9(VAR_10, "illegal class 0x%04x\n", VAR_6);
  goto fail_class;
 }





 if (VAR_13) {
  VAR_16 = FUNC_6(VAR_13);
  if (VAR_16)
   goto fail_class;
 }




 if (VAR_13 && FUNC_10(VAR_13)->cclass) {
  VAR_16 = FUNC_4(VAR_10, VAR_13,
       FUNC_10(VAR_13)->cclass,
       VAR_7, VAR_8, &VAR_11);
  if (VAR_16)
   goto fail_engctx;
 } else {
  FUNC_7(VAR_10, &VAR_11);
 }


 VAR_16 = FUNC_4(VAR_11, VAR_13, VAR_14, VAR_7, VAR_8, &VAR_12);
 *VAR_9 = VAR_12;
 if (VAR_16)
  goto fail_ctor;

 VAR_16 = FUNC_6(VAR_12);
 if (VAR_16)
  goto fail_init;

 VAR_16 = FUNC_0(VAR_10, VAR_4, VAR_5, VAR_12, &VAR_15);
 if (VAR_16)
  goto fail_handle;

 VAR_16 = FUNC_2(VAR_15);
 if (VAR_16)
  FUNC_1(VAR_15);

fail_handle:
 FUNC_5(VAR_12, 0);
fail_init:
 FUNC_7(((void*)0), &VAR_12);
fail_ctor:
 FUNC_7(((void*)0), &VAR_11);
fail_engctx:
 if (VAR_13)
  FUNC_5(VAR_13, 0);
fail_class:
 FUNC_7(((void*)0), &VAR_10);
 return VAR_16;
}
