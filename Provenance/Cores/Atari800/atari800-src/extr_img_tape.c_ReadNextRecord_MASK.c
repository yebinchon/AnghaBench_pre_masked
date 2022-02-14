
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int length_lo; int length_hi; int aux_lo; int aux_hi; } ;
struct TYPE_5__ {int block_length; size_t current_block; size_t num_blocks; int* block_offsets; int* buffer; int file; scalar_t__ isCAS; } ;
typedef TYPE_1__ IMG_TAPE_t ;
typedef TYPE_2__ CAS_Header ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int) ;
 int VAR_2 ;
 int FUNC_2 (int*,int,int,int ) ;
 scalar_t__ FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int*,int ,int) ;

__attribute__((used)) static int FUNC_5(IMG_TAPE_t *VAR_3, int *VAR_4)
{
 int VAR_5;



 if (VAR_3->block_length != 0) {

  VAR_3->block_length = 0;
  if (++VAR_3->current_block >= VAR_3->num_blocks)

   return VAR_0;
 }

 if (VAR_3->isCAS) {
  CAS_Header VAR_6;


  if (FUNC_3(VAR_3->file, VAR_3->block_offsets[VAR_3->current_block] + 4, VAR_1) != 0
      || FUNC_2(&VAR_6.length_lo, 1, 4, VAR_3->file) < 4)
   return VAR_0;
  VAR_5 = VAR_6.length_lo + (VAR_6.length_hi << 8);
  *VAR_4 = VAR_6.aux_lo + (VAR_6.aux_hi << 8);

  FUNC_0(VAR_3, VAR_5);
  if (FUNC_2(VAR_3->buffer, 1, VAR_5, VAR_3->file) < VAR_5)
   return VAR_0;
 }
 else {
  VAR_5 = 132;

  *VAR_4 = (VAR_3->current_block == 0 ? 19200 : 260);
  VAR_3->buffer[0] = 0x55;
  VAR_3->buffer[1] = 0x55;
  if (VAR_3->current_block + 1 >= VAR_3->num_blocks) {

   VAR_3->buffer[2] = 0xfe;
   FUNC_4(VAR_3->buffer + 3, 0, 128);
  }
  else {
   int VAR_7;
   if (FUNC_3(VAR_3->file, VAR_3->current_block * 128, VAR_1) != 0
       || (VAR_7 = FUNC_2(VAR_3->buffer + 3, 1, 128, VAR_3->file)) == 0)
    return VAR_0;
   if (VAR_7 < 128) {
    VAR_3->buffer[2] = 0xfa;
    FUNC_4(VAR_3->buffer + 3 + VAR_7, 0, 127 - VAR_7);
    VAR_3->buffer[0x82] = VAR_7;
   }
   else
    VAR_3->buffer[2] = 0xfc;
  }
  VAR_3->buffer[0x83] = FUNC_1(VAR_3->buffer, 0x83);
 }
 VAR_3->block_length = VAR_5;
 return VAR_2;
}
