
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_3__ {char* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf;
    int VAR_3, VAR_4;
    int VAR_5 = (FUNC_2(VAR_2) == FUNC_2("SDPX"));

    if (VAR_1->buf_size < 0x304+8)
        return 0;
    VAR_3 = VAR_5 ? FUNC_0(VAR_1->buf + 0x304) : FUNC_1(VAR_1->buf + 0x304);
    VAR_4 = VAR_5 ? FUNC_0(VAR_1->buf + 0x308) : FUNC_1(VAR_1->buf + 0x308);
    if (VAR_3 <= 0 || VAR_4 <= 0)
        return 0;

    if (VAR_5 || FUNC_2(VAR_2) == FUNC_2("XPDS"))
        return VAR_0 + 1;
    return 0;
}
