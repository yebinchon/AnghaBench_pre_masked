
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {int table; } ;
struct TYPE_5__ {int table; } ;
struct TYPE_7__ {TYPE_2__ ac_vlc; TYPE_1__ dc_vlc; int gb; } ;
typedef int GetBitContext ;
typedef TYPE_3__ CLVContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t* VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int,int) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static inline int FUNC_6(CLVContext *VAR_2, int16_t *VAR_3, int VAR_4,
                               int VAR_5)
{
    GetBitContext *VAR_6 = &VAR_2->gb;
    int VAR_7 = 1, VAR_8 = 0, VAR_9, VAR_10;

    FUNC_5(VAR_3, 0, sizeof(*VAR_3) * 64);
    VAR_3[0] = FUNC_4(VAR_6, VAR_2->dc_vlc.table, 9, 3);
    if (VAR_3[0] < 0)
        return VAR_0;
    VAR_3[0] -= 63;

    if (!VAR_4)
        return 0;

    while (VAR_7 < 64 && !VAR_8) {
        VAR_9 = FUNC_4(VAR_6, VAR_2->ac_vlc.table, 9, 2);
        if (VAR_9 < 0)
            return VAR_0;
        if (VAR_9 != 0x1BFF) {
            VAR_8 = VAR_9 >> 12;
            VAR_10 = (VAR_9 >> 4) & 0xFF;
            VAR_9 &= 0xF;
            if (FUNC_2(VAR_6))
                VAR_9 = -VAR_9;
        } else {
            VAR_8 = FUNC_2(VAR_6);
            VAR_10 = FUNC_1(VAR_6, 6);
            VAR_9 = FUNC_3(VAR_6, 8);
        }
        if (VAR_9) {
            int VAR_11 = FUNC_0(VAR_9), VAR_12 = VAR_9 < 0;
            VAR_9 = VAR_5 * (2 * VAR_11 + 1);
            if (!(VAR_5 & 1))
                VAR_9--;
            if (VAR_12)
                VAR_9 = -VAR_9;
        }
        VAR_7 += VAR_10;
        if (VAR_7 >= 64)
            return VAR_0;
        VAR_3[VAR_1[VAR_7++]] = VAR_9;
    }

    return (VAR_7 <= 64 && VAR_8) ? 0 : -1;
}
