
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct mem {size_t next; scalar_t__ used; int prev; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mem* VAR_2 ;

__attribute__((used)) static void FUNC_0(struct mem *VAR_3)
{
 struct mem *VAR_4;
 struct mem *VAR_5;

 VAR_4 = (struct mem*)&VAR_0[VAR_3->next];
 if(VAR_3!=VAR_4 && VAR_4->used==0 && (u8_t*)VAR_4!=(u8_t*)VAR_1) {
  if(VAR_2==VAR_4) VAR_2 = VAR_3;

  VAR_3->next = VAR_4->next;
  ((struct mem*)&VAR_0[VAR_4->next])->prev = (u8_t*)VAR_3 - VAR_0;
 }

 VAR_5 = (struct mem*)&VAR_0[VAR_3->prev];
 if(VAR_5!=VAR_3 && VAR_5->used==0) {
  if(VAR_2==VAR_3) VAR_2 = VAR_5;
  VAR_5->next = VAR_3->next;
  ((struct mem*)&VAR_0[VAR_3->next])->prev = (u8_t*)VAR_5 - VAR_0;
 }
}
