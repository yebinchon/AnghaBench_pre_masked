
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int chunk_count; int observe1; int observe2; scalar_t__ delete_radius; TYPE_3__* chunks; TYPE_1__* players; } ;
struct TYPE_10__ {int sign_buffer; int buffer; int signs; int lights; int map; } ;
struct TYPE_9__ {int z; int x; } ;
struct TYPE_8__ {TYPE_2__ state; } ;
typedef TYPE_2__ State ;
typedef TYPE_3__ Chunk ;


 scalar_t__ FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_6__* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_5 (int *) ;

void FUNC_6() {
    int VAR_1 = VAR_0->chunk_count;
    State *VAR_2 = &VAR_0->players->state;
    State *VAR_3 = &(VAR_0->players + VAR_0->observe1)->state;
    State *VAR_4 = &(VAR_0->players + VAR_0->observe2)->state;
    State *VAR_5[3] = {VAR_2, VAR_3, VAR_4};
    for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        Chunk *VAR_7 = VAR_0->chunks + VAR_6;
        int VAR_8 = 1;
        for (int VAR_9 = 0; VAR_9 < 3; VAR_9++) {
            State *VAR_10 = VAR_5[VAR_9];
            int VAR_11 = FUNC_1(VAR_10->x);
            int VAR_12 = FUNC_1(VAR_10->z);
            if (FUNC_0(VAR_7, VAR_11, VAR_12) < VAR_0->delete_radius) {
                VAR_8 = 0;
                break;
            }
        }
        if (VAR_8) {
            FUNC_3(&VAR_7->map);
            FUNC_3(&VAR_7->lights);
            FUNC_5(&VAR_7->signs);
            FUNC_2(VAR_7->buffer);
            FUNC_2(VAR_7->sign_buffer);
            Chunk *VAR_13 = VAR_0->chunks + (--VAR_1);
            FUNC_4(VAR_7, VAR_13, sizeof(Chunk));
        }
    }
    VAR_0->chunk_count = VAR_1;
}
