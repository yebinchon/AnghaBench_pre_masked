
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem {size_t next; size_t prev; int used; } ;


 int FUNC_0 (int *,int ,size_t) ;
 size_t VAR_0 ;
 int * VAR_1 ;
 struct mem* VAR_2 ;
 struct mem* VAR_3 ;

void FUNC_1()
{
 struct mem *VAR_4;

 FUNC_0(VAR_1,0,VAR_0);
 VAR_4 = (struct mem*)VAR_1;
 VAR_4->next = VAR_0;
 VAR_4->prev = 0;
 VAR_4->used = 0;

 VAR_2 = (struct mem*)&VAR_1[VAR_0];
 VAR_2->used = 1;
 VAR_2->prev = VAR_0;
 VAR_2->next = VAR_0;

 VAR_3 = (struct mem*)VAR_1;
}
