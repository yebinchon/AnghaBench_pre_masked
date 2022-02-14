
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** loc; } ;
typedef TYPE_1__ huff_t ;
typedef int byte ;


 int VAR_0 ;
 int FUNC_0 (char,int *) ;
 int FUNC_1 (int *,int *,int *) ;

void FUNC_2 (huff_t *VAR_1, int VAR_2, byte *VAR_3) {
 int VAR_4;
 if (VAR_1->loc[VAR_2] == ((void*)0)) {

  FUNC_2(VAR_1, VAR_0, VAR_3);
  for (VAR_4 = 7; VAR_4 >= 0; VAR_4--) {
   FUNC_0((char)((VAR_2 >> VAR_4) & 0x1), VAR_3);
  }
 } else {
  FUNC_1(VAR_1->loc[VAR_2], ((void*)0), VAR_3);
 }
}
