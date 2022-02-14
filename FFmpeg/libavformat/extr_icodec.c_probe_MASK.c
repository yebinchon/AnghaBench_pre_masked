
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (unsigned int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(const AVProbeData *VAR_2)
{
    unsigned VAR_3, VAR_4, VAR_5 = 0;

    if (VAR_2->buf_size < 22 || FUNC_1(VAR_2->buf) || FUNC_1(VAR_2->buf + 2) != 1)
        return 0;
    VAR_4 = FUNC_1(VAR_2->buf + 4);
    if (!VAR_4)
        return 0;
    for (VAR_3 = 0; VAR_3 < VAR_4 && VAR_3 * 16 + 22 <= VAR_2->buf_size; VAR_3++) {
        unsigned VAR_6;
        if (FUNC_1(VAR_2->buf + 10 + VAR_3 * 16) & ~1)
            return FUNC_3(VAR_3, VAR_0 / 4);
        if (VAR_2->buf[13 + VAR_3 * 16])
            return FUNC_3(VAR_3, VAR_0 / 4);
        if (FUNC_2(VAR_2->buf + 14 + VAR_3 * 16) < 40)
            return FUNC_3(VAR_3, VAR_0 / 4);
        VAR_6 = FUNC_2(VAR_2->buf + 18 + VAR_3 * 16);
        if (VAR_6 < 22)
            return FUNC_3(VAR_3, VAR_0 / 4);
        if (VAR_6 > VAR_2->buf_size - 8)
            continue;
        if (VAR_2->buf[VAR_6] != 40 && FUNC_0(VAR_2->buf + VAR_6) != VAR_1)
            return FUNC_3(VAR_3, VAR_0 / 4);
        VAR_5++;
    }

    if (VAR_5 < VAR_4)
        return VAR_0 / 4 + FUNC_3(VAR_5, 1);
    return VAR_0 / 2 + 1;
}
