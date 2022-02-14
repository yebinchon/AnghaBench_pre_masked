
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int next_blockbyte; int* block_baudrates; size_t current_block; int* buffer; scalar_t__ isCAS; scalar_t__ was_writing; } ;
typedef TYPE_1__ IMG_TAPE_t ;



int FUNC_0(IMG_TAPE_t *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->was_writing || VAR_0->next_blockbyte == 0)
  return 1;

 if (VAR_1 <
  10 * 1789790 / (VAR_0->isCAS ? VAR_0->block_baudrates[VAR_0->current_block] : 600) - 1) {
  VAR_2 = VAR_1 / (1789790 / (VAR_0->isCAS ? VAR_0->block_baudrates[VAR_0->current_block] : 600));
 }
 else {
  VAR_2 = 0;
 }


 if ((VAR_2 <= 0) || (VAR_2 > 9))
  return 1;


 if (VAR_2 == 9)
  return 0;


 return (VAR_0->buffer[VAR_0->next_blockbyte - 1] >> (8 - VAR_2)) & 1;
}
