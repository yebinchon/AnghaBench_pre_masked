
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char,char,char,char) ;

__attribute__((used)) static int FUNC_3(const AVProbeData * VAR_3)
{
    int VAR_4 = FUNC_0(VAR_3->buf+4);
    if (FUNC_1(VAR_3->buf) != FUNC_2('M', 'A', 'C', ' '))
        return 0;

    if (VAR_4 < VAR_1 || VAR_4 > VAR_0)
        return VAR_2/4;

    return VAR_2;
}
