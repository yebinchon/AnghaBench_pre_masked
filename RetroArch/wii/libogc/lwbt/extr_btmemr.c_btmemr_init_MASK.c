
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem {size_t next; size_t prev; int used; } ;


 int FUNC_0 (int *,int ,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_1 ;
 struct mem* VAR_2 ;
 struct mem* VAR_3 ;

void FUNC_3()
{
 u32 VAR_4;
 struct mem *VAR_5;

 FUNC_0(VAR_1,0,VAR_0);

 FUNC_1(VAR_4);
 VAR_5 = (struct mem*)VAR_1;
 VAR_5->next = VAR_0;
 VAR_5->prev = 0;
 VAR_5->used = 0;

 VAR_2 = (struct mem*)&VAR_1[VAR_0];
 VAR_2->used = 1;
 VAR_2->prev = VAR_0;
 VAR_2->next = VAR_0;

 VAR_3 = (struct mem*)VAR_1;
 FUNC_2(VAR_4);
}
