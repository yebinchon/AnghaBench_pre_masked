
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int int32_t ;
typedef int AVIOContext ;


 scalar_t__ FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_0, int *VAR_1,
                                int32_t *VAR_2)
{
    unsigned int VAR_3, VAR_4;
    int VAR_5, VAR_6;

    VAR_3 = *VAR_2;
    VAR_6 = *VAR_1;
    while (VAR_6 > 0) {
        if (FUNC_0(VAR_0))
            break;
        VAR_4 = FUNC_1(VAR_0);
        VAR_6--;
        if (VAR_3 == 0x000001) {
            VAR_3 = ((VAR_3 << 8) | VAR_4) & 0xffffff;
            VAR_5 = VAR_3;
            goto found;
        }
        VAR_3 = ((VAR_3 << 8) | VAR_4) & 0xffffff;
    }
    VAR_5 = -1;

found:
    *VAR_2 = VAR_3;
    *VAR_1 = VAR_6;
    return VAR_5;
}
