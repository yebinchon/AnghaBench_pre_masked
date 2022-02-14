
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; float* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    if (VAR_1->buf_size > 8 &&
        VAR_1->buf[0] == 'F' && VAR_1->buf[1] == 'R' && VAR_1->buf[2] == 'M' &&
        FUNC_0(&VAR_1->buf[4]) && FUNC_0(&VAR_1->buf[6]))
        return VAR_0 / 4;
    return 0;
}
