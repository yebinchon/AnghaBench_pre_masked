
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    if (VAR_1->buf_size < 0x2c)
        return 0;
    if (FUNC_2(VAR_1->buf) == 0)
        return 0;
    VAR_3 = FUNC_0(VAR_1->buf + 0x18);
    VAR_2 = FUNC_0(VAR_1->buf + 0x1a);
    if (!VAR_2 || !VAR_3)
        return 0;
    VAR_4 = FUNC_1(VAR_1->buf + 0x28);
    if ((VAR_4 < 1235 || VAR_4 > 1260) &&
        (VAR_4 < 1270 || VAR_4 > 1274))
        return 0;
    return VAR_0;
}
