
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_block {struct mem_block* prev; struct mem_block* next; scalar_t__ size; int * file_priv; } ;


 int FUNC_0 (struct mem_block*) ;

__attribute__((used)) static void FUNC_1(struct mem_block *VAR_0)
{
 VAR_0->file_priv = ((void*)0);




 if (VAR_0->next->file_priv == ((void*)0)) {
  struct mem_block *VAR_1 = VAR_0->next;
  VAR_0->size += VAR_1->size;
  VAR_0->next = VAR_1->next;
  VAR_0->next->prev = VAR_0;
  FUNC_0(VAR_1);
 }

 if (VAR_0->prev->file_priv == ((void*)0)) {
  struct mem_block *VAR_2 = VAR_0->prev;
  VAR_2->size += VAR_0->size;
  VAR_2->next = VAR_0->next;
  VAR_2->next->prev = VAR_2;
  FUNC_0(VAR_0);
 }
}
