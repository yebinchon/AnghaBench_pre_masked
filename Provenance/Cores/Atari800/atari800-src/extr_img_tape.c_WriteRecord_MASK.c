
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int length_lo; int length_hi; int aux_lo; int aux_hi; int identifier; } ;
struct TYPE_5__ {size_t num_blocks; int block_length; int save_gap; int current_block; int file; TYPE_2__* buffer; scalar_t__* block_offsets; int * block_baudrates; int isCAS; } ;
typedef TYPE_1__ IMG_TAPE_t ;
typedef TYPE_2__ CAS_Header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(IMG_TAPE_t *VAR_3)
{
 CAS_Header VAR_4;
 int VAR_5;



 if (!VAR_3->isCAS)
  return VAR_1;

 if (FUNC_1(VAR_3->file, VAR_3->block_offsets[VAR_3->num_blocks], VAR_2) != 0)
  return VAR_1;

 FUNC_0(VAR_4.identifier, "data", 4);
 VAR_4.length_lo = VAR_3->block_length & 0xFF;
 VAR_4.length_hi = (VAR_3->block_length >> 8) & 0xFF;
 VAR_4.aux_lo = VAR_3->save_gap & 0xff;
 VAR_4.aux_hi = (VAR_3->save_gap >> 8) & 0xff;
 if (FUNC_2(&VAR_4, 1, 8, VAR_3->file) != 8)
  return VAR_1;

 VAR_3->block_baudrates[VAR_3->num_blocks] = VAR_0;
 VAR_3->num_blocks++;
 VAR_3->block_offsets[VAR_3->num_blocks] = VAR_3->block_offsets[VAR_3->num_blocks - 1] + VAR_3->block_length + 8;
 VAR_3->current_block = VAR_3->num_blocks;

 VAR_5 = FUNC_2(VAR_3->buffer, 1, VAR_3->block_length, VAR_3->file) == VAR_3->block_length;
 if (VAR_5) {
  VAR_3->save_gap = 0;
  VAR_3->block_length = 0;
 }
 return VAR_5;
}
