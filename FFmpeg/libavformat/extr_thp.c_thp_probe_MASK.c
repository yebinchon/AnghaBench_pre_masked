
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char,char,char,char) ;
 double FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (double) ;

__attribute__((used)) static int FUNC_5(const AVProbeData *VAR_1)
{
    double VAR_2;

    if (FUNC_1(VAR_1->buf) != FUNC_2('T', 'H', 'P', '\0'))
        return 0;

    VAR_2 = FUNC_3(FUNC_0(VAR_1->buf + 16));
    if (VAR_2 < 0.1 || VAR_2 > 1000 || FUNC_4(VAR_2))
        return VAR_0/4;

    return VAR_0;
}
