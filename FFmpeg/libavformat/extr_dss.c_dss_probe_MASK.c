
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,char,char,char) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if ( FUNC_0(VAR_1->buf) != FUNC_1(0x2, 'd', 's', 's')
        && FUNC_0(VAR_1->buf) != FUNC_1(0x3, 'd', 's', 's'))
        return 0;

    return VAR_0;
}
