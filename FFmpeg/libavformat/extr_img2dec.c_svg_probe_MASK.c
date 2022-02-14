
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_3__ {int buf_size; int const* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_1)
{
    const uint8_t *VAR_2 = VAR_1->buf;
    const uint8_t *VAR_3 = VAR_1->buf + VAR_1->buf_size;

    if (FUNC_1(VAR_1->buf, "<?xml", 5))
        return 0;
    while (VAR_2 < VAR_3) {
        int VAR_4 = FUNC_0(VAR_2);
        if (!VAR_4)
            break;
        VAR_2 += VAR_4;
        if (VAR_2 >= VAR_3 - 4)
            return 0;
        if (!FUNC_1(VAR_2, "<svg", 4))
            return VAR_0 + 1;
    }
    return 0;
}
