
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

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if (FUNC_0(VAR_1->buf) != FUNC_1('G','E','N','H'))
        return 0;
    if (FUNC_0(VAR_1->buf+4) <= 0 || FUNC_0(VAR_1->buf+4) > 0xFFFF)
        return 0;

    return VAR_0 / 3 * 2;
}
