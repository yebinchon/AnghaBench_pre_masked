
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * columnofs; } ;
typedef TYPE_1__ patch_t ;
struct TYPE_5__ {int topdelta; int length; } ;
typedef TYPE_2__ column_t ;
typedef int byte ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int ** VAR_1 ;

void
FUNC_1
( int VAR_2,
  patch_t* VAR_3,
  int VAR_4 )
{
    column_t* VAR_5;
    byte* VAR_6;
    byte* VAR_7;
    byte* VAR_8;
    int VAR_9;

    VAR_5 = (column_t *)((byte *)VAR_3 + FUNC_0(VAR_3->columnofs[VAR_4]));
    VAR_8 = VAR_1[0]+VAR_2;


    while (VAR_5->topdelta != 0xff )
    {
 VAR_6 = (byte *)VAR_5 + 3;
 VAR_7 = VAR_8 + VAR_5->topdelta*VAR_0;
 VAR_9 = VAR_5->length;

 while (VAR_9--)
 {
     *VAR_7 = *VAR_6++;
     VAR_7 += VAR_0;
 }
 VAR_5 = (column_t *)( (byte *)VAR_5 + VAR_5->length + 4 );
    }
}
