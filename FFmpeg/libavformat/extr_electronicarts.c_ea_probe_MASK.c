
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ AVProbeData ;



 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (unsigned int) ;


__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    unsigned VAR_2, VAR_3;

    switch (FUNC_0(&VAR_1->buf[0])) {
    case 136:
    case 131:
    case 130:
    case 129:
    case 128:
    case 135:
    case 134:
    case 132:
    case 133:
    case 137:
        break;
    default:
        return 0;
    }
    VAR_3 = FUNC_0(&VAR_1->buf[4]);
    VAR_2 = VAR_3 > 0x000FFFFF;
    if (VAR_2)
        VAR_3 = FUNC_1(VAR_3);
    if (VAR_3 > 0xfffff || VAR_3 < 8)
        return 0;

    return VAR_0;
}
