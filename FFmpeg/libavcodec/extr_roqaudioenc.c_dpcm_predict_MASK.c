
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static unsigned char FUNC_2(short *VAR_1, short VAR_2)
{
    int VAR_3;
    int VAR_4;
    int VAR_5;
    int VAR_6;

    VAR_3 = VAR_2 - *VAR_1;

    VAR_4 = VAR_3<0;
    VAR_3 = FUNC_0(VAR_3);

    if (VAR_3 >= VAR_0)
        VAR_5 = 127;
    else {
        VAR_5 = FUNC_1(VAR_3);
        VAR_5 += VAR_3 > VAR_5*VAR_5+VAR_5;
    }


 retry:
    VAR_3 = VAR_5*VAR_5;
    if (VAR_4)
        VAR_3 = -VAR_3;
    VAR_6 = *VAR_1 + VAR_3;


    if (VAR_6 > 32767 || VAR_6 < -32768) {
        VAR_5--;
        goto retry;
    }


    VAR_5 |= VAR_4 << 7;

    *VAR_1 = VAR_6;

    return VAR_5;
}
