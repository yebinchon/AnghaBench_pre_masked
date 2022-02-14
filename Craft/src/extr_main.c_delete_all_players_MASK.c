
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int player_count; TYPE_1__* players; } ;
struct TYPE_3__ {int buffer; } ;
typedef TYPE_1__ Player ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_1() {
    for (int VAR_1 = 0; VAR_1 < VAR_0->player_count; VAR_1++) {
        Player *VAR_2 = VAR_0->players + VAR_1;
        FUNC_0(VAR_2->buffer);
    }
    VAR_0->player_count = 0;
}
