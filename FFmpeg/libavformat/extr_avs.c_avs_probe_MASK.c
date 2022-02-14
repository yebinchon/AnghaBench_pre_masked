
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVProbeData * VAR_1)
{
    const uint8_t *VAR_2;

    VAR_2 = VAR_1->buf;
    if (VAR_2[0] == 'w' && VAR_2[1] == 'W' && VAR_2[2] == 0x10 && VAR_2[3] == 0)


        return VAR_0 + 5;

    return 0;
}
