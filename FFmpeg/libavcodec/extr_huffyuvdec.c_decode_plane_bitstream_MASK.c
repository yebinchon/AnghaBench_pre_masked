
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bps; int gb; scalar_t__** temp16; TYPE_1__* vlc; scalar_t__** temp; } ;
struct TYPE_4__ {int table; } ;
typedef TYPE_2__ HYuvContext ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__,scalar_t__,int,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 unsigned int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int *) ;
 int VAR_2 ;
 int FUNC_7 (scalar_t__,int ,int *,int ,int ,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_11(HYuvContext *VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8 = VAR_5/2;

    if (VAR_4->bps <= 8) {
        FUNC_2(VAR_3, &VAR_4->gb);
        if (VAR_8 >= (FUNC_9(&VAR_4->gb)) / (32 * 2)) {
            for (VAR_7 = 0; VAR_7 < VAR_8 && FUNC_0(VAR_3, &VAR_4->gb) > 0; VAR_7++) {
                FUNC_3(VAR_4->temp[0][2 * VAR_7], VAR_4->temp[0][2 * VAR_7 + 1], VAR_6, VAR_1);
            }
        } else {
            for(VAR_7=0; VAR_7<VAR_8; VAR_7++){
                FUNC_3(VAR_4->temp[0][2 * VAR_7], VAR_4->temp[0][2 * VAR_7 + 1], VAR_6, VAR_1);
            }
        }
        if( VAR_5&1 && FUNC_0(VAR_3, &VAR_4->gb)>0 ) {
            unsigned int VAR_9;
            int VAR_10, VAR_11, VAR_12;
            FUNC_6(VAR_3, &VAR_4->gb);
            VAR_9 = FUNC_5(VAR_3, &VAR_4->gb, VAR_2);
            FUNC_7(VAR_4->temp[0][VAR_5-1], VAR_4->vlc[VAR_6].table,
                       &VAR_4->gb, VAR_3, VAR_2, 3);
        }
        FUNC_1(VAR_3, &VAR_4->gb);
    } else if (VAR_4->bps <= 14) {
        FUNC_2(VAR_3, &VAR_4->gb);
        if (VAR_8 >= (FUNC_9(&VAR_4->gb)) / (32 * 2)) {
            for (VAR_7 = 0; VAR_7 < VAR_8 && FUNC_0(VAR_3, &VAR_4->gb) > 0; VAR_7++) {
                FUNC_3(VAR_4->temp16[0][2 * VAR_7], VAR_4->temp16[0][2 * VAR_7 + 1], VAR_6, VAR_0);
            }
        } else {
            for(VAR_7=0; VAR_7<VAR_8; VAR_7++){
                FUNC_3(VAR_4->temp16[0][2 * VAR_7], VAR_4->temp16[0][2 * VAR_7 + 1], VAR_6, VAR_0);
            }
        }
        if( VAR_5&1 && FUNC_0(VAR_3, &VAR_4->gb)>0 ) {
            unsigned int VAR_13;
            int VAR_14, VAR_15, VAR_16;
            FUNC_6(VAR_3, &VAR_4->gb);
            VAR_13 = FUNC_5(VAR_3, &VAR_4->gb, VAR_2);
            FUNC_7(VAR_4->temp16[0][VAR_5-1], VAR_4->vlc[VAR_6].table,
                       &VAR_4->gb, VAR_3, VAR_2, 3);
        }
        FUNC_1(VAR_3, &VAR_4->gb);
    } else {
        if (VAR_8 >= (FUNC_9(&VAR_4->gb)) / (32 * 2)) {
            for (VAR_7 = 0; VAR_7 < VAR_8 && FUNC_9(&VAR_4->gb) > 0; VAR_7++) {
                FUNC_4(VAR_4->temp16[0][2 * VAR_7], VAR_4->temp16[0][2 * VAR_7 + 1], VAR_6);
            }
        } else {
            for(VAR_7=0; VAR_7<VAR_8; VAR_7++){
                FUNC_4(VAR_4->temp16[0][2 * VAR_7], VAR_4->temp16[0][2 * VAR_7 + 1], VAR_6);
            }
        }
        if( VAR_5&1 && FUNC_9(&VAR_4->gb)>0 ) {
            int VAR_17 = FUNC_10(&VAR_4->gb, VAR_4->vlc[VAR_6].table, VAR_2, 3)<<2;
            VAR_4->temp16[0][VAR_5-1] = VAR_17 + FUNC_8(&VAR_4->gb, 2);
        }
    }
}
