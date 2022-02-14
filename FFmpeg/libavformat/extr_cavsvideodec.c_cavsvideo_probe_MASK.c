
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__* buf; int buf_size; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* FUNC_0 (scalar_t__ const*,scalar_t__ const*,int*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_7)
{
    uint32_t VAR_8= -1;
    int VAR_9=0, VAR_10=0, VAR_11 = 0;
    const uint8_t *VAR_12 = VAR_7->buf, *VAR_13 = VAR_7->buf + VAR_7->buf_size;

    while (VAR_12 < VAR_13) {
        VAR_12 = FUNC_0(VAR_12, VAR_13, &VAR_8);
        if ((VAR_8 & 0xffffff00) == 0x100) {
            if(VAR_8 < VAR_4) {

                if(VAR_8 < VAR_11)
                    return 0;
                VAR_11 = VAR_8;
            } else {
                VAR_11 = 0;
            }
            if (VAR_8 == VAR_4) {
                VAR_10++;

                if (*VAR_12 != VAR_3)
                    return 0;
            } else if ((VAR_8 == VAR_1) ||
                       (VAR_8 == VAR_2)) {
                VAR_9++;
            } else if ((VAR_8 == VAR_5) ||
                       (VAR_8 > VAR_6)) {
                return 0;
            }
        }
    }
    if(VAR_10 && VAR_10*9<=VAR_9*10)
        return VAR_0+1;
    return 0;
}
