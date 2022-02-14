
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int was_writing; scalar_t__ next_blockbyte; scalar_t__ block_length; int* block_baudrates; size_t current_block; scalar_t__ isCAS; } ;
typedef TYPE_1__ IMG_TAPE_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int VAR_1 ;

int FUNC_2(IMG_TAPE_t *VAR_2, int VAR_3)
{
 if (VAR_2->was_writing) {
  FUNC_0(VAR_2);
  VAR_2->was_writing = VAR_0;
 }

 while (VAR_3 > 0) {
  if (VAR_2->next_blockbyte < VAR_2->block_length) {
   int VAR_4 = VAR_3 * (VAR_2->isCAS ? VAR_2->block_baudrates[VAR_2->current_block] : 600) / 1000 / 10;
   if (VAR_4 > VAR_2->block_length - VAR_2->next_blockbyte)
    VAR_4 = VAR_2->block_length - VAR_2->next_blockbyte;
   VAR_2->next_blockbyte += VAR_4;
   VAR_3 -= VAR_4 * 10 * 1000 / (VAR_2->isCAS ? VAR_2->block_baudrates[VAR_2->current_block] : 600);
   continue;
  }
  else {
   int VAR_5;
   if (!FUNC_1(VAR_2, &VAR_5))
    return VAR_0;
   VAR_2->next_blockbyte = 0;
   VAR_3 -= VAR_5;
  }
 }
 return VAR_1;
}
