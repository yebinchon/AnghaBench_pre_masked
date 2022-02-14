
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*,char*,int) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if (FUNC_1(VAR_1->buf, "FSB", 3) || VAR_1->buf[3] - '0' < 1 || VAR_1->buf[3] - '0' > 5)
        return 0;
    if (FUNC_0(VAR_1->buf + 4) != 1)
        return 0;
    return VAR_0;
}
