
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;

int FUNC_1 (int VAR_1)
{
    int VAR_2;

    VAR_2 = VAR_1 - (VAR_0&0xff);

    if (VAR_2 >= -64 && VAR_2 <= 64)
 return (VAR_0&~0xff) + VAR_1;
    if (VAR_2 > 64)
 return (VAR_0&~0xff) - 256 + VAR_1;
    if (VAR_2 < -64)
 return (VAR_0&~0xff) + 256 + VAR_1;

    FUNC_0 ("ExpandTics: strange value %i at maketic %i",VAR_1,VAR_0);
    return 0;
}
