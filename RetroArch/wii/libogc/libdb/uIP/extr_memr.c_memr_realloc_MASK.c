
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32 ;
struct mem {int next; int prev; scalar_t__ used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (struct mem*) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;

void* FUNC_2(void *VAR_6,u32 VAR_7)
{
 u32 VAR_8,VAR_9,VAR_10;
 struct mem *VAR_11,*VAR_12;

 if(VAR_7%VAR_0) VAR_7 += VAR_0 - ((VAR_7 + VAR_2)%VAR_0);
 if(VAR_7>VAR_3) return ((void*)0);
 if((u8_t*)VAR_6<(u8_t*)VAR_4 || (u8_t*)VAR_6>=(u8_t*)VAR_5) {
  FUNC_0("memr_realloc: illegal memory.\n");
  return VAR_6;
 }
 VAR_11 = (struct mem*)((u8_t*)VAR_6 - VAR_2);
 VAR_9 = (u8_t*)VAR_11 - VAR_4;
 VAR_8 = VAR_11->next - VAR_9 - VAR_2;

 if(VAR_7+VAR_2+VAR_1<VAR_8) {
  VAR_10 = VAR_9 + VAR_2 + VAR_7;
  VAR_12 = (struct mem*)&VAR_4[VAR_10];
  VAR_12->used = 0;
  VAR_12->next = VAR_11->next;
  VAR_12->prev = VAR_9;
  VAR_11->next = VAR_10;
  if(VAR_12->next!=VAR_3) ((struct mem*)&VAR_4[VAR_12->next])->prev = VAR_10;

  FUNC_1(VAR_12);
 }

 return VAR_6;
}
