
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char,char,float,float) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_2)
{
    if (FUNC_0(VAR_2->buf) != FUNC_1('L', 'V', 'F', 'F'))
        return 0;

    if (!FUNC_0(VAR_2->buf + 16) || FUNC_0(VAR_2->buf + 16) > 256)
        return VAR_1 / 8;

    return VAR_0;
}
