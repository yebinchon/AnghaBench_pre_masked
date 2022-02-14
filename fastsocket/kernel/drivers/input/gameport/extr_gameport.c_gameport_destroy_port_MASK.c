
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gameport {int dev; int node; scalar_t__ registered; TYPE_1__* parent; } ;
struct TYPE_2__ {int * child; } ;


 int FUNC_0 (int *) ;
 struct gameport* FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct gameport*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gameport *VAR_0)
{
 struct gameport *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_2(VAR_1);
  FUNC_4(&VAR_1->dev);
 }

 if (VAR_0->parent) {
  VAR_0->parent->child = ((void*)0);
  VAR_0->parent = ((void*)0);
 }

 if (VAR_0->registered) {
  FUNC_0(&VAR_0->dev);
  VAR_0->registered = 0;
 }

 FUNC_3(&VAR_0->node);

 FUNC_2(VAR_0);
 FUNC_4(&VAR_0->dev);
}
