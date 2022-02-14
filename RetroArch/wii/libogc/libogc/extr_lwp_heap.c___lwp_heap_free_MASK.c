
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_18__ {TYPE_2__* first; } ;
typedef TYPE_1__ heap_cntrl ;
struct TYPE_19__ {scalar_t__ front_flag; scalar_t__ back_flag; struct TYPE_19__* prev; struct TYPE_19__* next; } ;
typedef TYPE_2__ heap_block ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,void*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 void* FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_1__*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (void*) ;

BOOL FUNC_11(heap_cntrl *VAR_2,void *VAR_3)
{
 heap_block *VAR_4;
 heap_block *VAR_5;
 heap_block *VAR_6;
 heap_block *VAR_7;
 heap_block *VAR_8;
 u32 VAR_9,VAR_10;

 FUNC_0(VAR_10);

 VAR_4 = FUNC_10(VAR_3);
 if(!FUNC_4(VAR_2,VAR_4) || FUNC_3(VAR_4)) {
  FUNC_1(VAR_10);
  return VAR_0;
 }

 VAR_9 = FUNC_5(VAR_4);
 VAR_5 = FUNC_2(VAR_4,VAR_9);

 if(!FUNC_4(VAR_2,VAR_5) || (VAR_4->front_flag!=VAR_5->back_flag)) {
  FUNC_1(VAR_10);
  return VAR_0;
 }

 if(FUNC_8(VAR_4)) {
  VAR_7 = FUNC_9(VAR_4);
  if(!FUNC_4(VAR_2,VAR_7)) {
   FUNC_1(VAR_10);
   return VAR_0;
  }

  if(FUNC_3(VAR_5)) {
   VAR_7->front_flag += VAR_5->front_flag+VAR_9;
   VAR_8 = FUNC_7(VAR_7);
   VAR_8->back_flag = VAR_7->front_flag;
   VAR_5->next->prev = VAR_5->prev;
   VAR_5->prev->next = VAR_5->next;
  } else {
   VAR_7->front_flag = VAR_5->back_flag = VAR_7->front_flag+VAR_9;
  }
 } else if(FUNC_3(VAR_5)) {
  VAR_4->front_flag = VAR_9+VAR_5->front_flag;
  VAR_6 = FUNC_7(VAR_4);
  VAR_6->back_flag = VAR_4->front_flag;
  VAR_4->next = VAR_5->next;
  VAR_4->prev = VAR_5->prev;
  VAR_5->prev->next = VAR_4;
  VAR_5->next->prev = VAR_4;

  if(VAR_2->first==VAR_5) VAR_2->first = VAR_4;
 } else {
  VAR_5->back_flag = VAR_4->front_flag = VAR_9;
  VAR_4->prev = FUNC_6(VAR_2);
  VAR_4->next = VAR_2->first;
  VAR_2->first = VAR_4;
  VAR_4->next->prev = VAR_4;
 }
 FUNC_1(VAR_10);

 return VAR_1;
}
