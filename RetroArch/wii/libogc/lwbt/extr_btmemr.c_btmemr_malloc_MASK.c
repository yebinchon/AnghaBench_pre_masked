
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
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 void* VAR_3 ;
 struct mem* VAR_4 ;
 struct mem* VAR_5 ;

void* FUNC_2(u32 VAR_6)
{
 u32 VAR_7;
 u32 VAR_8,VAR_9;
 struct mem *VAR_10,*VAR_11;

 if(VAR_6==0) return ((void*)0);

 if(VAR_6%VAR_0) VAR_6 += VAR_0 - ((VAR_6+VAR_2)%VAR_2);
 if(VAR_6>VAR_1) return ((void*)0);

 FUNC_0(VAR_7);
 for(VAR_8 = (u8_t*)VAR_5 - VAR_3;VAR_8<VAR_1;VAR_8=((struct mem*)&VAR_3[VAR_8])->next) {
  VAR_10 = (struct mem*)&VAR_3[VAR_8];
  if(!VAR_10->used && VAR_10->next - (VAR_8 + VAR_2)>=VAR_6 + VAR_2) {
   VAR_9 = VAR_8 + VAR_2 + VAR_6;
   VAR_11 = (struct mem*)&VAR_3[VAR_9];

   VAR_11->prev = VAR_8;
   VAR_11->next = VAR_10->next;
   VAR_10->next = VAR_9;
   if(VAR_10->next!=VAR_1) ((struct mem*)&VAR_3[VAR_11->next])->prev = VAR_9;

   VAR_11->used = 0;
   VAR_10->used = 1;

   if(VAR_10==VAR_5) {
    while(VAR_5->used && VAR_5!=VAR_4) VAR_5 = (struct mem*)&VAR_3[VAR_5->next];
   }

   FUNC_1(VAR_7);
   return (u8_t*)VAR_10+VAR_2;
  }
 }
 FUNC_1(VAR_7);
 return ((void*)0);
}
