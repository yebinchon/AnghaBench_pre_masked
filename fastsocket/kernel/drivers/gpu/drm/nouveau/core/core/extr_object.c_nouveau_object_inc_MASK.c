
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_object {int usecount; struct nouveau_object* parent; struct nouveau_object* engine; } ;
struct TYPE_4__ {int (* init ) (struct nouveau_object*) ;} ;
struct TYPE_3__ {int mutex; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nouveau_object*,int) ;
 int FUNC_6 (struct nouveau_object*,char*) ;
 int FUNC_7 (struct nouveau_object*,char*,int) ;
 TYPE_2__* FUNC_8 (struct nouveau_object*) ;
 TYPE_1__* FUNC_9 (struct nouveau_object*) ;
 int FUNC_10 (struct nouveau_object*,char*,...) ;
 int FUNC_11 (struct nouveau_object*) ;

int
FUNC_12(struct nouveau_object *VAR_0)
{
 int VAR_1 = FUNC_0(1, &VAR_0->usecount);
 int VAR_2;

 FUNC_10(VAR_0, "use(+1) == %d\n", FUNC_2(&VAR_0->usecount));
 if (VAR_1 != 1)
  return 0;

 FUNC_10(VAR_0, "initialising...\n");
 if (VAR_0->parent) {
  VAR_2 = FUNC_12(VAR_0->parent);
  if (VAR_2) {
   FUNC_7(VAR_0, "parent failed, %d\n", VAR_2);
   goto fail_parent;
  }
 }

 if (VAR_0->engine) {
  FUNC_3(&FUNC_9(VAR_0->engine)->mutex);
  VAR_2 = FUNC_12(VAR_0->engine);
  FUNC_4(&FUNC_9(VAR_0->engine)->mutex);
  if (VAR_2) {
   FUNC_7(VAR_0, "engine failed, %d\n", VAR_2);
   goto fail_engine;
  }
 }

 VAR_2 = FUNC_8(VAR_0)->init(VAR_0);
 if (VAR_2) {
  FUNC_7(VAR_0, "init failed, %d\n", VAR_2);
  goto fail_self;
 }

 FUNC_6(VAR_0, "initialised\n");
 return 0;

fail_self:
 if (VAR_0->engine) {
  FUNC_3(&FUNC_9(VAR_0->engine)->mutex);
  FUNC_5(VAR_0->engine, 0);
  FUNC_4(&FUNC_9(VAR_0->engine)->mutex);
 }
fail_engine:
 if (VAR_0->parent)
   FUNC_5(VAR_0->parent, 0);
fail_parent:
 FUNC_1(&VAR_0->usecount);
 return VAR_2;
}
