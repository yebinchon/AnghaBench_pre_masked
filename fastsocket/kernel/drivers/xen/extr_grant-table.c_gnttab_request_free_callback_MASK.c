
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gnttab_free_callback {void (* fn ) (void*) ;struct gnttab_free_callback* next; int count; void* arg; } ;


 int FUNC_0 () ;
 struct gnttab_free_callback* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct gnttab_free_callback *VAR_2,
      void (*VAR_3)(void *), void *VAR_4, u16 VAR_5)
{
 unsigned long VAR_6;
 FUNC_1(&VAR_1, VAR_6);
 if (VAR_2->next)
  goto out;
 VAR_2->fn = VAR_3;
 VAR_2->arg = VAR_4;
 VAR_2->count = VAR_5;
 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;
 FUNC_0();
out:
 FUNC_2(&VAR_1, VAR_6);
}
