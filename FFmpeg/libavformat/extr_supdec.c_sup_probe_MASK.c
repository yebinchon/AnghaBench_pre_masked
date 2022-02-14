
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buf; size_t buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_4)
{
    unsigned char *VAR_5 = VAR_4->buf;
    size_t VAR_6 = VAR_4->buf_size;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
        size_t VAR_8;
        if (VAR_6 < 10 + 3)
            break;
        if (FUNC_0(VAR_5) != VAR_3)
            return 0;
        VAR_8 = FUNC_0(VAR_5 + 10 + 1) + 10 + 3;
        if (VAR_6 < VAR_8)
            break;
        VAR_5 += VAR_8;
        VAR_6 -= VAR_8;
    }
    if (!VAR_7)
        return 0;
    if (VAR_7 < 2)
        return VAR_2 / 2;
    if (VAR_7 < 4)
        return VAR_2;
    if (VAR_7 < 10)
        return VAR_0;
    return VAR_1;
}
