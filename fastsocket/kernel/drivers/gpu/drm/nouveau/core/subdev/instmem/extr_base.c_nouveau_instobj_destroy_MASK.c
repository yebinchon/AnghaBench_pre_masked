
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_subdev {int mutex; } ;
struct TYPE_2__ {int engine; } ;
struct nouveau_instobj {TYPE_1__ base; int head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void FUNC_3 (TYPE_1__*) ;
 struct nouveau_subdev* FUNC_4 (int ) ;

void
FUNC_5(struct nouveau_instobj *VAR_0)
{
 struct nouveau_subdev *VAR_1 = FUNC_4(VAR_0->base.engine);

 FUNC_1(&VAR_1->mutex);
 FUNC_0(&VAR_0->head);
 FUNC_2(&VAR_1->mutex);

 return FUNC_3(&VAR_0->base);
}
