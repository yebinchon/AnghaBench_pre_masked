
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_5__ {int was_writing; scalar_t__ next_blockbyte; scalar_t__ block_length; int* block_baudrates; size_t current_block; scalar_t__ isCAS; int * buffer; } ;
typedef TYPE_1__ IMG_TAPE_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int VAR_1 ;

int FUNC_2(IMG_TAPE_t *VAR_2, unsigned int *VAR_3, int *VAR_4, UBYTE *VAR_5)
{
 int VAR_6;
 if (VAR_2->was_writing) {
  FUNC_0(VAR_2);
  VAR_2->was_writing = VAR_0;
 }
 if (VAR_2->next_blockbyte >= VAR_2->block_length) {


  if (!FUNC_1(VAR_2, &VAR_6))
   return VAR_0;
  VAR_2->next_blockbyte = 0;
  if (VAR_6 > 0) {

   *VAR_3 = VAR_6 * 1789 + VAR_6 * 790 / 1000;
   *VAR_4 = VAR_1;
   return VAR_1;
  }
 }
 *VAR_5 = VAR_2->buffer[VAR_2->next_blockbyte++];
 *VAR_4 = VAR_0;

 *VAR_3 = 10 * 1789790 / (VAR_2->isCAS ? VAR_2->block_baudrates[VAR_2->current_block] : 600);
 return VAR_1;
}
