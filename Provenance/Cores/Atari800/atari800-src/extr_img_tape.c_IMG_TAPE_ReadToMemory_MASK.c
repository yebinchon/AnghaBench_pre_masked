
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UWORD ;
struct TYPE_5__ {int block_length; int next_blockbyte; scalar_t__* buffer; scalar_t__ was_writing; } ;
typedef TYPE_1__ IMG_TAPE_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int) ;

int FUNC_4(IMG_TAPE_t *VAR_1, UWORD VAR_2, int VAR_3)
{
 int VAR_4;
 if (VAR_1->was_writing) {
  FUNC_0(VAR_1);
  VAR_1->was_writing = VAR_0;
 }
 VAR_4 = VAR_1->block_length - VAR_1->next_blockbyte;

 if (VAR_4 == 0) {

  int VAR_5;
  if (!FUNC_2(VAR_1, &VAR_5))

   return -1;
  VAR_1->block_length = VAR_4;
  VAR_1->next_blockbyte = 0;
 }

 FUNC_1(VAR_1->buffer + VAR_1->next_blockbyte, VAR_2, VAR_4 >= VAR_3 ? VAR_3 : VAR_4);
 VAR_1->next_blockbyte += (VAR_4 >= VAR_3 + 1 ? VAR_3 + 1 : VAR_4);
 return VAR_4 >= VAR_3 + 1 &&
        VAR_1->buffer[VAR_3] == FUNC_3(VAR_1->buffer, VAR_3);
}
