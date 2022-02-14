
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {scalar_t__ used_size; scalar_t__ used_blocks; scalar_t__ free_size; scalar_t__ free_blocks; } ;
typedef TYPE_1__ heap_iblock ;
struct TYPE_11__ {TYPE_3__* start; } ;
typedef TYPE_2__ heap_cntrl ;
struct TYPE_12__ {scalar_t__ back_flag; scalar_t__ front_flag; } ;
typedef TYPE_3__ heap_block ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

u32 FUNC_5(heap_cntrl *VAR_1,heap_iblock *VAR_2)
{
 u32 VAR_3 = 1;
 heap_block *VAR_4 = ((void*)0);
 heap_block *VAR_5 = ((void*)0);

 VAR_2->free_blocks = 0;
 VAR_2->free_size = 0;
 VAR_2->used_blocks = 0;
 VAR_2->used_size = 0;

 if(!FUNC_4(FUNC_3())) return 1;

 VAR_4 = VAR_1->start;
 if(VAR_4->back_flag!=VAR_0) return 2;

 while(VAR_3) {
  if(FUNC_0(VAR_4)) {
   VAR_2->free_blocks++;
   VAR_2->free_size += FUNC_1(VAR_4);
  } else {
   VAR_2->used_blocks++;
   VAR_2->used_size += FUNC_1(VAR_4);
  }

  if(VAR_4->front_flag!=VAR_0) {
   VAR_5 = FUNC_2(VAR_4);
   if(VAR_4->front_flag!=VAR_5->back_flag) return 2;
  }

  if(VAR_4->front_flag==VAR_0)
   VAR_3 = 0;
  else
   VAR_4 = VAR_5;
 }
 return 0;
}
