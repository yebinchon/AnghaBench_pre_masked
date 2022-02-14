
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_object {int dummy; } ;
struct TYPE_2__ {int (* fini ) (struct nouveau_object*,int) ;} ;


 int FUNC_0 (struct nouveau_object*,char*) ;
 TYPE_1__* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (struct nouveau_object*,char*) ;
 int FUNC_3 (struct nouveau_object*,int) ;

void
FUNC_4(struct nouveau_object *VAR_0)
{
 FUNC_2(VAR_0, "resetting...\n");
 FUNC_1(VAR_0)->fini(VAR_0, 0);
 FUNC_0(VAR_0, "reset\n");
}
