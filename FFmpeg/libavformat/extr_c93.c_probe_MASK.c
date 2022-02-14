
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; scalar_t__* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    int VAR_2;
    int VAR_3 = 1;
    if (VAR_1->buf_size < 16)
        return 0;
    for (VAR_2 = 0; VAR_2 < 16; VAR_2 += 4) {
        if (FUNC_0(VAR_1->buf + VAR_2) != VAR_3 || !VAR_1->buf[VAR_2 + 2] || !VAR_1->buf[VAR_2 + 3])
            return 0;
        VAR_3 += VAR_1->buf[VAR_2 + 2];
    }
    return VAR_0;
}
