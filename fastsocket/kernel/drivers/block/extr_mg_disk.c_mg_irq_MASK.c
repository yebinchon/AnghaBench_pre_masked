
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_host {void (* mg_do_intr ) (struct mg_host*) ;int lock; int timer; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void FUNC_1 (struct mg_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct mg_host *VAR_3 = VAR_2;
 void (*VAR_4)(struct mg_host *) = VAR_3->mg_do_intr;

 FUNC_2(&VAR_3->lock);

 VAR_3->mg_do_intr = ((void*)0);
 FUNC_0(&VAR_3->timer);
 if (!VAR_4)
  VAR_4 = FUNC_1;
 VAR_4(VAR_3);

 FUNC_3(&VAR_3->lock);

 return VAR_0;
}
