
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int buf_size; scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char,char,char,char) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_1)
{
    unsigned VAR_2;
    if (FUNC_1(VAR_1->buf) != FUNC_2('B', 'B', 'C', 'D'))
        return 0;

    VAR_2 = FUNC_0(VAR_1->buf+5);
    if (VAR_2 < 13)
        return 0;
    if (VAR_2 + 13LL > VAR_1->buf_size)
        return VAR_0 / 4;
    if (FUNC_1(VAR_1->buf + VAR_2) != FUNC_2('B', 'B', 'C', 'D'))
        return 0;

    return VAR_0;
}
