
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,char*,unsigned char*) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_1)
{
    unsigned char VAR_2;
    const uint8_t *VAR_3 = VAR_1->buf;
    int VAR_4;

    if (FUNC_0(VAR_3) == 0xEFBBBF)
        VAR_3 += 3;

    for (VAR_4=0; VAR_4<3; VAR_4++) {
        if (FUNC_2(VAR_3, "{%*d}{}%c", &VAR_2) != 1 &&
            FUNC_2(VAR_3, "{%*d}{%*d}%c", &VAR_2) != 1 &&
            FUNC_2(VAR_3, "{DEFAULT}{}%c", &VAR_2) != 1)
            return 0;
        VAR_3 += FUNC_1(VAR_3);
    }
    return VAR_0;
}
