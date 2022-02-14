
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_13__ {int pg_size; TYPE_3__* first; } ;
typedef TYPE_2__ heap_cntrl ;
struct TYPE_14__ {int front_flag; int back_flag; struct TYPE_14__* next; TYPE_1__* prev; } ;
typedef TYPE_3__ heap_block ;
struct TYPE_12__ {TYPE_3__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,int) ;
 void* FUNC_3 (int,int ) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 void* FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*) ;

void* FUNC_7(heap_cntrl *VAR_2,u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 heap_block *VAR_6;
 heap_block *VAR_7;
 heap_block *VAR_8;
 void *VAR_9;
 u32 VAR_10,VAR_11;

 if(VAR_3>=(-1-VAR_1)) return ((void*)0);

 FUNC_0(VAR_11);
 VAR_4 = (VAR_3 % VAR_2->pg_size);
 VAR_5 = (VAR_3 + VAR_2->pg_size + VAR_1);

 if(VAR_4)
  VAR_5 += (VAR_2->pg_size - VAR_4);

 if(VAR_5<sizeof(heap_block)) VAR_5 = sizeof(heap_block);

 for(VAR_6=VAR_2->first;;VAR_6=VAR_6->next) {
  if(VAR_6==FUNC_6(VAR_2)) {
   FUNC_1(VAR_11);
   return ((void*)0);
  }
  if(VAR_6->front_flag>=VAR_5) break;
 }

 if((VAR_6->front_flag-VAR_5)>(VAR_2->pg_size+VAR_1)) {
  VAR_6->front_flag -= VAR_5;
  VAR_7 = FUNC_4(VAR_6);
  VAR_7->back_flag = VAR_6->front_flag;

  VAR_8 = FUNC_2(VAR_7,VAR_5);
  VAR_8->back_flag = VAR_7->front_flag = FUNC_3(VAR_5,VAR_0);

  VAR_9 = FUNC_5(VAR_7);
 } else {
  VAR_7 = FUNC_4(VAR_6);
  VAR_7->back_flag = FUNC_3(VAR_6->front_flag,VAR_0);

  VAR_6->front_flag = VAR_7->back_flag;
  VAR_6->next->prev = VAR_6->prev;
  VAR_6->prev->next = VAR_6->next;

  VAR_9 = FUNC_5(VAR_6);
 }

 VAR_10 = (VAR_2->pg_size - ((u32)VAR_9&(VAR_2->pg_size-1)));
 VAR_9 += VAR_10;
 *(((u32*)VAR_9)-1) = VAR_10;
 FUNC_1(VAR_11);

 return VAR_9;
}
