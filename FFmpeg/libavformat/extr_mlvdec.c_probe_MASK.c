
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char,char,char,char) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_2)
{
    if (FUNC_0(VAR_2->buf) == FUNC_1('M','L','V','I') &&
        FUNC_0(VAR_2->buf + 4) >= 52 &&
        !FUNC_2(VAR_2->buf + 8, VAR_1, 5))
        return VAR_0;
    return 0;
}
