
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UWORD ;
struct TYPE_5__ {int save_gap; int block_length; int * buffer; scalar_t__ was_writing; scalar_t__ next_blockbyte; scalar_t__ savetime; } ;
typedef TYPE_1__ IMG_TAPE_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(IMG_TAPE_t *VAR_1, UWORD VAR_2, int VAR_3, int VAR_4)
{
 if (!VAR_1->was_writing) {
  VAR_1->savetime = 0;
  VAR_1->save_gap = 0;
  VAR_1->next_blockbyte = 0;
  VAR_1->block_length = 0;
  VAR_1->was_writing = VAR_0;
 }
 FUNC_0(VAR_1, VAR_3 + 1);

 FUNC_1(VAR_2, VAR_1->buffer, VAR_3);

 VAR_1->buffer[VAR_3] = FUNC_2(VAR_1->buffer, VAR_3);
 VAR_1->save_gap = VAR_4;
 VAR_1->block_length = VAR_3 + 1;
 return FUNC_3(VAR_1);
}
