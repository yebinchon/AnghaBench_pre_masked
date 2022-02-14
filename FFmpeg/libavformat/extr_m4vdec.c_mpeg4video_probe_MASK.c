
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_5)
{
    uint32_t VAR_6 = -1;
    int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
    int VAR_12 = 0;
    int VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_5->buf_size; VAR_13++) {
        VAR_6 = (VAR_6 << 8) + VAR_5->buf[VAR_13];
        if (VAR_6 & 0xfffffe00)
            continue;
        if (VAR_6 < 2)
            continue;

        if (VAR_6 == VAR_4)
            VAR_9++;
        else if (VAR_6 == VAR_3)
            VAR_10++;
        else if (VAR_6 >= 0x100 && VAR_6 < 0x120)
            VAR_7++;
        else if (VAR_6 >= 0x120 && VAR_6 < 0x130)
            VAR_8++;
        else if (VAR_6 == VAR_2 || VAR_6 == VAR_1)
            VAR_12++;
        else if (!(0x1AF < VAR_6 && VAR_6 < 0x1B7) &&
                 !(0x1B9 < VAR_6 && VAR_6 < 0x1C4))
            VAR_11++;
    }




    if (VAR_12 && 2*VAR_12 < VAR_9)
        VAR_11 += VAR_12;

    if (VAR_9 >= VAR_10 && VAR_9 >= VAR_8 && VAR_7 >= VAR_8 && VAR_8 > 0 && VAR_11 == 0)
        return VAR_9+VAR_7 > 4 ? VAR_0 : VAR_0/2;

    if (VAR_9 >= VAR_10 && VAR_9 >= VAR_8 && VAR_7 >= VAR_8 && VAR_8 > 0 && VAR_9+VAR_7 > 4)
        return VAR_0/10;
    return 0;
}
