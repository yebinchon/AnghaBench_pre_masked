
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8_t ;
typedef scalar_t__ u32 ;
struct mem {scalar_t__ next; int used; scalar_t__ prev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 struct mem* VAR_4 ;
 struct mem* VAR_5 ;

void* FUNC_0(u32 VAR_6)
{
 u32 VAR_7,VAR_8;
 struct mem *VAR_9,*VAR_10;

 if(VAR_6==0) return ((void*)0);

 if(VAR_6%VAR_0) VAR_6 += VAR_0 - ((VAR_6+VAR_1)%VAR_1);
 if(VAR_6>VAR_2) return ((void*)0);

 for(VAR_7 = (u8_t*)VAR_5 - VAR_3;VAR_7<VAR_2;VAR_7=((struct mem*)&VAR_3[VAR_7])->next) {
  VAR_9 = (struct mem*)&VAR_3[VAR_7];
  if(!VAR_9->used && VAR_9->next - (VAR_7 + VAR_1)>=VAR_6 + VAR_1) {
   VAR_8 = VAR_7 + VAR_1 + VAR_6;
   VAR_10 = (struct mem*)&VAR_3[VAR_8];

   VAR_10->prev = VAR_7;
   VAR_10->next = VAR_9->next;
   VAR_9->next = VAR_8;
   if(VAR_9->next!=VAR_2) ((struct mem*)&VAR_3[VAR_10->next])->prev = VAR_8;

   VAR_10->used = 0;
   VAR_9->used = 1;

   if(VAR_9==VAR_5) {
    while(VAR_5->used && VAR_5!=VAR_4) VAR_5 = (struct mem*)&VAR_3[VAR_5->next];
   }

   return (u8_t*)VAR_9+VAR_1;
  }
 }
 return ((void*)0);
}
