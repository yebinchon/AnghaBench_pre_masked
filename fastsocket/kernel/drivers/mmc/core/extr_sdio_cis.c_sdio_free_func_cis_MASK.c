
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func_tuple {struct sdio_func_tuple* next; } ;
struct sdio_func {TYPE_1__* card; struct sdio_func_tuple* tuples; } ;
struct TYPE_2__ {int dev; struct sdio_func_tuple* tuples; } ;


 int FUNC_0 (struct sdio_func_tuple*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sdio_func *VAR_0)
{
 struct sdio_func_tuple *VAR_1, *VAR_2;

 VAR_1 = VAR_0->tuples;

 while (VAR_1 && VAR_1 != VAR_0->card->tuples) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 VAR_0->tuples = ((void*)0);





 FUNC_1(&VAR_0->card->dev);
}
