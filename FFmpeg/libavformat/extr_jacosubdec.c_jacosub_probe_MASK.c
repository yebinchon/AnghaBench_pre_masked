
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const AVProbeData *VAR_1)
{
    const char *VAR_2 = VAR_1->buf;
    const char *VAR_3 = VAR_1->buf + VAR_1->buf_size;

    if (FUNC_0(VAR_2) == 0xEFBBBF)
        VAR_2 += 3;

    while (VAR_2 < VAR_3) {
        while (FUNC_2(*VAR_2))
            VAR_2++;
        if (*VAR_2 != '#' && *VAR_2 != '\n') {
            if (FUNC_3(VAR_2))
                return VAR_0 + 1;
            return 0;
        }
        VAR_2 += FUNC_1(VAR_2);
    }
    return 0;
}
