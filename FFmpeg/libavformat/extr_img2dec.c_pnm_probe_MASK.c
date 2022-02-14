
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf;

    while (VAR_2[2] == '\r')
        VAR_2++;
    if (VAR_2[2] == '\n' && (VAR_2[3] == '#' || (VAR_2[3] >= '0' && VAR_2[3] <= '9')))
        return VAR_0 + 2;
    return 0;
}
