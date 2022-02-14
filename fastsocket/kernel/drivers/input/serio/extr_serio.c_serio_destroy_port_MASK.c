
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct serio {int registered; TYPE_3__ dev; int node; TYPE_1__* parent; int (* stop ) (struct serio*) ;} ;
struct TYPE_5__ {int * child; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct serio* FUNC_4 (struct serio*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct serio*) ;
 int FUNC_7 (struct serio*) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static void FUNC_9(struct serio *VAR_1)
{
 struct serio *VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2) {
  FUNC_6(VAR_2);
  FUNC_2(&VAR_2->dev);
 }

 if (VAR_1->stop)
  VAR_1->stop(VAR_1);

 if (VAR_1->parent) {
  FUNC_5(VAR_1->parent);
  VAR_1->parent->child = ((void*)0);
  FUNC_3(VAR_1->parent);
  VAR_1->parent = ((void*)0);
 }

 if (VAR_1->registered) {
  FUNC_8(&VAR_1->dev.kobj, &VAR_0);
  FUNC_0(&VAR_1->dev);
  VAR_1->registered = 0;
 }

 FUNC_1(&VAR_1->node);
 FUNC_6(VAR_1);
 FUNC_2(&VAR_1->dev);
}
