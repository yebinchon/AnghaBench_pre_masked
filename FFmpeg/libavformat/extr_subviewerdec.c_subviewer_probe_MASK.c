
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char const*,char*,char*) ;
 int FUNC_2 (unsigned char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_2)
{
    char VAR_3;
    const unsigned char *VAR_4 = VAR_2->buf;

    if (FUNC_0(VAR_4) == 0xEFBBBF)
        VAR_4 += 3;
    if (FUNC_1(VAR_4, "%*u:%*u:%*u.%*u,%*u:%*u:%*u.%*u%c", &VAR_3) == 1)
        return VAR_0;
    if (!FUNC_2(VAR_4, "[INFORMATION]", 13))
        return VAR_1/3;
    return 0;
}
