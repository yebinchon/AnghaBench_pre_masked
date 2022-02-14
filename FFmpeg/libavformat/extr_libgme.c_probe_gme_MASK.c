
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; int buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{

    if (FUNC_0(VAR_1->buf)[0]) {
        if (VAR_1->buf_size < 16384)
            return VAR_0 / 4 ;
        else
            return VAR_0 / 2;
    }
    return 0;
}
