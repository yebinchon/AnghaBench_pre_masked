
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int header ;
typedef void* UBYTE ;
struct TYPE_6__ {char length_lo; int aux_lo; int aux_hi; void* length_hi; } ;
struct TYPE_5__ {int* block_offsets; int buffer_size; void* was_writing; void* buffer; scalar_t__ num_blocks; scalar_t__ current_block; scalar_t__ block_length; scalar_t__ next_blockbyte; scalar_t__ save_gap; scalar_t__ savetime; void* isCAS; int description; int * file; } ;
typedef TYPE_1__ IMG_TAPE_t ;
typedef int FILE ;
typedef TYPE_2__ CAS_Header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*,int,int,int *) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (char const*) ;

IMG_TAPE_t *FUNC_7(char const *VAR_4, char const *VAR_5)
{
 IMG_TAPE_t *VAR_6;
 CAS_Header VAR_7;
 size_t VAR_8;
 FILE *VAR_9 = ((void*)0);


 VAR_9 = FUNC_3(VAR_4, "wb+");
 if (VAR_9 == ((void*)0))
  return ((void*)0);


 VAR_8 = FUNC_6(VAR_5);
 FUNC_5(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.length_lo = (UBYTE) VAR_8;
 VAR_7.length_hi = (UBYTE) (VAR_8 >> 8);
 if (FUNC_4("FUJI", 1, 4, VAR_9) != 4
     || FUNC_4(&VAR_7.length_lo, 1, 4, VAR_9) != 4
     || FUNC_4(VAR_5, 1, VAR_8, VAR_9) != VAR_8) {
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.aux_lo = VAR_1 & 0xff;
 VAR_7.aux_hi = VAR_1 >> 8;
 if (FUNC_4("baud", 1, 4, VAR_9) != 4
     || FUNC_4(&VAR_7.length_lo, 1, 4, VAR_9) != 4) {
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 VAR_6 = FUNC_0(sizeof(IMG_TAPE_t));
 VAR_6->file = VAR_9;
 if (VAR_5 != ((void*)0))
  FUNC_1(VAR_6->description, VAR_5, VAR_0);
 VAR_6->isCAS = VAR_3;
 VAR_6->savetime = 0;
 VAR_6->save_gap = 0;
 VAR_6->next_blockbyte = 0;
 VAR_6->block_length = 0;
 VAR_6->current_block = 0;
 VAR_6->num_blocks = 0;
 VAR_6->block_offsets[0] = FUNC_6(VAR_5) + 16;
 VAR_6->buffer = FUNC_0((VAR_6->buffer_size = VAR_2) * sizeof(UBYTE));
 VAR_6->was_writing = VAR_3;

 return VAR_6;
}
