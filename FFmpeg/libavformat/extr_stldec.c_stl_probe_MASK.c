
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char const*) ;
 int FUNC_2 (unsigned char const*,char*,char*) ;
 int FUNC_3 (unsigned char const*,char*,int) ;

__attribute__((used)) static int FUNC_4(const AVProbeData *VAR_1)
{
    char VAR_2;
    const unsigned char *VAR_3 = VAR_1->buf;

    if (FUNC_0(VAR_3) == 0xEFBBBF)
        VAR_3 += 3;

    while (*VAR_3 == '\r' || *VAR_3 == '\n' || *VAR_3 == '$' || !FUNC_3(VAR_3, "//" , 2))
        VAR_3 += FUNC_1(VAR_3);

    if (FUNC_2(VAR_3, "%*d:%*d:%*d:%*d , %*d:%*d:%*d:%*d , %c", &VAR_2) == 1)
        return VAR_0;

    return 0;
}
