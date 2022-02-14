
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cb_vlc; } ;
struct TYPE_4__ {int table; } ;
typedef TYPE_2__ On2AVCContext ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int,float) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(On2AVCContext *VAR_0, GetBitContext *VAR_1, float *VAR_2,
                               int VAR_3, int VAR_4, float VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9;

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += 4) {
        VAR_8 = FUNC_0(VAR_1, VAR_0->cb_vlc[VAR_4].table, 9, 3);

        for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
            VAR_9 = FUNC_2((VAR_8 >> (12 - VAR_7 * 4)) & 0xF, 4);
            *VAR_2++ = FUNC_1(VAR_9, VAR_5);
        }
    }

    return 0;
}
