
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {int buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,int,int,int,int*,int *) ;

__attribute__((used)) static int FUNC_7(const AVProbeData *VAR_1)
{
    uint64_t VAR_2 = 0;
    int VAR_3[3] = { 0 };
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    uint8_t *VAR_11;

    for (VAR_5 = 0; VAR_5 < VAR_1->buf_size; VAR_5++) {
        VAR_2 = (VAR_2 << 8) | VAR_1->buf[VAR_5];
        if (!FUNC_5(VAR_2))
            continue;

        VAR_11 = VAR_1->buf + VAR_5 + 1;
        if (FUNC_3(VAR_2)) {
            VAR_8 = FUNC_0(VAR_11 );
            VAR_9 = FUNC_0(VAR_11 + 2);
        } else {
            VAR_8 = FUNC_1(VAR_11 );
            VAR_9 = FUNC_1(VAR_11 + 3);
        }

        if (FUNC_6(((void*)0), VAR_2, VAR_8, VAR_9, &VAR_10, ((void*)0)))
            continue;

        VAR_4 = FUNC_3(VAR_2) ? 0 : FUNC_4(VAR_2) ? 1 : 2;
        VAR_3[VAR_4]++;

        VAR_5 += FUNC_3(VAR_2) ? 4 : 6;
        VAR_5 += VAR_10;
        VAR_2 = 0;
    }

    VAR_6 = VAR_7 = 0;
    for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_3); VAR_4++) {
        VAR_6 += VAR_3[VAR_4];
        if (VAR_3[VAR_7] < VAR_3[VAR_4])
            VAR_7 = VAR_4;
    }

    if (VAR_3[VAR_7] > 3 && VAR_3[VAR_7] * 4 > VAR_6 * 3)
        return VAR_0 + 1;

    return 0;
}
