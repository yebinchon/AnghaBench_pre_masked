
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,char) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    char VAR_2;
    const unsigned char *VAR_3 = VAR_1->buf;

    if ((FUNC_0(VAR_3, "%*3d:%*2d:%*2d.%*2d%c", &VAR_2) == 1 ||
         FUNC_0(VAR_3, "%*3d:%*2d:%*2d%c", &VAR_2) == 1) && FUNC_1(": =", VAR_2))
        return VAR_0;
    return 0;
}
