
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dev; struct serio* parent; struct serio* child; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct serio*) ;

__attribute__((used)) static void FUNC_2(struct serio *VAR_0)
{
 struct serio *VAR_1, *VAR_2;

 if (VAR_0->child) {





  for (VAR_1 = VAR_0; VAR_1->child; VAR_1 = VAR_1->child)
              ;

  do {
   VAR_2 = VAR_1->parent;

   FUNC_0(&VAR_1->dev);
   FUNC_1(VAR_1);
  } while ((VAR_1 = VAR_2) != VAR_0);
 }




 FUNC_0(&VAR_0->dev);
}
