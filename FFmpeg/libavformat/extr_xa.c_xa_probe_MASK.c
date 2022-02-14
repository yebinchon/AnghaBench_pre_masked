
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




__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    if (VAR_1->buf_size < 24)
        return 0;
    switch(FUNC_1(VAR_1->buf)) {
    case 130:
    case 129:
    case 128:
        break;
    default:
        return 0;
    }
    VAR_2 = FUNC_0(VAR_1->buf + 10);
    VAR_3 = FUNC_1(VAR_1->buf + 12);
    VAR_4 = FUNC_0(VAR_1->buf + 22);
    if (!VAR_2 || VAR_2 > 8 || !VAR_3 || VAR_3 > 192000 ||
        VAR_4 < 4 || VAR_4 > 32)
        return 0;
    return VAR_0;
}
