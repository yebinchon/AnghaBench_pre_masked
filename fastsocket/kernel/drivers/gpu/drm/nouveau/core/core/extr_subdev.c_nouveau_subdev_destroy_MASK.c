
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_subdev {int base; } ;
struct TYPE_2__ {int ** subdev; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct nouveau_subdev*) ;
 int FUNC_2 (struct nouveau_subdev*) ;

void
FUNC_3(struct nouveau_subdev *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0) & 0xff;
 FUNC_1(VAR_0)->subdev[VAR_1] = ((void*)0);
 FUNC_0(&VAR_0->base);
}
