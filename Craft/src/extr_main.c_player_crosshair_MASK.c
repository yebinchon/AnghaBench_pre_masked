
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int player_count; int * players; } ;
typedef int Player ;


 float FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 float FUNC_1 (int *,int *) ;
 float FUNC_2 (int *,int *) ;

Player *FUNC_3(Player *VAR_1) {
    Player *VAR_2 = 0;
    float VAR_3 = FUNC_0(5);
    float VAR_4 = 0;
    for (int VAR_5 = 0; VAR_5 < VAR_0->player_count; VAR_5++) {
        Player *VAR_6 = VAR_0->players + VAR_5;
        if (VAR_6 == VAR_1) {
            continue;
        }
        float VAR_7 = FUNC_1(VAR_1, VAR_6);
        float VAR_8 = FUNC_2(VAR_1, VAR_6);
        if (VAR_8 < 96 && VAR_7 / VAR_8 < VAR_3) {
            if (VAR_4 == 0 || VAR_8 < VAR_4) {
                VAR_4 = VAR_8;
                VAR_2 = VAR_6;
            }
        }
    }
    return VAR_2;
}
