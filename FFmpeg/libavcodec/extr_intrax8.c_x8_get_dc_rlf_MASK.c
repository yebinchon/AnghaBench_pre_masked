
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int quant; int gb; TYPE_3__** j_dc_vlc; } ;
typedef TYPE_1__ IntraX8Context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int* VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_3__** VAR_3 ;

__attribute__((used)) static int FUNC_3(IntraX8Context *const VAR_4, const int VAR_5,
                         int *const VAR_6, int *const VAR_7)
{
    int VAR_8, VAR_9, VAR_10;

    FUNC_0(VAR_5 < 3);
    if (!VAR_4->j_dc_vlc[VAR_5]) {
        int VAR_11 = FUNC_1(VAR_4->gb, 3);

        VAR_4->j_dc_vlc[VAR_5] = &VAR_3[VAR_4->quant < 13][VAR_11];
    }

    VAR_8 = FUNC_2(VAR_4->gb, VAR_4->j_dc_vlc[VAR_5]->table, VAR_0, VAR_1);


    VAR_10 = VAR_8 > 16;
    *VAR_7 = VAR_10;
    VAR_8 -= 17 * VAR_10;

    if (VAR_8 <= 0) {
        *VAR_6 = 0;
        return -VAR_8;
    }
    VAR_10 = (VAR_8 + 1) >> 1;
    VAR_10 -= VAR_10 > 1;

    VAR_9 = FUNC_1(VAR_4->gb, VAR_10);
    VAR_8 = VAR_2[VAR_8] + (VAR_9 >> 1);

    VAR_9 = -(VAR_9 & 1);
    *VAR_6 = (VAR_8 ^ VAR_9) - VAR_9;
    return 0;
}
