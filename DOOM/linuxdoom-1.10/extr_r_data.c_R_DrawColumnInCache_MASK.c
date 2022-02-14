
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int topdelta; int length; } ;
typedef TYPE_1__ column_t ;
typedef int byte ;


 int FUNC_0 (int *,int *,int) ;

void
FUNC_1
( column_t* VAR_0,
  byte* VAR_1,
  int VAR_2,
  int VAR_3 )
{
    int VAR_4;
    int VAR_5;
    byte* VAR_6;
    byte* VAR_7;

    VAR_7 = (byte *)VAR_1 + 3;

    while (VAR_0->topdelta != 0xff)
    {
 VAR_6 = (byte *)VAR_0 + 3;
 VAR_4 = VAR_0->length;
 VAR_5 = VAR_2 + VAR_0->topdelta;

 if (VAR_5 < 0)
 {
     VAR_4 += VAR_5;
     VAR_5 = 0;
 }

 if (VAR_5 + VAR_4 > VAR_3)
     VAR_4 = VAR_3 - VAR_5;

 if (VAR_4 > 0)
     FUNC_0 (VAR_1 + VAR_5, VAR_6, VAR_4);

 VAR_0 = (column_t *)( (byte *)VAR_0 + VAR_0->length + 4);
    }
}
