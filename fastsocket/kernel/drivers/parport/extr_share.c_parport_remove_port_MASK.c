
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {struct parport** slaves; int list; int * ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct parport*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct parport*) ;
 int FUNC_5 (struct parport*) ;
 int FUNC_6 (struct parport*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct parport *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_2);


 FUNC_0 (VAR_3);
 VAR_3->ops = &VAR_0;
 FUNC_7(&VAR_1);
 FUNC_1(&VAR_3->list);
 for (VAR_4 = 1; VAR_4 < 3; VAR_4++) {
  struct parport *VAR_5 = VAR_3->slaves[VAR_4-1];
  if (VAR_5)
   FUNC_1(&VAR_5->list);
 }
 FUNC_8(&VAR_1);

 FUNC_3(&VAR_2);

 FUNC_5(VAR_3);

 for (VAR_4 = 1; VAR_4 < 3; VAR_4++) {
  struct parport *VAR_6 = VAR_3->slaves[VAR_4-1];
  if (VAR_6)
   FUNC_6(VAR_6);
 }
}
