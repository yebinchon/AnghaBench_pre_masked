
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_object {int dummy; } ;
struct TYPE_2__ {scalar_t__ mmio; } ;
struct nouveau_device {TYPE_1__ base; int head; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct nouveau_object *VAR_1)
{
 struct nouveau_device *VAR_2 = (void *)VAR_1;

 FUNC_2(&VAR_0);
 FUNC_1(&VAR_2->head);
 FUNC_3(&VAR_0);

 if (VAR_2->base.mmio)
  FUNC_0(VAR_2->base.mmio);

 FUNC_4(&VAR_2->base);
}
