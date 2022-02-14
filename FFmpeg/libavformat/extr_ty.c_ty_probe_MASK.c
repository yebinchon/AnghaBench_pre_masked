
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 + 12 < VAR_3->buf_size; VAR_4 += VAR_1) {
        if (FUNC_0(VAR_3->buf + VAR_4) == VAR_2 &&
            FUNC_0(VAR_3->buf + VAR_4 + 4) == 0x02 &&
            FUNC_0(VAR_3->buf + VAR_4 + 8) == VAR_1) {
            return VAR_0;
        }
    }

    return 0;
}
