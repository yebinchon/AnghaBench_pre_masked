
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {int (* diff_int16 ) (int*,int const*,int const*,scalar_t__,int) ;} ;
struct TYPE_5__ {int (* diff_bytes ) (int*,int const*,int const*,int) ;} ;
struct TYPE_7__ {int bps; scalar_t__ n; TYPE_2__ hencdsp; TYPE_1__ llvidencdsp; } ;
typedef TYPE_3__ HYuvContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int const*,int const*,int) ;
 int FUNC_2 (int*,int const*,int const*,scalar_t__,int) ;

__attribute__((used)) static inline int FUNC_3(HYuvContext *VAR_0, uint8_t *VAR_1,
                                      const uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6 = FUNC_0(VAR_3, 32);

    if (VAR_0->bps <= 8) {
        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
            const int VAR_7 = VAR_2[VAR_5];
            VAR_1[VAR_5] = VAR_7 - VAR_4;
            VAR_4 = VAR_7;
        }
        if (VAR_3 < 32)
            return VAR_4;
        VAR_0->llvidencdsp.diff_bytes(VAR_1 + 32, VAR_2 + 32, VAR_2 + 31, VAR_3 - 32);
        return VAR_2[VAR_3-1];
    } else {
        const uint16_t *VAR_8 = (const uint16_t *)VAR_2;
        uint16_t *VAR_9 = ( uint16_t *)VAR_1;
        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
            const int VAR_10 = VAR_8[VAR_5];
            VAR_9[VAR_5] = VAR_10 - VAR_4;
            VAR_4 = VAR_10;
        }
        if (VAR_3 < 32)
            return VAR_4;
        VAR_0->hencdsp.diff_int16(VAR_9 + 32, VAR_8 + 32, VAR_8 + 31, VAR_0->n - 1, VAR_3 - 32);
        return VAR_8[VAR_3-1];
    }
}
