
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if (FUNC_0(VAR_1->buf ) == FUNC_0("RIFF") &&
        FUNC_1(VAR_1->buf+8) == FUNC_1("QLCMfmt "))
        return VAR_0;
    return 0;
}
