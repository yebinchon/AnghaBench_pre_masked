
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int int64_t ;
struct TYPE_3__ {char* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char const**) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_3)
{
    const uint8_t *VAR_4 = VAR_3->buf + 4;
    const uint8_t *VAR_5 = VAR_4 + VAR_3->buf_size;
    int64_t VAR_6;

    if (VAR_3->buf_size < 16)
        return 0;
    if (FUNC_0(VAR_3->buf) != VAR_2)
        return 0;
    while (VAR_4 < VAR_5 + 3) {
        int VAR_7 = (VAR_4[0] == 'S' && VAR_4[1] == 'H');
        if (VAR_4[0] < 'A' || VAR_4[0] > 'Z' || VAR_4[1] < 'A' || VAR_4[1] > 'Z')
            return 0;
        VAR_4 += 2;
        VAR_6 = FUNC_1(&VAR_4);
        if (VAR_6 < 2)
            return 0;
        if (VAR_6 >= VAR_5 - VAR_4 + 2)
            return VAR_0 - 1;
        if (VAR_7) {
            if (VAR_6 < 11 || VAR_6 > 28)
                return 0;
            if (!FUNC_0(VAR_4))
                return 0;
            return VAR_1;
        } else {
            VAR_4 += VAR_6 - 2;
        }
    }
    return 0;
}
