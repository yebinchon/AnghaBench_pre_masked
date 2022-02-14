
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
 scalar_t__ FUNC_2 (char,char,float,float) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_1)
{
    if (FUNC_1(VAR_1->buf) == FUNC_2('c','a','f','f') && FUNC_0(&VAR_1->buf[4]) == 1)
        return VAR_0;
    return 0;
}
