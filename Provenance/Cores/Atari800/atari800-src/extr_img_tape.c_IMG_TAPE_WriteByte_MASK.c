
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_5__ {int savetime; scalar_t__ block_length; int save_gap; int * buffer; } ;
typedef TYPE_1__ IMG_TAPE_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(IMG_TAPE_t *VAR_2, UBYTE VAR_3, unsigned int VAR_4)
{




 int VAR_5 = VAR_2->savetime /1790 - 10 * VAR_4 / 895;
 if (VAR_5 > 05) {


  if (VAR_2->block_length > 0) {
   if (!FUNC_1(VAR_2))
    return VAR_0;
  }

  VAR_2->save_gap += VAR_5;
 }

 FUNC_0(VAR_2, VAR_2->block_length + 1);
 VAR_2->buffer[VAR_2->block_length++] = VAR_3;

 VAR_2->savetime = 0;

 return VAR_1;
}
