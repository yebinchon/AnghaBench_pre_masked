
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32 ;
struct mem {int next; int prev; scalar_t__ used; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mem*) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;

void* FUNC_4(void *VAR_6,u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9,VAR_10,VAR_11;
 struct mem *VAR_12,*VAR_13;

 if(VAR_7%VAR_0) VAR_7 += VAR_0 - ((VAR_7 + VAR_3)%VAR_0);
 if(VAR_7>VAR_1) return ((void*)0);
 if((u8_t*)VAR_6<(u8_t*)VAR_4 || (u8_t*)VAR_6>=(u8_t*)VAR_5) {
  FUNC_0("memr_realloc: illegal memory.\n");
  return VAR_6;
 }

 FUNC_1(VAR_8);
 VAR_12 = (struct mem*)((u8_t*)VAR_6 - VAR_3);
 VAR_10 = (u8_t*)VAR_12 - VAR_4;
 VAR_9 = VAR_12->next - VAR_10 - VAR_3;

 if(VAR_7+VAR_3+VAR_2<VAR_9) {
  VAR_11 = VAR_10 + VAR_3 + VAR_7;
  VAR_13 = (struct mem*)&VAR_4[VAR_11];
  VAR_13->used = 0;
  VAR_13->next = VAR_12->next;
  VAR_13->prev = VAR_10;
  VAR_12->next = VAR_11;
  if(VAR_13->next!=VAR_1) ((struct mem*)&VAR_4[VAR_13->next])->prev = VAR_11;

  FUNC_3(VAR_13);
 }
 FUNC_2(VAR_8);

 return VAR_6;
}
