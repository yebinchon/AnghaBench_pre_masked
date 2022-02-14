
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    const char *VAR_2 = VAR_1->buf;
    const char *VAR_3 = VAR_1->buf + VAR_1->buf_size;

    while (VAR_2 < VAR_3) {
        int VAR_4;

        if (!FUNC_1(VAR_2, "FORMAT=TIME", 11))
            return VAR_0;
        if (!FUNC_1(VAR_2, "FORMAT=", 7))
            return VAR_0 / 3;
        VAR_4 = FUNC_0(VAR_2);
        if (!VAR_4)
            break;
        VAR_2 += VAR_4;
    }
    return 0;
}
