
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char,char,char,char) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    if (VAR_1->buf_size < 0x44)
        return 0;

    if (FUNC_0(VAR_1->buf) != FUNC_1('M','T','A','F') ||
        FUNC_0(VAR_1->buf + 0x40) != FUNC_1('H','E','A','D'))
        return 0;

    return VAR_0;
}
