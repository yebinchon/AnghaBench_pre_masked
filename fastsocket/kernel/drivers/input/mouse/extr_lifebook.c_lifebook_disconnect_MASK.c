
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct lifebook_data* private; } ;
struct lifebook_data {int dev2; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct lifebook_data*) ;
 int FUNC_2 (struct psmouse*) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_0)
{
 struct lifebook_data *VAR_1 = VAR_0->private;

 FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_1->dev2);
  FUNC_1(VAR_1);
 }
 VAR_0->private = ((void*)0);
}
