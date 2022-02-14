
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ chunk_count; TYPE_3__* chunks; } ;
struct TYPE_11__ {scalar_t__ dirty; } ;
struct TYPE_9__ {int z; int x; } ;
struct TYPE_10__ {TYPE_1__ state; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;
typedef TYPE_3__ Chunk ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 TYPE_3__* FUNC_2 (int,int) ;
 TYPE_5__* VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(Player *VAR_2) {
    State *VAR_3 = &VAR_2->state;
    int VAR_4 = FUNC_0(VAR_3->x);
    int VAR_5 = FUNC_0(VAR_3->z);
    int VAR_6 = 1;
    for (int VAR_7 = -VAR_6; VAR_7 <= VAR_6; VAR_7++) {
        for (int VAR_8 = -VAR_6; VAR_8 <= VAR_6; VAR_8++) {
            int VAR_9 = VAR_4 + VAR_7;
            int VAR_10 = VAR_5 + VAR_8;
            Chunk *VAR_11 = FUNC_2(VAR_9, VAR_10);
            if (VAR_11) {
                if (VAR_11->dirty) {
                    FUNC_3(VAR_11);
                }
            }
            else if (VAR_1->chunk_count < VAR_0) {
                VAR_11 = VAR_1->chunks + VAR_1->chunk_count++;
                FUNC_1(VAR_11, VAR_9, VAR_10);
                FUNC_3(VAR_11);
            }
        }
    }
}
