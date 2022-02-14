
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    if (FUNC_0(VAR_1->buf ) != 0x000E ||
        FUNC_0(VAR_1->buf + 4) != 0x0050 ||
        FUNC_0(VAR_1->buf + 12) != 0x0034)
        return 0;
    return VAR_0;
}
