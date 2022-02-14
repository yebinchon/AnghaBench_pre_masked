
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct alps_data* private; } ;
struct alps_data {int dev2; int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct alps_data*) ;
 int FUNC_3 (struct psmouse*) ;

__attribute__((used)) static void FUNC_4(struct psmouse *VAR_0)
{
 struct alps_data *VAR_1 = VAR_0->private;

 FUNC_3(VAR_0);
 FUNC_0(&VAR_1->timer);
 FUNC_1(VAR_1->dev2);
 FUNC_2(VAR_1);
}
