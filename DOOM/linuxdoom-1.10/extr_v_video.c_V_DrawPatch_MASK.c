
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * columnofs; int width; int height; int leftoffset; int topoffset; } ;
typedef TYPE_1__ patch_t ;
struct TYPE_5__ {int topdelta; int length; } ;
typedef TYPE_2__ column_t ;
typedef int byte ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int ,char*,...) ;
 int ** VAR_2 ;
 int VAR_3 ;

void
FUNC_4
( int VAR_4,
  int VAR_5,
  int VAR_6,
  patch_t* VAR_7 )
{

    int VAR_8;
    int VAR_9;
    column_t* VAR_10;
    byte* VAR_11;
    byte* VAR_12;
    byte* VAR_13;
    int VAR_14;

    VAR_5 -= FUNC_1(VAR_7->topoffset);
    VAR_4 -= FUNC_1(VAR_7->leftoffset);
    if (!VAR_6)
 FUNC_2 (VAR_4, VAR_5, FUNC_1(VAR_7->width), FUNC_1(VAR_7->height));

    VAR_9 = 0;
    VAR_11 = VAR_2[VAR_6]+VAR_5*VAR_1+VAR_4;

    VAR_14 = FUNC_1(VAR_7->width);

    for ( ; VAR_9<VAR_14 ; VAR_4++, VAR_9++, VAR_11++)
    {
 VAR_10 = (column_t *)((byte *)VAR_7 + FUNC_0(VAR_7->columnofs[VAR_9]));


 while (VAR_10->topdelta != 0xff )
 {
     VAR_13 = (byte *)VAR_10 + 3;
     VAR_12 = VAR_11 + VAR_10->topdelta*VAR_1;
     VAR_8 = VAR_10->length;

     while (VAR_8--)
     {
  *VAR_12 = *VAR_13++;
  VAR_12 += VAR_1;
     }
     VAR_10 = (column_t *)( (byte *)VAR_10 + VAR_10->length
        + 4 );
 }
    }
}
