
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_1)
{

    if (VAR_1->buf[0] == 'F' && VAR_1->buf[1] == 'O' &&
        VAR_1->buf[2] == 'R' && VAR_1->buf[3] == 'M' &&
        VAR_1->buf[8] == 'A' && VAR_1->buf[9] == 'I' &&
        VAR_1->buf[10] == 'F' && (VAR_1->buf[11] == 'F' || VAR_1->buf[11] == 'C'))
        return VAR_0;
    else
        return 0;
}
