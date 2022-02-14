
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int player_count; TYPE_1__* players; } ;
struct TYPE_4__ {int id; } ;
typedef TYPE_1__ Player ;


 TYPE_2__* VAR_0 ;

Player *FUNC_0(int VAR_1) {
    for (int VAR_2 = 0; VAR_2 < VAR_0->player_count; VAR_2++) {
        Player *VAR_3 = VAR_0->players + VAR_2;
        if (VAR_3->id == VAR_1) {
            return VAR_3;
        }
    }
    return 0;
}
