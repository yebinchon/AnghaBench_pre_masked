
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct of_device {TYPE_1__ dev; int * node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;

int FUNC_5(struct of_device *VAR_0)
{
 FUNC_0(VAR_0->node == ((void*)0));

 FUNC_2(&VAR_0->dev);




 if (!VAR_0->dev.parent)
  FUNC_4(&VAR_0->dev, FUNC_3(VAR_0->node));

 return FUNC_1(&VAR_0->dev);
}
