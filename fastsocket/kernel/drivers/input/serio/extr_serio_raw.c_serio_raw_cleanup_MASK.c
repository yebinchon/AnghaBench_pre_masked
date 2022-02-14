
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio_raw {scalar_t__ refcnt; int node; int dev; } ;


 int FUNC_0 (struct serio_raw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct serio_raw *VAR_0)
{
 if (--VAR_0->refcnt == 0) {
  FUNC_2(&VAR_0->dev);
  FUNC_1(&VAR_0->node);
  FUNC_0(VAR_0);

  return 1;
 }

 return 0;
}
