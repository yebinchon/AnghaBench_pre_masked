
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {TYPE_2__* final; TYPE_2__* last; int * perm_null; TYPE_2__* first; TYPE_2__* start; scalar_t__ pg_size; } ;
typedef TYPE_1__ heap_cntrl ;
struct TYPE_9__ {void* front_flag; void* back_flag; int prev; int next; } ;
typedef TYPE_2__ heap_block ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

u32 FUNC_6(heap_cntrl *VAR_4,void *VAR_5,u32 VAR_6,u32 VAR_7)
{
 u32 VAR_8,VAR_9;
 heap_block *VAR_10;

 if(!FUNC_4(VAR_7) || VAR_6<VAR_2) return 0;

 FUNC_0(VAR_9);
 VAR_4->pg_size = VAR_7;
 VAR_8 = (VAR_6 - VAR_3);

 VAR_10 = (heap_block*)VAR_5;
 VAR_10->back_flag = VAR_1;
 VAR_10->front_flag = VAR_8;
 VAR_10->next = FUNC_5(VAR_4);
 VAR_10->prev = FUNC_2(VAR_4);

 VAR_4->start = VAR_10;
 VAR_4->first = VAR_10;
 VAR_4->perm_null = ((void*)0);
 VAR_4->last = VAR_10;

 VAR_10 = FUNC_3(VAR_10);
 VAR_10->back_flag = VAR_8;
 VAR_10->front_flag = VAR_1;
 VAR_4->final = VAR_10;
 FUNC_1(VAR_9);

 return (VAR_8 - VAR_0);
}
