
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_block {struct mem_block* next; } ;


 int FUNC_0 (struct mem_block*) ;

void FUNC_1(struct mem_block **VAR_0)
{
 struct mem_block *VAR_1;

 if (!*VAR_0)
  return;

 for (VAR_1 = (*VAR_0)->next; VAR_1 != *VAR_0;) {
  struct mem_block *VAR_2 = VAR_1;
  VAR_1 = VAR_1->next;
  FUNC_0(VAR_2);
 }

 FUNC_0(*VAR_0);
 *VAR_0 = ((void*)0);
}
