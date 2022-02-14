
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ savetime; int num_blocks; int current_block; scalar_t__ was_writing; scalar_t__ block_length; scalar_t__ next_blockbyte; scalar_t__ save_gap; } ;
typedef TYPE_1__ IMG_TAPE_t ;


 scalar_t__ VAR_0 ;

void FUNC_0(IMG_TAPE_t *VAR_1, unsigned int VAR_2)
{
 if (!VAR_1->was_writing) {
  VAR_1->savetime = 0;
  VAR_1->save_gap = 0;
  VAR_1->next_blockbyte = 0;
  VAR_1->block_length = 0;
  VAR_1->was_writing = VAR_0;

  VAR_1->current_block = VAR_1->num_blocks;
 }
 VAR_1->savetime += VAR_2;
}
