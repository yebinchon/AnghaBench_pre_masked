
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_object {scalar_t__ parent; scalar_t__ engine; } ;
struct TYPE_4__ {int (* fini ) (struct nouveau_object*,int) ;} ;
struct TYPE_3__ {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct nouveau_object*,char*) ;
 TYPE_2__* FUNC_4 (struct nouveau_object*) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct nouveau_object*,char*) ;
 int FUNC_7 (struct nouveau_object*,char*,int) ;
 int FUNC_8 (struct nouveau_object*,int) ;

__attribute__((used)) static int
FUNC_9(struct nouveau_object *VAR_0)
{
 int VAR_1;

 FUNC_6(VAR_0, "stopping...\n");

 VAR_1 = FUNC_4(VAR_0)->fini(VAR_0, 0);
 if (VAR_1)
  FUNC_7(VAR_0, "failed fini, %d\n", VAR_1);

 if (VAR_0->engine) {
  FUNC_0(&FUNC_5(VAR_0->engine)->mutex);
  FUNC_2(VAR_0->engine, 0);
  FUNC_1(&FUNC_5(VAR_0->engine)->mutex);
 }

 if (VAR_0->parent)
  FUNC_2(VAR_0->parent, 0);

 FUNC_3(VAR_0, "stopped\n");
 return 0;
}
