
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int chid; } ;
struct TYPE_3__ {int addr; } ;


 TYPE_2__* FUNC_0 (struct nouveau_object*) ;
 TYPE_1__* FUNC_1 (struct nouveau_object*) ;

int
FUNC_2(struct nouveau_object *VAR_0,
    struct nouveau_object *VAR_1)
{
 FUNC_1(VAR_1)->addr = FUNC_0(VAR_0)->chid;
 return 0;
}
