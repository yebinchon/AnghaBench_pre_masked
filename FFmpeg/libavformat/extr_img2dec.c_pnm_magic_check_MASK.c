
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {char* buf; } ;
typedef TYPE_1__ AVProbeData ;



__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_0, int VAR_1)
{
    const uint8_t *VAR_2 = VAR_0->buf;

    return VAR_2[0] == 'P' && VAR_2[1] == VAR_1 + '0';
}
