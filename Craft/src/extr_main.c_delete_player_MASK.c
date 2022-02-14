
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int player_count; TYPE_1__* players; } ;
struct TYPE_6__ {int buffer; } ;
typedef TYPE_1__ Player ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_4__* VAR_0 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;

void FUNC_3(int VAR_1) {
    Player *VAR_2 = FUNC_1(VAR_1);
    if (!VAR_2) {
        return;
    }
    int VAR_3 = VAR_0->player_count;
    FUNC_0(VAR_2->buffer);
    Player *VAR_4 = VAR_0->players + (--VAR_3);
    FUNC_2(VAR_2, VAR_4, sizeof(Player));
    VAR_0->player_count = VAR_3;
}
