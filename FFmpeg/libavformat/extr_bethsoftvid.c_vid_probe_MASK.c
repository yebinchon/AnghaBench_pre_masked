
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (char,char,char,int ) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{

    if (FUNC_0(VAR_1->buf) != FUNC_1('V', 'I', 'D', 0))
        return 0;

    if (VAR_1->buf[4] != 2)
        return VAR_0 / 4;

    return VAR_0;
}
