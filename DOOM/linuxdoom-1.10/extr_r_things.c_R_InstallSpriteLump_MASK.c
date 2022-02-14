
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* byte ;
typedef scalar_t__ boolean ;
struct TYPE_2__ {int rotate; int* lump; void** flip; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_1
( int VAR_4,
  unsigned VAR_5,
  unsigned VAR_6,
  boolean VAR_7 )
{
    int VAR_8;

    if (VAR_5 >= 29 || VAR_6 > 8)
 FUNC_0("R_InstallSpriteLump: "
  "Bad frame characters in lump %i", VAR_4);

    if ((int)VAR_5 > VAR_1)
 VAR_1 = VAR_5;

    if (VAR_6 == 0)
    {

 if (VAR_3[VAR_5].rotate == 0)
     FUNC_0 ("R_InitSprites: Sprite %s frame %c has "
       "multip rot=0 lump", VAR_2, 'A'+VAR_5);

 if (VAR_3[VAR_5].rotate == 1)
     FUNC_0 ("R_InitSprites: Sprite %s frame %c has rotations "
       "and a rot=0 lump", VAR_2, 'A'+VAR_5);

 VAR_3[VAR_5].rotate = 0;
 for (VAR_8=0 ; VAR_8<8 ; VAR_8++)
 {
     VAR_3[VAR_5].lump[VAR_8] = VAR_4 - VAR_0;
     VAR_3[VAR_5].flip[VAR_8] = (byte)VAR_7;
 }
 return;
    }


    if (VAR_3[VAR_5].rotate == 0)
 FUNC_0 ("R_InitSprites: Sprite %s frame %c has rotations "
   "and a rot=0 lump", VAR_2, 'A'+VAR_5);

    VAR_3[VAR_5].rotate = 1;


    VAR_6--;
    if (VAR_3[VAR_5].lump[VAR_6] != -1)
 FUNC_0 ("R_InitSprites: Sprite %s : %c : %c "
   "has two lumps mapped to it",
   VAR_2, 'A'+VAR_5, '1'+VAR_6);

    VAR_3[VAR_5].lump[VAR_6] = VAR_4 - VAR_0;
    VAR_3[VAR_5].flip[VAR_6] = (byte)VAR_7;
}
