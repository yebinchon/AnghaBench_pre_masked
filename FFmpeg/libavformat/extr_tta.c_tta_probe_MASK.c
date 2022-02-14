
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char,char,char,char) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_1)
{
    if (FUNC_1(&VAR_1->buf[0]) == FUNC_2('T', 'T', 'A', '1') &&
        (FUNC_0(&VAR_1->buf[4]) == 1 || FUNC_0(&VAR_1->buf[4]) == 2) &&
        FUNC_0(&VAR_1->buf[6]) > 0 &&
        FUNC_0(&VAR_1->buf[8]) > 0 &&
        FUNC_1(&VAR_1->buf[10]) > 0)
        return VAR_0 + 30;
    return 0;
}
