
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_object {scalar_t__ engine; scalar_t__ parent; } ;
struct TYPE_4__ {int (* fini ) (struct nouveau_object*,int) ;int (* init ) (struct nouveau_object*) ;} ;
struct TYPE_3__ {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct nouveau_object*,char*) ;
 int FUNC_5 (struct nouveau_object*,char*,int) ;
 int FUNC_6 (struct nouveau_object*,char*,int) ;
 TYPE_2__* FUNC_7 (struct nouveau_object*) ;
 TYPE_1__* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct nouveau_object*,char*) ;
 int FUNC_10 (struct nouveau_object*,char*,int) ;
 int FUNC_11 (struct nouveau_object*,int) ;
 int FUNC_12 (struct nouveau_object*) ;

__attribute__((used)) static int
FUNC_13(struct nouveau_object *VAR_0)
{
 int VAR_1, VAR_2;

 FUNC_9(VAR_0, "suspending...\n");

 VAR_1 = FUNC_7(VAR_0)->fini(VAR_0, 1);
 if (VAR_1) {
  FUNC_5(VAR_0, "failed suspend, %d\n", VAR_1);
  return VAR_1;
 }

 if (VAR_0->engine) {
  FUNC_0(&FUNC_8(VAR_0->engine)->mutex);
  VAR_1 = FUNC_2(VAR_0->engine, 1);
  FUNC_1(&FUNC_8(VAR_0->engine)->mutex);
  if (VAR_1) {
   FUNC_10(VAR_0, "engine failed suspend, %d\n", VAR_1);
   goto fail_engine;
  }
 }

 if (VAR_0->parent) {
  VAR_1 = FUNC_2(VAR_0->parent, 1);
  if (VAR_1) {
   FUNC_10(VAR_0, "parent failed suspend, %d\n", VAR_1);
   goto fail_parent;
  }
 }

 FUNC_4(VAR_0, "suspended\n");
 return 0;

fail_parent:
 if (VAR_0->engine) {
  FUNC_0(&FUNC_8(VAR_0->engine)->mutex);
  VAR_2 = FUNC_3(VAR_0->engine);
  FUNC_1(&FUNC_8(VAR_0->engine)->mutex);
  if (VAR_2)
   FUNC_6(VAR_0, "engine failed to reinit, %d\n", VAR_2);
 }

fail_engine:
 VAR_2 = FUNC_7(VAR_0)->init(VAR_0);
 if (VAR_2)
  FUNC_6(VAR_0, "failed to reinit, %d\n", VAR_2);

 return VAR_1;
}
