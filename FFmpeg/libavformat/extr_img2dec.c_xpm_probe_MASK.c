
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf;

    if (FUNC_0(VAR_2) == 0x2f2a2058504d202a && *(VAR_2+8) == '/')
        return VAR_0 - 1;
    return 0;
}
