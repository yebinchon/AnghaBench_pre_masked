
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short* VAR_3 ;

__attribute__((used)) static int FUNC_0(int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    const unsigned short *VAR_8;

    VAR_4 = VAR_4 & (VAR_2 - 1);
    if (VAR_4 >= (VAR_2 / 2))
        VAR_4 = VAR_2 - VAR_4;
    VAR_5 = 0;
    if (VAR_4 > (VAR_2 / 4)) {
        VAR_5 = -1;
        VAR_4 = (VAR_2 / 2) - VAR_4;
    }
    VAR_8 = VAR_3 + (VAR_4 >> VAR_0);

    VAR_7 = VAR_4 & ((1 << VAR_0) - 1);
    VAR_6 = VAR_8[0] + (((VAR_8[1] - VAR_8[0]) * VAR_7 + (1 << (VAR_0 - 1))) >> VAR_0);
    VAR_6 = (VAR_6 ^ VAR_5) - VAR_5;
    VAR_6 = VAR_6 << (VAR_1 - 15);
    return VAR_6;
}
