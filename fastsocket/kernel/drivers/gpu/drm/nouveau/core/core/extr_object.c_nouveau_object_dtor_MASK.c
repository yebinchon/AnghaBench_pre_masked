
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_object {int dummy; } ;
struct TYPE_2__ {int (* dtor ) (struct nouveau_object*) ;} ;


 int FUNC_0 (struct nouveau_object*,char*) ;
 TYPE_1__* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (struct nouveau_object*) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_object *VAR_0)
{
 FUNC_0(VAR_0, "destroying\n");
 FUNC_1(VAR_0)->dtor(VAR_0);
}
