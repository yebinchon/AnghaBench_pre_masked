
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func_tuple {struct sdio_func_tuple* next; } ;
struct mmc_card {struct sdio_func_tuple* tuples; } ;


 int FUNC_0 (struct sdio_func_tuple*) ;

void FUNC_1(struct mmc_card *VAR_0)
{
 struct sdio_func_tuple *VAR_1, *VAR_2;

 VAR_1 = VAR_0->tuples;

 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 VAR_0->tuples = ((void*)0);
}
