
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    int VAR_2;
    if (FUNC_0(VAR_1->buf) != 0x8000)
        return 0;
    VAR_2 = FUNC_0(&VAR_1->buf[2]);
    if ( VAR_2 < 8
        || VAR_2 > VAR_1->buf_size - 4
        || FUNC_1(VAR_1->buf + VAR_2 - 2, "(c)CRI", 6))
        return 0;
    return VAR_0 * 3 / 4;
}
