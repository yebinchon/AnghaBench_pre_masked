
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;
typedef scalar_t__ fixed ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void FUNC_2(s32 VAR_2, s32 *VAR_3, s32 *VAR_4)
{
    fixed VAR_5, VAR_6, VAR_7, VAR_8;
    unsigned VAR_9;

    VAR_5=FUNC_0(VAR_0);
    VAR_6=0;
    VAR_7=FUNC_1(VAR_2);
    VAR_8=0;

    for (VAR_9=0; VAR_9 < 12; VAR_9++)
    {
        fixed VAR_10;

        if(VAR_7 > VAR_8)
        {
            VAR_10=VAR_5 - (VAR_6 >> VAR_9);
            VAR_6=(VAR_5 >> VAR_9) + VAR_6;
            VAR_5=VAR_10;
            VAR_8 += VAR_1[VAR_9];
        }
        else
        {
            VAR_10=VAR_5 + (VAR_6 >> VAR_9);
            VAR_6=-(VAR_5 >> VAR_9) + VAR_6;
            VAR_5=VAR_10;
            VAR_8 -= VAR_1[VAR_9];
        }
    }

    if (VAR_2 > 0)
    {
        *VAR_4 = VAR_5;
        *VAR_3 = VAR_6;
    }
    else
    {
        *VAR_4 = VAR_5;
        *VAR_3 = -VAR_6;
    }
}
