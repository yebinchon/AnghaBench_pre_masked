
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    uint32_t VAR_2;

    if (VAR_1->buf_size < 24)
        return 0;

    VAR_2 = FUNC_0(&VAR_1->buf[4]);
    if (VAR_1->buf[3] != 0xC5 || VAR_2 < 4 || VAR_2 > VAR_1->buf_size - 20 ||
        FUNC_0(&VAR_1->buf[VAR_2+16]) != 0xC)
        return 0;

    return VAR_0;
}
