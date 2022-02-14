
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const AVProbeData *VAR_1)
{

    if ((VAR_1->buf[0] == '.' && VAR_1->buf[1] == 'R' &&
         VAR_1->buf[2] == 'M' && VAR_1->buf[3] == 'F' &&
         VAR_1->buf[4] == 0 && VAR_1->buf[5] == 0) ||
        (VAR_1->buf[0] == '.' && VAR_1->buf[1] == 'r' &&
         VAR_1->buf[2] == 'a' && VAR_1->buf[3] == 0xfd))
        return VAR_0;
    else
        return 0;
}
