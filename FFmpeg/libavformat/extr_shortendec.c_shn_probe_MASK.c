
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; int buf_size; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 void* FUNC_1 (int *,unsigned int) ;
 scalar_t__ FUNC_2 (int *,int*,int) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_2)
{
    GetBitContext VAR_3;
    int VAR_4, VAR_5, VAR_6, VAR_7;

    if (FUNC_0(VAR_2->buf) != 0x616a6b67)
        return 0;
    VAR_4 = VAR_2->buf[4];
    if (FUNC_2(&VAR_3, VAR_2->buf + 5, VAR_2->buf_size - 5 - VAR_1) < 0)
        return 0;
    if (!VAR_4) {
        VAR_5 = FUNC_1(&VAR_3, 4);
        VAR_6 = FUNC_1(&VAR_3, 0);
        VAR_7 = 256;
    } else {
        unsigned VAR_8;
        VAR_8 = FUNC_1(&VAR_3, 2);
        if (VAR_8 > 31)
            return 0;
        VAR_5 = FUNC_1(&VAR_3, VAR_8);
        VAR_8 = FUNC_1(&VAR_3, 2);
        if (VAR_8 > 31)
            return 0;
        VAR_6 = FUNC_1(&VAR_3, VAR_8);
        VAR_8 = FUNC_1(&VAR_3, 2);
        if (VAR_8 > 31)
            return 0;
        VAR_7 = FUNC_1(&VAR_3, VAR_8);
    }

    if (VAR_5 != 2 && VAR_5 != 3 && VAR_5 != 5)
        return 0;
    if (VAR_6 < 1 || VAR_6 > 8)
        return 0;
    if (VAR_7 < 1 || VAR_7 > 65535)
        return 0;

    return VAR_0 + 1;
}
