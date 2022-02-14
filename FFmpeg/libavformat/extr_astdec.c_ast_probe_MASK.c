
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char,char,char,char) ;

__attribute__((used)) static int FUNC_4(const AVProbeData *VAR_1)
{
    if (FUNC_2(VAR_1->buf) != FUNC_3('S','T','R','M'))
        return 0;

    if (!FUNC_0(VAR_1->buf + 10) ||
        !FUNC_0(VAR_1->buf + 12) || FUNC_0(VAR_1->buf + 12) > 256 ||
        !FUNC_1(VAR_1->buf + 16) || FUNC_1(VAR_1->buf + 16) > 8*48000)
        return VAR_0 / 8;

    return VAR_0 / 3 * 2;
}
