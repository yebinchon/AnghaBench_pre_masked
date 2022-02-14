
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(const AVProbeData *VAR_1)
{
    uint32_t VAR_2, VAR_3;
    uint8_t VAR_4[8];


    VAR_3 = FUNC_0(VAR_1->buf);
    VAR_2 = VAR_3 ^ 0x52656453;
    VAR_3 ^= VAR_2;
    FUNC_2(VAR_4, VAR_3);
    VAR_2 = FUNC_3(VAR_2, 11);

    VAR_2 += FUNC_3(VAR_2, 3);
    VAR_3 = FUNC_0(VAR_1->buf + 4) ^ VAR_2;
    FUNC_2(VAR_4 + 4, VAR_3);

    if (FUNC_1(VAR_4) == FUNC_1("RedSpark"))
        return VAR_0;

    return 0;
}
