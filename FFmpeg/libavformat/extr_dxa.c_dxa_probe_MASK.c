
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; char* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    int VAR_2, VAR_3;
    if (VAR_1->buf_size < 15)
        return 0;
    VAR_2 = FUNC_0(VAR_1->buf + 11);
    VAR_3 = FUNC_0(VAR_1->buf + 13);

    if (VAR_1->buf[0] == 'D' && VAR_1->buf[1] == 'E' &&
        VAR_1->buf[2] == 'X' && VAR_1->buf[3] == 'A' &&
        VAR_2 && VAR_2 <= 2048 && VAR_3 && VAR_3 <= 2048)
        return VAR_0;
    else
        return 0;
}
